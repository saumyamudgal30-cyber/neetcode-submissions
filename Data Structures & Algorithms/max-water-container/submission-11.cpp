class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() -1;
        int maxarea = 0;
        while (left <= right){

        
            int width = right - left;//distance betwen lines 
            int minheight=min(heights[left],heights[right]);
            int area = width * minheight;//compute water in a container

            maxarea = max (maxarea,area);

             if(heights[left]<= heights[right]){
                 left += 1;//moves forward to find greater height

            }
            else{
                 right -= 1;//moves backwards 
            }
        }
        return maxarea;
       
    }
};
