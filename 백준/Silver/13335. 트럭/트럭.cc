#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, w, l, wei;
    int now_truck;
    int time = 0;
    queue<int> truck;
    queue<int> bridge;
    queue<int> time_cnt;
    int truck_cnt = 0;
    int now_weight = 0;

    cin >> n >> w >> l;

    for (int i = 0; i < n; i++)
    {
        cin >> wei;
        truck.push(wei);
    }

    // 1초 뒤에 해야 할 것
    while (!truck.empty())
    {
        time++;

        if(!(time_cnt.empty()) && time - time_cnt.front() == w)
        {
            truck_cnt--;
            now_weight -= bridge.front();
            time_cnt.pop();
            bridge.pop();
        }

        if (l >= now_weight + truck.front() && truck_cnt < w) // 트럭 1대 더 올라갈 수 있으면 올려줌
        {
            now_weight += truck.front();
            truck_cnt++;
            bridge.push(truck.front());
            truck.pop();
            time_cnt.push(time);
        }
    }
    cout << time+w << endl;
    return 0;
}