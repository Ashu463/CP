
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
		if(s[i-1] == '3') continue;
		else if(s[i-1] == '1') st.push(i);
		else if(s[i-1] == '2'){
			if(st.size() > 0){
				st.pop();
				st.push(i);
			}
			// else st.push(i);
		}
	}
	if(st.size() > 0){
		cout<<st.size()<<endl;
		while(st.size() > 0){
			ans.push_back(st.top());
			st.pop();
		}
		sort(ans.begin(), ans.end());
		for(int i:ans) cout<<i<<" ";
		cout<<endl;
	}
	else cout<<0<<endl<<endl;
	
	return ;

}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
