class Solution {
public:
int count;
  void merge(vector<int> &a,vector<int>& b,vector<int>& c){
      int i=0,j=0,k=0;
      int m=a.size(),n=b.size();
      while(i<m&&j<n){
       if(a[i]<b[j]) c[k++]=a[i++];
       else c[k++]=b[j++];
      }
      while(i<m) c[k++]=a[i++];
      while(j<n) c[k++]=b[j++];}
      int reverse(vector<int>& a,vector<int>& b){
          long long i=0,j=0,cnt=0;
          int m=a.size(),n=b.size();
          while(i<m&&j<n){
              if((long long)a[i]> 2*((long long)b[j])){
                  cnt+=(m-i);
                  j++;
              }
              else i++;
          }
          return cnt;
      }
      void mergesort(vector<int>& arr){
          int n=arr.size();
          if(n==1) return;
          vector<int> a(n/2);
          vector<int> b(n-n/2);
          int idx=0;
          for(int i=0;i<a.size();i++){
              a[i]=arr[idx++];
          }
          for(int i=0;i<b.size();i++){
              b[i]=arr[idx++];
          } 
          mergesort(a);
          mergesort(b);
          count+=reverse(a,b);
          merge(a,b,arr);}
    int reversePairs(vector<int>& arr) {
       count=0;
        mergesort(arr);
        return count;
    }
};