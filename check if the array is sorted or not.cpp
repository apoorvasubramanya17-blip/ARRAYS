#include<bits/stdc++.h>
using namespace std;
int isSorted(vector<int> &arr,int n){
for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
        return false;
    }
    return true;
}
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(isSorted(arr,n)){
   cout<<"The array is sorted"<<endl;
   }
   return 0;
}
