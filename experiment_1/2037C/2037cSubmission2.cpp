#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int x){
    if(x <= 1) return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;

        vector<int> ans;  
        int i = 1, j = x;
        bool flag = true;

        while(i < j){
            if(isPrime(i + j)){
                cout << -1 << "\n";
                flag = false;
                break; 
            } else {
                ans.push_back(i);
                ans.push_back(j);
            }
            i++;
            j--;
        }

        if(flag){
            for(int it : ans){
                cout << it << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
