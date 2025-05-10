#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    cin >> K;

    vector<int> st;    // vector를 stack처럼 사용
    st.reserve(K);     // 버퍼 크기 제어로 한 번에 메모리 할당

    for (int i = 0; i < K; i++) {
        int N;
        cin >> N;
        if (N == 0) {
            if (!st.empty()) 
                st.pop_back();
        } else {
            st.push_back(N);
        }
    }
    // 합 계산
    long long sum = 0;
    for (int x : st) 
        sum += x;

    cout << sum << " ";
    return 0;
}
