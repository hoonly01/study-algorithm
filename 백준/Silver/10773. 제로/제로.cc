#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    int money;
    int cnt = 0;
    stack<int> sta;
    
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> money;
        if(money != 0)
            sta.push(money);
        else
            sta.pop();
    }

    while(!sta.empty())
    {
        cnt += sta.top();
        sta.pop();
    }

    cout << cnt << endl;

    return 0;
}