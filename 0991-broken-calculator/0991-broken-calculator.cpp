class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int cnt=0;
          if(startValue==target)
            return cnt;
        while(startValue!=target){
            if(target>startValue){
                if(target%2==0){
                    target=target/2;
                    cnt++;
                }
                else{
                    target=target+1;
                    cnt++;
                }
            }
            else{
                cnt+=startValue-target;
                break;//yr nhi smjha
            }
          
          
        }
          return cnt;
        
    }
};