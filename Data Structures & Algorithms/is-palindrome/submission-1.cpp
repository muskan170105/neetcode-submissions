class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left < right){
            while(left < right && !isalnum(s[left])){
                left++;      //skip spaces from start
            }
            while(left < right && !isalnum(s[right])){
                right--;     //skip spaces from end
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }

            left++;
            right--;
        }
        return true;
    }
};
