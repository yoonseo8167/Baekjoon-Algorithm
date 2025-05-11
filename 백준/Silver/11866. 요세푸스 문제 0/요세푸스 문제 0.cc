#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    deque<int> dq;
    for (int i = 1; i <= N; i++) {
        dq.push_back(i);
    }

    vector<int> result;
    result.reserve(N);

    while (!dq.empty()) {
        // 1. K-1번만큼 앞의 사람들을 뒤로 보낸다
        for (int i = 1; i < K; i++) {
            dq.push_back(dq.front());
            dq.pop_front();
        }
        // 2. 맨 앞의 K번째 제거하고 결과에 추가
        result.push_back(dq.front());
        dq.pop_front();
    }

    // 출력
    cout << '<';
    for (int i = 0; i < N; i++) {
        if (i) cout << ", ";
        cout << result[i];
    }
    cout << '>' << '\n';

    return 0;
}