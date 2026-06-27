class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = 0;
        int left = 0;
        int right = heights.size()-1;

        while(left < right){
            int width = right - left;
            int height = min(heights[left], heights[right]);
            maxi = max(maxi, width*height);

            if(heights[left] < heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return  maxi;
    }
};
