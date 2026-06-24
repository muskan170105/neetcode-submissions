class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        vector<int> ans;
        

         while(k--) {

            int maxFreq = 0;
            int element = 0;

            // Find element having maximum frequency
            for(auto it : count) {

                if(it.second > maxFreq) {
                    maxFreq = it.second;
                    element = it.first;
                }
            }

            ans.push_back(element);

            // Mark this element as used
            count[element] = -1;
        }

        return ans;
    
    }
};
