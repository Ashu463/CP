#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    int ones = 0, zeros = 0;
    for(int i = 0 ; i < n; i++){
        cin>>v[i];
        if(v[i] == 1) ones++;
        else zeros++;
    }
    if(ones >= zeros) cout<<"Bessie"<<endl;
    else cout<<"Elsie"<<endl;
    return;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}