///week05-3.cpp
///LeetCode 2206. Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501]= {};///�j�A���̭��A�S�g�����A�|��0
        for(int i=0;i<nums.size();i++){
            int now = nums[i];///��@��ơA�Ӷ��ǱƦn
            a[now]++;///�Ӫ�� now �Ʀr�A��n+1
        }
        for(int i=1;i<=500;i++){///�v�@�ˬd���
            if(a[i]%2==1) return false;///�_��?����!
        }
        return true;
    }
}
