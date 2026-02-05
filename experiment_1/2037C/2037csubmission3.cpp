#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
    if (n <= 4) {
        cout << -1 <<"\n";
        continue;
    }
    for (int i = 1; i <= n; i=i+2) {
        if (i == 5) continue;
        cout << i << " ";
    }
    cout << "5 4 ";
    for (int i = 2; i <= n; i =i + 2) {
        if (i == 4) continue;
        cout << i << " ";
    } 
    cout <<"\n";
    }
    return 0;
}