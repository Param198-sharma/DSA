class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
         int n=arr.size();
        vector<int> ans;
       
        for(int i=0;i<n;i+=2){
           
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};