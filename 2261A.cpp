#include <bits/stdc++.h>
#define ll long long;
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    long long mini = n+1, maxi = -1;
    for(long long i = 1 ; i <= n; i++){
        if(s[i-1] == '1'){
            mini = min(mini, i);
            maxi = max(maxi, i);
        }
    }
    cout<<maxi - mini<<endl;
    return;
}   
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}