class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;  vector<int>right;vector<int>ans;
        int sum=0;
        for(int i =0;i<nums.size();i++){
             left.push_back(sum);
           sum=abs(nums[i]+sum);
           
        }
         int x=0;
         for(int i =nums.size()-1;i>=0;i--){
            right.push_back(x);
             x=abs(nums[i]+x);
            
        }
        reverse(right.begin(),right.end());
        int start=0,end=0; int q=0;
        while(start<left.size() && end<right.size()){
           q=abs(left[start] - right[end]);
            ans.push_back(q); start++;end++;

        }
        return ans;
        
    }
};