#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, num;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    if(n%2 ==0)
    {
        cout << v[(n/2)-1] << endl;
    }
    else
        cout << v[n/2] << endl;

    return 0;
}