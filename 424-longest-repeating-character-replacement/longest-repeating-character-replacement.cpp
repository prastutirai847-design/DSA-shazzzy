class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0,end=0,maxf=0,ans=0;
        unordered_map<char,int>count;
        while(end<s.size()){
            count[s[end]]++;
maxf = max(maxf, count[s[end]]);
end++;
            while(end-start-maxf>k){
                count[s[start]]--;
                if(count[s[start]]==0)
                count.erase(s[start]);
                start++;
            }
            if(end-start-maxf<=k){
                ans=max(ans,end-start);

            }
           
        }
        return ans;  
    }
};