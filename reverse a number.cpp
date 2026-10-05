#include<bits/stdc++.h>
using namespace std;1234r
class Solution{
public:
    int revNum(int n){

    int rev=0;
      while(n>0){
    int last_digit=n%10;
    n=n/10;
    rev=rev*10+last_digit;
   } return rev;}
    };
int main(){
Solution obj;
int n;
cin>>n;
cout<<obj.revNum(n);
return 0;
}
