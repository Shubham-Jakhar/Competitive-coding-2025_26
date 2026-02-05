#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> freq;
        for (int i=0;i<s.size();i++){
            char c = s[i];
            freq[c]++;
        }
        char maxChar = s[0], minChar = s[0];
        for (auto &p : freq) {
            if (p.second > freq[maxChar]) maxChar = p.first;
            if (p.second < freq[minChar]) minChar = p.first;
        }
        if (freq.size() == 1) {
            cout << s << "\n";
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == minChar) {
                s[i] = maxChar;
                break;
            }
        }
        cout << s << "\n";
    }
    return 0;
}
