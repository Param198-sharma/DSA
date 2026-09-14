class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
       unordered_map<int, int> freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(freq[arr[i]]>n/2) return arr[i];
        }   
        return n;
    }
};