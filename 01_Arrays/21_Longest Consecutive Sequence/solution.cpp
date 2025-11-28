class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int currlen=1;
        int maxlen=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                currlen +=1;
            }
            else{
                maxlen=max(maxlen,currlen);
                currlen=1;
            }
        }
        maxlen=max(maxlen,currlen);
        return maxlen;
    }
};
