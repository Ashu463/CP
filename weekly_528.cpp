#include <bits/stdc++.h>
using namespace std;
int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int cnt = n;
        for(int i = 0 ; i < n; i++){
            int mini = nums[i];
            int res = nums[i];
            for(int j = i + 1; j < n; j++){
                res = res & nums[j];
                mini = min(mini, nums[j]);
                if(res == mini) cnt++;
                // else break;
            }
        }
        return cnt;
    }
    long long maxDifference(vector<int>& nums) {
        int n = nums.size();
        long long a = 0, b = 0;
        bool turn = 0;
        for(int i = 0 ; i < nums.size(); ){
            bool cond = false;
            // make the condition. 
            if(i < n-1){
                int curr_sum = nums[i] + nums[i+1];
                if(curr_sum % 3 == 0){
                    if(nums[i] % 3 == 0) cond = true;
                    else cond = false;
                }
            }
            if(cond){
                long long curr_sum = nums[i] + nums[i+1];
                if(turn == 0) a+= curr_sum;
                else b+= curr_sum;

                if(curr_sum % 3 == 0){
                    turn = !turn;
                }
                i += 2;
            }
            else{
                if(turn == 0) a+= nums[i];
                else b += nums[i];
                i++;
            }
        }
        return (a - b);
    }
int main() {
    vector<int> nums = {6, 1, 2, 1, 2};
    cout<<maxDifference(nums);
}