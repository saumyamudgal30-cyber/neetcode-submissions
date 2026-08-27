class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right = numbers.size()-1;
         
        while(left<right){
            int current_sum=numbers[left] + numbers[right];
            if(numbers[left] +numbers[right]==target){
                return{left+1,right+1};

            }
            if(target>current_sum){
                left++;//sorted arrray h.
            }
            if(target<current_sum){
                right--;
            }
        }
        return{};
    }
};
