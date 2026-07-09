class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int start =0, end=0, len=0;
       unordered_map<int,int>count;
        while(end<fruits.size())
        {
            count[fruits[end]]++;
            end++;
            while(count.size()>2){
               
                count[fruits[start]]--;
                if( count[fruits[start]]==0)
                count.erase(fruits[start]);
               start++;

            }
             len=max(end-start,len);

        }
        
        return len;
        
    }
};