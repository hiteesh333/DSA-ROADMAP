class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ts=0;
        int ls=0;
        for(int num:nums){
            ts +=num;
        }
        for(int i=0;i<nums.size();i++){
            if(ls == ts-ls-nums[i]) return i; //rs=ts-ls-nums[i]
            ls +=nums[i];
        }
        return -1;
    }
};
