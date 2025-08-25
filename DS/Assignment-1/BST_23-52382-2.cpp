#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string ID;
    string Name;
    float CGPA;
    Node* left;
    Node* right;

    Node(string id, string name, float cgpa) {
        ID = id;
        Name = name;
        CGPA = cgpa;
        left = NULL;
        right = NULL;
    }

    Node* insert(Node* root, string ID, string Name, float CGPA) {
        if (root == NULL) {
            return new Node(ID, Name, CGPA);
        }
        if (ID < root->ID) {
            root->left = insert(root->left, ID, Name, CGPA);
        }
        else if (ID > root->ID) {
            root->right = insert(root->right, ID, Name, CGPA);
        }
        return root;
    }
};

bool search(Node* root, string ID) {
    if (root == NULL) {
        return false;
    }
    if (root->ID == ID) {
        return true;
    } 
    else if (ID < root->ID) {
        return search(root->left, ID);
    } 
    else {
        return search(root->right, ID);
    }
}

Node* deleteNode(Node* root, string ID) {
    if (root == NULL) {
        return root;
    }

    if (ID < root->ID) {
        root->left = deleteNode(root->left, ID);
    }
    else if (ID > root->ID) {
        root->right = deleteNode(root->right, ID);
    }
    else if (ID == root->ID) {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        else {
            Node* successor = root->right;
            while (successor->left != NULL) {
                successor = successor->left;
            }
            
            root->ID = successor->ID;
            root->Name = successor->Name;
            root->CGPA = successor->CGPA;

            root->right = deleteNode(root->right, successor->ID);
        }
    }
    return root;
}

void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->ID << " " << root->Name << " " << root->CGPA << endl;
    inorder(root->right);
}

int main() {
    Node* root = NULL;
    root = root->insert(root, "23-52382-2", "Sadman", 3.92);
    root = root->insert(root, "23-54323-2", "Swad", 2.89);
    root = root->insert(root, "24-32532-1", "Anonto", 2.76);
    root = root->insert(root, "22-32143-3", "Emon", 3.73);
    root = root->insert(root, "20-32454-3", "Adit", 3.98);

    inorder(root);
    cout << endl;

    deleteNode(root, "23-52382-2");
    
    inorder(root);
    cout << endl;

    string searchID;
    cout << "Enter ID to search: ";
    cin >> searchID;
    
    if (search(root, searchID)) {
        cout << searchID << " found." << endl;
    } 
    else {
        cout << searchID << " not found." << endl;
    }

    return 0;
}
