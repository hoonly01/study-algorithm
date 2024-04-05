#include <iostream>
using namespace std;

int main()
{
    int a, b, c, m;
    int cnt = 0;
    int fatigue = 0;

    cin >> a >> b >> c >> m;

    for(int i=0; i<24; i++)
    {
        if(fatigue + a <= m)
        {
            cnt++;
            fatigue += a;
        }
        else
        {
            fatigue -= c;
            if(fatigue < 0)
                fatigue = 0;
        }
    }
    cout << cnt * b << endl;

    return 0;
}