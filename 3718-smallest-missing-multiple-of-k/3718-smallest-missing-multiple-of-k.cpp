class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>map; bool f=true;int o=k;
        for(int i=0; i<nums.size();i++){
           map[nums[i]]=1;
        }
        while(f){
            for(int i=0;i<=map.size();i++){
            if(map.find(k) == map.end()){
                 f=false;
            return k;

            }
             
            k=k+o;
        }

        }
        
        return 0;
        
    }
};