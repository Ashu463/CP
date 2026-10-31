#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    char c;
    cin>>n;
    cin>>c;
    string s;
    cin>>s;
    
    int i = 0, j = n-1;
    long long ans = 0;
    while(i <= j){
        if(s[i] != s[j]){
            if(s[i] != c) ans++;
            if(s[j] != c) ans++;
        }
        i++;
        j--;
    }
    cout<<ans<<endl;
    return;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}