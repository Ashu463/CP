#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x, y, r;
    cin>>x>>y>>r;

    for(int i = -15; i <= 35; i++){
        for(int j = -15; j <= 35; j++){
            if(r*r == ((x-i)*(x-i) + (y-j)*(y-j))){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}