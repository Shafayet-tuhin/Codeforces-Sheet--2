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
string s,a,l;
cin>>s;

a = s;
 reverse(a.begin(),a.end());
 stringstream m(a); // used for converting
    int x = 0;
    m >> x;
 
if(s==a)
cout<<s<<endl<<"YES";
else
   cout<<x<<endl<<"NO";


}
