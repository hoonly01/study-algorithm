#include <iostream>
using namespace std;

int main()
{
    int n,stu,sex;
    int num;
    int check;
    bool status;

    cin >> n;
    bool* swi = new bool[n+1];
    // 0번 사용 X 1~n번 사용

    for(int i=1; i<=n; i++)
    {
        cin >> status;
        swi[i] = status;
    }

    cin >> stu;
    for(int i=0; i<stu; i++)
    {
        cin >> sex >> num;
        if(sex==1) // 1==남자
        {
            check = num;
            while(check <= n)
            {
                swi[check] = !(swi[check]);
                check += num;
            }
        }
        else // 여자
        {
            check = 1;
            swi[num] = !(swi[num]);
            while(swi[num-check] == swi[num+check] && (num-check >= 1) && (num+check <= n))
            {   
                swi[num-check] = !(swi[num-check]);
                swi[num+check] = !(swi[num+check]);
                check++;
            }
        }
    }

    check = 1;
    for(int i=1; i<=n; i++)
    {
        cout << swi[i] << " ";
        check++;
        if(check == 21)
        {
            cout << endl;
            check = 1;
        }
    }
    return 0;
}