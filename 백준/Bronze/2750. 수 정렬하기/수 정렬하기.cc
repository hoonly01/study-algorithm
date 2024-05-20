#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, num;
    int* arr=nullptr;

    cin >> n;

    arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin >> num;
        arr[i] = num;
    }
    sort(arr,arr+n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}