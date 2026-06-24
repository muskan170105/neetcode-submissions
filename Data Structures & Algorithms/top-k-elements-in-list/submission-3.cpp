class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        for(auto it : count){
            pq.push({it.second, it.first});    //frequency, element pair
        }

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
