#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    unordered_map<int,int> countMap;
    countMap.reserve(N * 2);

    // 상근이가 가진 카드 빈도 세기
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        ++countMap[x];
    }

    int M;
    cin >> M;

    // 주어진 카드 처리 및 출력
    for (int i = 0; i < M; ++i) {
        int q;
        cin >> q;
        if (i) cout << ' ';
        auto it = countMap.find(q);
        cout << (it != countMap.end() ? it->second : 0);
    }
    cout << '\n';

    return 0;
}