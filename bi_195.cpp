#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abca";
    int n = s.length();
        long long cnt = 0;
        for(int i = 0 ; i +2 < n ; i++){
            string str = s.substr(i, 3);
            if(str == "abc") {
                cnt+= i+1;
                
            }
        }
        long long total = (n * (n+1)) / 2;
        cout<< total - cnt<<endl;
        cout<<cnt<<endl;
}