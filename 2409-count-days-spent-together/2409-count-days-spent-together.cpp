class Solution {
public:
int converter(string date){
    int first=date[0]-'0';
    int sec=date[1]-'0';
    int third=date[3]-'0';
    int fourth=date[4]-'0';
    int month=first*10 + sec;
    int day=third*10 + fourth; int days[] = {31, 28, 31, 30, 31, 30,
              31, 31, 30, 31, 30, 31};
    int total=0;
   for(int i=0;i<month-1;i++){  // Maan le month = 8, toh ye January se August tak chalega. Lekin humein current month August ke days add nahi karne; sirf usse pehle ke months ke days add karne hain.
        total=total+days[i];


    }
    total = total + day;
return total;
};
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int p=converter(arriveAlice);
        int q=converter(leaveAlice);
        int x=converter(arriveBob);
        int y=converter(leaveBob);

        int z=max(p,x);
        int w=min(q,y);
        if(w<z)
        return 0;
        return ((w-z)+1);
        
    }
    

};