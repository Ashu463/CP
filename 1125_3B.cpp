
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;

	stack<int> st;
	vector<int> ans;
	for(int i = 1; i <= s.length(); i++){
		// if(s[i-1] == '3') continue;
		if(s[i-1] == '1') st.push(i);
		else if(s[i-1] == '2'){
			if(!st.empty()){
				st.pop();
				ans.push_back(i);
			}
			// else st.push(i);
		}
	}
	while(!st.empty()){
		ans.push_back(st.top());
		st.pop();
	}
	sort(ans.begin(), ans.end());
	// if(ans.size() == 0) cout<<0<<endl;
	// else {
	// }
	cout<<ans.size()<<endl;
	for(int i:ans) cout<<i<<" ";
	cout<<endl;
	
	return ;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

