#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    
    long long maxi = 0;
    for(int i = 0 ;i < n; i++){
        if(arr[i] == 0) continue;
        long long loop_maxi = 0;
        long long cnt = 1;
        for(int j = i + 1; j < n; j++){
            cnt++;
            if(arr[j] == -1 || arr[j] == 1) loop_maxi = max(cnt, loop_maxi);
            if(arr[j] == 1) cnt = 1;
        }
        maxi = max(maxi, loop_maxi);
    }
    cout<<maxi<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}