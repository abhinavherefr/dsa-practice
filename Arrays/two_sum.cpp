#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int el = nums[i];
            int more = target - el;
            if(mpp.find(more) != mpp.end()) return {i, mpp[more]};
            mpp[el] = i;
        }
        return {-1, -1};
        
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {2, 5, 6, 8, 11, 15};
    int target = 14;
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    if(result[0] != -1){
        cout << "Indices of the two numbers that add up to " << target << " are: ",
        cout << result[0] << " and " << result[1] << endl;
    }
    else cout<<"No two number add upto " << target << endl;  

    return 0;
}
