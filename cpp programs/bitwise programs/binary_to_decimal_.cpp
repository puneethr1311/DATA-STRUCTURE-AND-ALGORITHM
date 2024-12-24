#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int b;
    cout << "enter the binary number : ";
    cin >> b;
    int i = 0;
    double ans = 0;
    while (b != 0)
    {
        int bit = b & 1;
        if (bit == 1)
        {
            ans = pow(2, i) + ans;
        }
        i++;
        b = b / 10;
    }
    cout << "decimal number corrosponded to binary number " << b << " is : "<< ans;

    return 0;
}