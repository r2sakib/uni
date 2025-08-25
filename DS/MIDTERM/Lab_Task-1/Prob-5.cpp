#include <iostream>
using namespace std;

bool isPrime(int num) {
    bool flag = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            flag = false;
        }
    }
    return flag;
}

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact*=i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << factorial(num);
    }
    else {
        cout << num << " is not a prime";
    }


}