#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int cnt = 0;
    int num[10];

    cin >> n ;
    
    while(n/10 != 0)
    {
        num[cnt] = n%10;
        n /= 10;
        cnt++;
    }
    num[cnt] = n%10;
    
    sort(num, num+cnt+1);

    for(int i=cnt; i>=0; i--)
    {
        cout << num[i];
    }

    return 0;
}