class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        
        for(string str : strs){
            int length = str.length();
            string strLength = to_string(length);
            ans += strLength.append("#");
            ans.append(str);
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0; 
        while(i < s.length()){
            string len = "";
            while(s[i] != '#'){
                len += s[i];
                i++;
            }
            int length = stoi(len);
            i++;
            string word = s.substr(i, length);
            ans.push_back(word);
            i += length;

        }
        return ans;
    }
};
