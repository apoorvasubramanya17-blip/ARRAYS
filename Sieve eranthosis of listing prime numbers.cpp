#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void sieve(int n){
    vector<bool> isPrime(n+1,true);
    isPrime[0]=false;
    isPrime[1]=false;

    for(int i=2;i*i<=n;i++){
        if (isPrime[i]){
                for(int j=i*i;j<=n;j+=i){
                    isPrime[j]=false;
                }
                }
    }
for(int i=2;i<=n;i++){
    if(isPrime[i]){
        cout<<i<<" ";
    }}
    }
};
int main(){
Solution obj;
int n;
cin>>n;
obj.sieve(n);
return 0;
}
