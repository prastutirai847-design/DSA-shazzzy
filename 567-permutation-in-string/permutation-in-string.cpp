class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>need;
      for (int i = 0; i < s1.size(); i++) {
        need[s1[i]]++;

      }
      unordered_map<char,int>have;
      int start=0,end=0;
      while(end<s2.size()){
        have[s2[end]]++;
        end++;
        while(end - start >= s1.size()){
             if(need==have)
        return true;
            have[s2[start]]--;
            if(have[s2[start]]==0)
            have.erase(s2[start]);
            start++;
        }
        
      }
     
        
      return false;
        
    }
};