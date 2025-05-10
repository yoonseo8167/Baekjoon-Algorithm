#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    cin >> K;

    vector<int> st;
    st.reserve(K);

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

    long long sum = 0;
    for (int x : st) 
        sum += x;

    cout << sum << " ";
    return 0;
}