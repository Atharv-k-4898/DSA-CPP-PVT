#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

struct comparePair {
    bool operator()(const pair<string, int>& p1, const pair<string, int>& p2) const {
        return p1.second < p2.second; // max heap based on int value
    }
};

int main() {
    FASTIO;
    priority_queue<pair<string, int>, vector<pair<string, int>>, comparePair> pq;
    pq.push({"aman", 50});
    pq.push({"ath", 60});
    pq.push({"chetak", 80});
    pq.push({"ram", 99});
    while (!pq.empty()) {
        cout << "Top = " << pq.top().first << ", " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}
