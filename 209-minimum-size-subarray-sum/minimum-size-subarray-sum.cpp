class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start =0, end=0;int sum =0;int len=INT_MAX;
        unordered_map<int,int>count;
        while(end<nums.size()){
            sum+=nums[end];
            count[nums[end]]++;
            end++;
            while(sum>=target){
                len=min(end-start,len);
                count[nums[start]]--;
                sum-=nums[start];
                if(count[nums[start]]==0){
                    count.erase(nums[start]);
                } 
                start++;
            
            }
                 
           

        }
       if(len == INT_MAX)
    return 0;
return len;
        
    }
};





//The plan is that the end will keep increasing and the frequency will also increase in the sum. The sum will be sum plus, which is equal to the end. NUM's end will keep on adding sum to it. When will be greater than or equal to target, we will start shrinking. When we will do it, the first step will be to set our length equal to the minimum of end minus start and length.

//Till the time that number becomes 0, until that number is zero, we will increase the start. Return the answer in answer. That is the plan I have for now 