class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto i:strs){
            string key=i;
            sort(key.begin(),key.end());
            mpp[key].push_back(i);
        }
        vector<vector<string>>ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};

