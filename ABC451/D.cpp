#include <bits/stdc++.h>

using namespace std;

void add_pow(vector<int> &s, int dig) {
    static int last = 1;
    while (last < dig * 10) {
        s.pop_back(last);
        last *= 2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //조건: 2의 거듭제곱 중 하나 이상, 문자열로 연결
    //최대: 10^9 << 10억. int
    //일단 1,2,4,8,16,32,64,128,,,
    //1,2,4,8,11,12,14,18,21,22,24,28,32,,,
    //한자릿수: 1,2,4,8이 중요할 듯
    //1. 일단 벡터에 한자릿 수만 추가.
    //2.다음자릿수 만들기
    // 1)거듭제곱인 두자릿수 추가.
    // 2)한자릿수 + 한자릿수 조합 추가.
    //3. 세자릿수
    // 1)거듭제곱인 세자릿수 추가.
    // 2)한자릿수 + 두자릿수 조합 추가.
    // 3)한자릿수 + 한자릿수 + 한자릿수 조합 추가.
    //and so on
    //그냥 벡터 쓰고 마지막에 정렬.

    int N;
    cin >> N;
    vector<int> v;
    int dig = 1;
    while (1) {

        add_pow(v, dig);
        if (v.size() > N) {
            break;
        }

    }
    sort(v.begin(), v.end());
    cout << v[N] << '\n';
    return 0;
}
