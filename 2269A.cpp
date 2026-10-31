#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>>n>>k;

    if(k == 1){
        cout<<(long long)pow(2, n)<<endl;
        return;
    }
    if(n == k){
        cout<<2*n<<endl;
        return;
    }
    cout<<(long long)pow(2, n-k+1) + 2*(k-1) <<endl;
    return;
}
int main() {
    int t;
    cin>>t;
    while(t--){solve();
    }
}