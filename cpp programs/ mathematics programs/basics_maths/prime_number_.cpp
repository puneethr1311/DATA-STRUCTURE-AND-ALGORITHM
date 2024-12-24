#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter the number: ";
    cin >> x;
    cout << endl;
    if (x < 2)
    {
        cout << "this number is not a prime number";
    }
    else if (x == 2)
    {
        cout << "this is a prime number";
    }
    else
        
        {
            int k = 1;
            int n = 3;
            while (n < x)
            {
                if (x % n == 0)
                {
                    k = 0;
                }
                if (k != 0)
                {
                    n++;
                }
                else
                {
                    break;
                }
            }
            if (k == 0)
            {
                cout << "this is not a prime number" << endl;
            }
            else
            {
                cout << "this is a prime number" << endl;
            }
        }
    return 0;
}