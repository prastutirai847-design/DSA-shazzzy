class Solution {
public:
int fact(int n){
    if((n <= 1) )
    return 1;
    else
    return n * fact(n - 1);
}
    int totalNumbers(vector<int>& digits) {
        vector<int>ans;int x;bool found = false;
        for(int i =0; i<digits.size();i++){
            if(digits[i]==0)
            continue;
            for(int j=0;j<digits.size();j++){
                if(j==i)
                continue;
                for(int k=0;k<digits.size();k++){
                    if(k==i||k==j ) continue;
                    if(digits[k]%2!=0) continue;

                    x=x = digits[i] * 100 + digits[j] * 10 + digits[k];
                    found = false;

for(int a = 0; a < ans.size(); a++) {
    if(ans[a] == x) {
        found = true;
        break;
    }
}

if(!found)
    ans.push_back(x);
                }

            }
            
        }
        return ans.size();
        
        
    }
    
};
/*int ans;
        unordered_map<int,int>q;  int n=0;
        for(int i=0;i<digits.size();i++){
            q[digits[i]]++;
            n++;
        }
      
        // for(int i=0;i<q.size();i++){
        //     n+=q[i];
        // }
        
        if(n<3) return 0;
     int x=   fact(n);
     ans=x/fact(n-3);
     return ans;
     */