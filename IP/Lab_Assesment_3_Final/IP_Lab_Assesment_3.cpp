#include <iostream>
#include <string>
using namespace std;

class Mobile
{
    private:
        int IMEI_NO;
    protected:
        string MODEL;
        string SCREEN;
    public:
        Mobile(int n)
        {
            IMEI_NO = n;
        }
        
        void setinfo(string m, string s)
        {
            MODEL = m;
            SCREEN = s;
        }

        void getinfo()
        {
            cout<< "IMEI Number: " << IMEI_NO <<endl;
            cout<< "Model: " << MODEL <<endl;
            cout<< "Screen: " << SCREEN <<endl;
        }
};

class Samsung : public Mobile
{
    public:
        Samsung();

        Samsung(int n, string m, string s) : Mobile(n)
        {
            MODEL = m;
            SCREEN = s;
        }

        ~Samsung()
        {
            cout << "Samsung destructor called" << endl;
        }
};

class Iphone : public Mobile
{
    public:
        Iphone();

        Iphone(int n, string m, string s) : Mobile(n)
        {
            MODEL = m;
            SCREEN = s;
        }

        ~Iphone()
        {
            cout << "iPhone destructor called" << endl;
        }
};

class Nokia : public Mobile
{
    public:
        Nokia();

        Nokia(int n, string m, string s) : Mobile(n)
        {
            MODEL = m;
            SCREEN = s;
        }

        ~Nokia()
        {
            cout << "Nokia destructor called" << endl;
        }
};


int main()
{
    Samsung samsung(48932954, "Galaxy", "AMOLED");
    Iphone iphone(32944249, "15 Pro", "Retina Display");
    Nokia nokia(29032923, "LCD", "Nokia 8");

    cout << "Samsung" << endl;
    samsung.getinfo();
    cout << endl;

    cout << "iPhone" << endl;
    iphone.getinfo();
    cout << endl;

    cout << "Nokia" << endl;
    nokia.getinfo();
    cout << endl;

    return 0;
}