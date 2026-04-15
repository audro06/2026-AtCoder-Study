#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, int>> v = {
        {1, 7},
        {3, 3},
        {5, 5},
        {7, 7}, // July 7
        {9, 9}
    };
    pair<int, int> date;
    cin >> date.first >> date.second;
    for (auto& x : v) {
        if (x == date) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
