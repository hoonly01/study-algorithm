#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    int dec[10] = {0,};

    cin >> a >> b >> c;

    a = a * b * c;

    while(a!=0)
    {
        dec[(a % 10)]++;
        a = a / 10;
    }
    for(int i=0; i<=9; i++)
    {
        cout << dec[i] << endl;
    }

    return 0;
}