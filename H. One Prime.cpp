/*
𝓐𝓾𝔃𝓾𝓫𝓲𝓵𝓵𝓪𝓱 𝓜𝓲𝓷𝓪𝓼𝓱𝓪𝓲𝓽𝓪𝓷 𝓝𝓲𝓻𝓪𝓳𝓮𝓮𝓶
𝓑𝓲𝓼𝓶𝓲𝓵𝓵𝓪𝓱𝓲𝓻 𝓡𝓪𝓱𝓶𝓪𝓷𝓲𝓻 𝓡𝓪𝓱𝓲𝓶
*/
#include<bits/stdc++.h>
#define ll long long
#define ul unsigned long long 
#define dd double
#define ff float
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
freopen("D:/inputoutput/input.txt", "r", stdin);
freopen("D:/inputoutput/output.txt", "w", stdout);
#endif
 long long int a,count=0,i;
    cin>>a;
    if(a<2){
        cout<<"NO\n";
    }
    else if(a==2){
        cout<<"YES\n";
    }
    else if(a%2==0){
        cout<<"NO\n";
    }
    else{
        for(i=3;i<=sqrt(a);i++){
            if(a%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }



}
