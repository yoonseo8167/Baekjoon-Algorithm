#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    deque<int> q;
    q.resize(N);
    
    iota(q.begin(), q.end(), 1);

    while (q.size() > 1) {
        // 1) 맨 앞 카드 버림
        q.pop_front();
        // 2) 그 다음 맨 앞 카드 맨 뒤로 옮기기
        q.push_back(q.front());
        q.pop_front();
    }

    // 남은 카드 출력
    cout << q.front() << " ";
    return 0;
}