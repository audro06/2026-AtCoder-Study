#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    if (str.size() % 5 == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
