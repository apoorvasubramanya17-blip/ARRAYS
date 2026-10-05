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

int uniElement=0;
for(auto it:mpp){
    if(it.second==1){
    uniElement=it.first;
}}
cout<<uniElement;
return 0;
}
