#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // fish skeleton.
    // N ribs(1~N), 1 spine
    // write one string on each of the N + 1 bones
    //   - length_spine = N
    //   - rib: length_rib_i = A_i
    //   - B_i char on rib_i == ith char on spine
    //   each of str is onf of S1, S2,, SM. duplicate allowed
    // Si: lowercase, distinct
    // N: int, 1~10
    // 1<=i<=N
    // 1<=B_i<=A_i<=10
    // M: int, 1~200 000
    // Sj: str, lower,
    // 1<=|Sj|<=10
    // Sj: pairwise distinct
    int N;
    cin >> N;
    vector<pair<int, int>> ribs;
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        ribs.emplace_back(A, B);
    }
    int M;
    cin >> M;
    vector<string> S(M);
    vector<vector<char>> candidates(N);
    for (int i = 0; i < M; i++) {
        cin >> S[i];
        

    }
    for (auto &s : S) {
        if (s.size() != N) {
            cout << "No\n";
            continue;
        }
        
    }
    return 0;
}
