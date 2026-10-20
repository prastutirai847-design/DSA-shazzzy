class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>p;
        int s=0,t=0;double sum=0;
        while(s<nums1.size()&&t<nums2.size()){
            if(nums1[s]<=nums2[t]){
                p.push_back(nums1[s]);
                s++;
           
        }
        else{
             p.push_back(nums2[t]);
             t++;

             
           
        }
        // s++;t++;
   

        }
             while(s < nums1.size()) {
    p.push_back(nums1[s]);
    s++;
}

while(t < nums2.size()) {
    p.push_back(nums2[t]);
    t++;
}

        if(p.size()%2==0){
            double e=(p.size()/2)-1;
            double y=(p.size()/2);
            sum=(p[e]+p[y])/2.0;

        }
        else{
            double k=p.size()/2.0;
           
          sum= p[k];

        }
        return sum;
        
    }
};