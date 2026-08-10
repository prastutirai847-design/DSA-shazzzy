class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        
        //Max heap on first, Min on second
      
       struct cmp {
       bool operator()(pair<int,int>& a, pair<int,int>& b) {
           if(a.first == b.first)
               return a.second < b.second;   
           return a.first > b.first;        
       }
   };
   priority_queue<pair<int,int>,vector <pair<int,int>>,cmp>pq;
   unordered_map<int,int>count;
   for(int i =0; i<nums.size();i++){
    count[nums[i]]++;
   }
   for(auto i:count){
    int element =i.first;
    int freq=i.second;
    pair<int,int>curr={freq,element};
    if(pq.size()<k){
        pq.push(curr);
        continue;
    }
    else{
        if(curr.first<pq.top().first)
        continue;
        pq.pop();
        pq.push(curr);
    }
   }
   vector<int>res;
   while(!pq.empty()){
    res.push_back(pq.top().second);
    pq.pop();
   }


return res;
        
    }
};