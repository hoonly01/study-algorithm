#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    if(t % 10 != 0)
        cout << -1 << endl;
    else
        cout << t / 300 << " " << (t%300)/60 << " " << ((t%300)%60)/10 << endl;

    return 0;
}