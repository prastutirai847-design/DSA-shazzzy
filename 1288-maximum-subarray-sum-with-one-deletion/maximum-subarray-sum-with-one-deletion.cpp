class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int onedelete =0,nodelete=arr[0],ans=arr[0];
        
        for (int i = 1; i < arr.size(); i++){
            int prevonedelt=onedelete , prevnodelt=nodelete ;
            onedelete=max(prevonedelt+arr[i],prevnodelt);//in this case we will delete only one node. We haven't done it yet but it's possible that we will delete one node in this case. Either we will do it before or after deleting the previous node or we have to delete the previous one now. If we want to delete the previous node then we will delete the previous one and keep to see what is the maximum of this one to delete 
            nodelete=max(prevnodelt+arr[i],arr[i]);
            ans=max(ans,max(onedelete,nodelete));

        }
        return ans;
    }
};