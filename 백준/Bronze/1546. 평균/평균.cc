#include <iostream>
using namespace std;

int main()
{
    int n;
    float score;
    float max = -1;
    float new_score = 0;
    
    cin >> n;
    float* sub = new float[n];

    for(int i=0; i<n; i++)
    {
        cin >> score;
        if(score > max)
            max = score;
        
        sub[i] = score;
    }

    for(int i=0; i<n; i++)
    {
        sub[i] = sub[i] / max * 100;
        new_score += sub[i];
    }

    cout << new_score / n << endl;

    return 0;
}