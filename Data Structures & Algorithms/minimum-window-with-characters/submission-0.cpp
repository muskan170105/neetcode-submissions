class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int minLen = INT_MAX;
        string ans = "";

        unordered_map<char, int> target;
        for (char c : t)
            target[c]++;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;

            for (int j = i; j < n; j++) {
                freq[s[j]]++;

                bool valid = true;
                for (auto it : target) {
                    if (freq[it.first] < it.second) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    if (j - i + 1 < minLen) {
                        minLen = j - i + 1;
                        ans = s.substr(i, minLen);
                    }
                    break; // smallest window starting at i
                }
            }
        }

        return ans;
    }
};