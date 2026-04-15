#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // H, W;
    // 모든 그리드를 한가지 색으로
    int H, W;
    cin >> H >> W;
    for (int i=0;i<W;i++) cout << "#";
    cout << "\n";
    for (int i=0;i<H-2;i++) {
        cout << "#";
        for (int j=1;j<W-1;j++) cout << ".";
        cout << "#\n";
    }
    for (int i=0;i<W;i++) cout << "#";
    return 0;
}
