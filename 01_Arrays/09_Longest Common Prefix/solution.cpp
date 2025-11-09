class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string start=strs[0],end=strs[strs.size()-1];
        int i=0;
        while(i<start.size() && start[i]==end[i]){
            i++;
        }
        return start.substr(0,i);

    }
};
