#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long x, y, k;
    cin>>x>>y>>k;

    long long ans = 0;
    while(k > 0){
        ans += y % x;
        y++;
        x++;
        k--;
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