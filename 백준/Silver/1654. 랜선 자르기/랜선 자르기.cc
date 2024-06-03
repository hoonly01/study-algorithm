#include <iostream>
using namespace std;

int main()
{
    long long int* line = nullptr;
    long long int n, k;
    long long int len;
    long long int max_len;

    long long int cnt;
    long long int first, last, mid;

    cin >> k >> n;
    line = new long long int[k];

    for (int i = 0; i < k; i++)
    {
        cin >> len;
        line[i] = len;
        last += len;
    }

    first = 1;

    while(first <= last)
    {
        cnt = 0;
        mid = (first + last) / 2;
        
        for (int i = 0; i < k; i++)
        {
            cnt += line[i] / mid;
        }
        if(cnt >= n)
        {
            max_len = mid;
            first = mid+1;
        }
        else
        {
            last = mid-1;
        }
    }

    cout << max_len << endl;

    return 0;
}