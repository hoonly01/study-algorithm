#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, k;
    queue<int> que;
    
    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        que.push(i+1);
    }

    cout << "<";
    while(que.size()>1)
    {
        for(int i=0; i<k-1; i++)
        {
            que.push(que.front());
            que.pop();
        }
        cout << que.front() << ", ";
        que.pop();
    }
    cout << que.front() << ">";

    return 0;
}