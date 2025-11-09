class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int r=target-nums[i];
            if(m.find(r) !=m.end()){
                ans.push_back(m[r]);
                ans.push_back(i);
            }
            m[nums[i]]=i;

        }
        return ans;
            
    }
};

