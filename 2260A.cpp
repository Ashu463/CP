#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int zeroCnt = 0;
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
        if(a[i] == 0){
            zeroCnt++;
        }
    }
    if(zeroCnt < 2){
        cout<<-1<<endl;
        return;
    }
    if(a[0] == 0 && a[n-1] == 0){
        cout<<0<<endl;
        return;
    }
    if(a[0] == 1 && a[n-1] == 1){
        cout<<2<<endl;
        return;
    }
    if(a[0] == 1 || a[n-1] == 1){
        cout<<1<<endl;
        return;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}