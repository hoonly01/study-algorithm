#include <iostream>
using namespace std;

int main()
{
    int n;
    int num;
    int tot = 0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> num;
        tot += num;
    }

    cout << tot << endl;

    return 0;
}