#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double s, m, l, xl, xxl, xxxl;
    int t, p;
    int tot=0;

    cin >> n;
    cin >> s >> m >> l >> xl >> xxl >> xxxl;
    cin >> t >> p;

    tot += ceil(s/t) + ceil(m/t) + ceil(l/t) + ceil(xl/t) + ceil(xxl/t) + ceil(xxxl/t);

    cout << tot << '\n' << (n/p) << " " << (n%p);

    return 0;
}