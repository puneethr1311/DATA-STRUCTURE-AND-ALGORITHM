#include <iostream>
#include <stdint.h>
using namespace std;

int main()
{   int x=7;
    u_int16_t a = 4;
    cout << a << endl;
    cout << sizeof(a); 
    // it gives o/p 2 which means 2 byte ; means2*8 =16 byte
    cout << sizeof(x);
    return 0;
}