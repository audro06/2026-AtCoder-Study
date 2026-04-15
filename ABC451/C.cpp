#include <bits/stdc++.h>

using namespace std;

void print_map(map<long long, int> &m) {
    for (auto i : m) {
        cout << i.first << ' ' << i.second << ',';
    }
    cout << '\n';
}

void erase_tree(map<long long, int> &trees, long long h, long long &num_trees) {
    if (trees.empty()) {
        return;
    }
    auto pos = trees.upper_bound(h);
    if (pos != trees.begin()) {
        for (auto i = trees.begin();i!=pos;i++) {
            num_trees -= i->second;
        }
        trees.erase(trees.begin(), pos);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //초기 나무는 0개
    //1 h: h높이 나무 추가
    //2 h: 최대 h높이 이하 나무 제거.
    //1<=Q<=3*10^5
    //1<=h<=10^9 <<10억이니깐 longlong써야할듯
    //
    //출력은 쿼리 시동 후 나무 개수
    //계속 정렬해야함 >> map.
    int Q;
    cin >> Q;
    map<long long, int> trees;
    long long num_trees = 0;
    while (Q--) {
        int t;
        long long h;
        cin >> t >> h;
        if (t == 1) {
            trees[h]++;
            num_trees++;
        } else {
            erase_tree(trees, h, num_trees);
        }
        //print_map(trees);
        cout << num_trees << '\n';
    }
    return 0;
}
