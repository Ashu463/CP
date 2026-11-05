#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(3);
    int ans = 0;
    for(int i = 0 ; i < 3; i++){
        cin>>a[i];
        ans = max(n-a[i], ans);
    }
    cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}