#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
bool isPrime(int x){
    for(int i=2;i<x/2;++i){
        if(x==1) continue;
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> ans;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
    int i=1,j=x;
    bool flag=true;
    while(i<j){
        if(isPrime(i+j)){
            flag=false;
            cout<<-1<<"\n";
        }else{
            ans.push_back(i);
            ans.push_back(j);
        }
        i++;
        j--;
    }
    if(flag){
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}
    return 0;
}
