#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> deck;
    int num, t;

    cin >> num;

    for(int i=1; i<=num; i++) {
        deck.push(i);
    }
    while( deck.size() != 1 ) {
        cout << deck.front() << " ";
        deck.pop();
        deck.push(deck.front());
        deck.pop();
    }
    cout << deck.front();

    return 0;
}