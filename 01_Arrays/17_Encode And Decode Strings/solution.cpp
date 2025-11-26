class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(string &s:strs){
            encoded +=to_string(s.size())+'#'+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int index=s.find('#',i);
            int len=stoi(s.substr(i,index-i));
            ans.push_back(s.substr(index+1,len));
            i=index+len+1;
        }
        return ans;
    }
};

