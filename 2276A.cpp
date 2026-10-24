#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b;
    cin>>a>>b;

    if(b >= a) {
        cout<<-1<<endl;
        return;
    }
    int i = 2, ans = 1;
    while(i <= b){
        int x1 = b/i, x2 = a/i, y1 = b%i, y2 = a%i;
        if(x1 < x2){
            if(y1 > y2){
                cout<<ans<<endl;
                return;
            }
            else ans++;
        }
        else{
            if(y1 == y2) ans++;
            else{
                cout<<ans<<endl;
                return;
            }
        }
        i++;
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