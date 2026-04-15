#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    int a, b;
    vector<int> v(M + 1);
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        v[a]--;
        v[b]++;
    }
    v.erase(v.begin());
    for (int x : v) {
        cout << x << '\n';
    }
    return 0;
}
