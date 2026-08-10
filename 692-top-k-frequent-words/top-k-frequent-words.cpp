class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        struct cmp{
            bool operator()(pair<int,string>&a, pair<int,string>&b){
                if(a.first==b.first)
                return a.second<b.second;
                return a.first>b.first;
            }
        };
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>pq;
        unordered_map<string,int>count;
        for(int i =0; i<words.size();i++){
            count[words[i]]++;

        }
        for(auto i:count){
            string word=i.first;
            int freq= i.second;
           pair<int,string> curr={freq,word};
            if(pq.size()<k){
                pq.push(curr);
                continue;
            }
            else {
                if(curr.first < pq.top().first ||
   (curr.first == pq.top().first && curr.second > pq.top().second))
    continue;
else {
    pq.pop();
    pq.push(curr);
}
            }

        }
        vector<string>res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};