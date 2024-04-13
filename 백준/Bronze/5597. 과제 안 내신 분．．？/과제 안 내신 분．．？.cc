#include <iostream>
using namespace std;

int main()
{
    int num;
    bool student[30] = {false,};

    for(int i=0; i<28; i++)
    {
        cin >> num;
        student[num-1] = true;
    }

    for(int i=0; i<30; i++)
    {
        if(!student[i])
            cout << i+1 << endl;
    }
}