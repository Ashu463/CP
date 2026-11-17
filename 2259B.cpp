#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ;i < n; i++) cin>>arr[i];
    long long ans = 1;
    int odd = 0, even = 0, four = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] & 1){
            odd++;
        }
        else{
            if(arr[i] %4 == 0) four++;
            else even++;
        }

    }
    cout<<max({odd, even, four})<<endl;
    return ;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}