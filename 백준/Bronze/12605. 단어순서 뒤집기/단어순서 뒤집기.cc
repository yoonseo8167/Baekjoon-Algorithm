#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string line;
    getline(cin, line);

    for (int caseNum = 1; caseNum <= N; ++caseNum) {
        getline(cin, line);

        // 스페이스로 단어 분리
        vector<string> words;
        istringstream iss(line);
        string w;
        while (iss >> w) {
            words.push_back(w);
        }

        // "Case #x: " 출력
        cout << "Case #" << caseNum << ": ";
        // 뒤집은 단어들 순차 출력(역순 순회회)
        for (auto it = words.rbegin(); it != words.rend(); ++it) {
            if (it != words.rbegin()) 
                cout << ' ';
            cout << *it;
        }
        cout << '\n';
    }

    return 0;
}