#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k, num;
    int* arr = nullptr;

    cin >> n >> k;
    arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    sort(arr, arr+n);

    cout << arr[k-1] << endl;
}