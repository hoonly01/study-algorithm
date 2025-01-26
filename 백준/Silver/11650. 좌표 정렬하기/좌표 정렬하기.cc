#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Coordinate
{
public:
    int x;
    int y;
    Coordinate(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    bool operator<(const Coordinate &coordinate) const
    {
        if (this->x != coordinate.x)
            return this->x < coordinate.x;
        if (this->y != coordinate.y)
            return this->y < coordinate.y;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<Coordinate> coordinate;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        coordinate.emplace_back(x, y);
    }

    sort(coordinate.begin(), coordinate.end());

    for (int i = 0; i < n; i++)
    {
        cout << coordinate[i].x << " " << coordinate[i].y << '\n';
    }

    return 0;
}