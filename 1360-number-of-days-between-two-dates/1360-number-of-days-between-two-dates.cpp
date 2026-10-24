class Solution {
public:
int converter(string days){
    int first=days[0]-'0';
     int sec=days[1]-'0';
     int third=days[2]-'0';
     int fourth=days[3]-'0';
     int year=first*1000+sec*100+third*10+fourth;
     int fifth=days[5]-'0';
     int sixth=days[6]-'0';
     int month=fifth*10+sixth;
     int eigth=days[8]-'0';
     int ninth=days[9]-'0';
     int day=eigth*10+ninth;
      
      int arr[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      int total=0;
      for(int y=1971 ;y<year;y++){
        if(y%400==0|| (y%4==0 &&y%100!=0))
        total+=366;
        else{
            total+=365;
        }

      }
      for(int i=0;i<month-1;i++){
        total+=arr[i];
      }
      if (month > 2 && (year % 400 == 0 ||
    (year % 4 == 0 && year % 100 != 0))) {
    total++;
}
      total = total + day ;
return total;

}
    int daysBetweenDates(string date1, string date2) {
        int p=converter(date1);
        int q=converter(date2);
        return abs(p - q);
        
    }
};