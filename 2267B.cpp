#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    vector<int> ans(n);

    int maxi = *max_element(arr.begin(), arr.end());
    map<int, int> m;
    int mid_count = 0;
    for(int i: arr){
        if(i <= maxi/2){
            mid_count++;
        }

    }
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i = 0 ; i < n - mid_count ; i++){
        ans[i] = arr[i];
    }
    for(int i = mid_count; i < n; i++){
        ans[i] = arr[]
    }


}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}