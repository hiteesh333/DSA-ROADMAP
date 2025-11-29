class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int i=1;
        while(s.count(i)) i++;
        return i;
    }
};
