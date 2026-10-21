class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count=0;
        while (target != startValue) {
    
        if(startValue==target)
        return count;
        else if(target>startValue){
            if(target%2==0){
             target= target/2;
             count++;

            }
            else{
                target=target+1;
                count++;
            }
         
         
        }
        else{
          
               count += startValue - target;
break;
            }
}
        return count;

        
    }
};