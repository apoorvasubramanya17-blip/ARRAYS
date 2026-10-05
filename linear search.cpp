#include<bits/stdc++.h>
using namespace std;
int LinearSearch(vector<int> &arr,int num){
for(int i=0;i<arr.size();i++){
if(arr[i]==num){
    return i;
}}
return -1;
}
int  main(){
vector<int> arr={10,20,30,40,50};
int num=30;
cout<<LinearSearch(arr,num);
return 0;
}
