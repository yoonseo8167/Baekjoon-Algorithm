#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<char> wheel(N, '?');
    vector<bool> used(26, false);

    int pos = 0;
    bool impossible = false;

    for (int i = 0; i < K; i++) {
        int S;
        char c;
        cin >> S >> c;
        int shift = S % N;
        pos = (pos - shift + N) % N;

        if (wheel[pos] == '?') {
            int idx = c - 'A';
            if (used[idx]) {
                impossible = true;
                break;
            }
            wheel[pos] = c;
            used[idx] = true;
        }
        else if (wheel[pos] != c) {
            impossible = true;
            break;
        }
    }

    if (impossible) {
        cout << "!\n";
        return 0;
    }

    for (int i = 0; i < N; i++) {
        cout << wheel[(pos + i) % N];
    }
    cout << "\n";

    return 0;
}