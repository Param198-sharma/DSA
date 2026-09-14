class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int lo=0;
        int hi=arr.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]<=target) lo=mid+1;
            else hi=mid-1;
        }
        return arr[lo%arr.size()];
    }
};