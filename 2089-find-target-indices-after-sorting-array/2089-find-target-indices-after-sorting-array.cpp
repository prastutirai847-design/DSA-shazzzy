class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans; int smaller=0,equal=0;
        // sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size();i++){
            if(nums[i]<target)
            smaller++;
            if(nums[i]==target)
            equal++;
            
        }
        for(int i=smaller;i<smaller+equal;i++){
            ans.push_back(i);
        }
        return ans;
     
        
    }
};