///week12-6.cpp
///LeeCode 1920. Build Array from Permutation
///用for迴圈把陣列ans[i]=nums[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();//陣列大小
        vector<int> ans(N);//ans的大小是N小心是原括號c++的陣列
        for(int i=0;i<N;i++){
            ans[i]=nums[nums[i]];//題目要你做這個
        }
        return ans;
    }
};
