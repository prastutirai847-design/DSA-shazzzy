class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int ans=arr[0];int nodlt = arr[0];
int onedlt = 0;
        for(int i = 1; i < arr.size(); i++){
        int prevonedelt=onedlt;
        int pervnodelt=nodlt;
        nodlt=max(pervnodelt+arr[i],arr[i]);
        onedlt=max(prevonedelt+arr[i],pervnodelt);
        ans=max(ans,max(nodlt,onedlt));


        }
        return ans;

        
    }
};