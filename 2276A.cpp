#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin>>a>>b;

    if(b >= a) {
        cout<<-1<<endl;
        return;
    }
    cout<<min(b, (a-b))<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}