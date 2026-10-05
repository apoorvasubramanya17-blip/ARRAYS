#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> arr(n);
 for(int i=0;i<n;i++){
     cin>>arr[i];

 }
 map<int,int> mpp;
 for(int i=0;i<n;i++){
    mpp[arr[i]]++;

 }
 int maxFreq=0;
 int minFreq=n;
 int maxElement=0;
 int minElement=0;
 for(auto it:mpp){
    if(it.second>maxFreq)
    {
    maxFreq=it.second;
    maxElement=it.first;
    }
    if(it.second<minFreq){
        minFreq=it.second;
        minElement=it.first;    }
 }
 cout<<"Highest frequency element is:"<<maxElement<<endl;
 cout<<"Lowest frequency element is :"<<minElement<<endl;
 return 0;
}
