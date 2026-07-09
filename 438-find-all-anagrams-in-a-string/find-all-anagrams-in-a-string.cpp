class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>need;
        for(int i =0;i<p.size();i++){
            need[p[i]]++;
        }
         unordered_map<char,int>have;
        int start=0,end=0;
        vector<int>ans;
        while(end<s.size()){
            have[s[end]]++;
            end++;
            while(end-start>=p.size()){
              if(need==have)
                ans.push_back(start);
                have[s[start]]--;
                if(have[s[start]]==0)
                have.erase(s[start]);
                start++;
            }
        }
        return ans;
        
    }
};