#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if (n <= 2){
        cout<<"YES"<<endl;
        return ;
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(arr[i-1] == i) cnt++;
    }
    if(cnt >= n/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return ;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}