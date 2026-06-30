class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);
        int n = s.size();
        int left = 0, right = 0, maxLength = 0;
      
        
        while(right < n){
            if(hash[s[right]] != -1 && hash[s[right]] >= left){      //if in the map
                    left = hash[s[right]] + 1;
            }
            int len = right - left + 1;
            maxLength = max(maxLength, len);
            hash[s[right]] = right;
            right++;
        } 
        return maxLength;
    }
};
