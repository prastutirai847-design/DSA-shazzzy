class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // if(nums[nums.size()-1]%nums[0]==0)
        return gcd(nums[0],nums[nums.size()-1]);
        // else if()
        // else 
        return 1;
        
    }
};