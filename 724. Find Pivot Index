class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int leftsum = 0;
        int rightsum = 0;
        
    for (int i = 0 ; i < nums.size() ; i++){
        rightsum = rightsum + nums[i];
    }
        
    for(int j = 0 ; j < nums.size() ; j++){
        rightsum = rightsum - nums[j];
        if(leftsum == rightsum){
            return j;
        }
        leftsum = leftsum + nums[j];
    }
    return -1;
    }
};
