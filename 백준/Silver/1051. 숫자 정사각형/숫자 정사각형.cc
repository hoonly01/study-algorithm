#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m;
    int num;
    int** arr;
    int size = 1;
    int idx;
    string line;

    cin >> n >> m;

    arr = new int*[n];

    for(int i=0; i<n; i++)
    {
        arr[i] = new int[m];
    }

    for(int i=0; i<n; i++)
    {
        cin >> line;
        for(int j=0; j<line.length(); j++)
        {
            arr[i][j] = line[j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            idx = 1;
            while(j+idx < m && i+idx < n)
            {
                if(arr[i][j] == arr[i][j+idx] && arr[i][j] == arr[i+idx][j] && arr[i][j] == arr[i+idx][j+idx])
                {
                    if((idx+1) * (idx+1) > size)
                        size = (idx+1) * (idx+1);
                }
                idx++;
            }
        }
    }
    cout << size << endl;
        
    return 0;
}