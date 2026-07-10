class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;long long totalsum=0;
        for (int i =0; i<nums.size();i++){
            totalsum+=nums[i];
        }
        
        int curr=0;
        for(int i =0; i<nums.size();i++){
            if(totalsum-nums[curr]-leftsum==leftsum)
            return curr;
            else{
                leftsum+=nums[curr];
                curr++;

            }

        }
        return -1;
        
    }
};