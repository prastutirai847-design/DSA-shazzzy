class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum =nums[0],minsum=nums[0]; int bestend=nums[0],ansnormal=nums[0];
       for(int i =1; i<nums.size();i++){
        int v1=bestend+nums[i];
        int v2=nums[i];
        bestend=max(v1,v2);
       ansnormal=max(ansnormal,bestend);
       
       }
       int worstend=nums[0];int circularmax=0;
      for(int i =1; i<nums.size();i++){
       sum+=nums[i];
       int v1=worstend+nums[i];
       int v2=nums[i];
       worstend=min(v1,v2);
       minsum=min(minsum,worstend);
       circularmax=sum-minsum;
      

      }

       if(ansnormal>circularmax)
       return ansnormal;
       else if(ansnormal<0)
         return ansnormal;
       else 
       return circularmax;
     
       
     
    }
};