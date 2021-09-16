 
/*
𝓐𝓾𝔃𝓾𝓫𝓲𝓵𝓵𝓪𝓱 𝓜𝓲𝓷𝓪𝓼𝓱𝓪𝓲𝓽𝓪𝓷 𝓝𝓲𝓻𝓪𝓳𝓮𝓮𝓶
𝓑𝓲𝓼𝓶𝓲𝓵𝓵𝓪𝓱𝓲𝓻 𝓡𝓪𝓱𝓶𝓪𝓷𝓲𝓻 𝓡𝓪𝓱𝓲𝓶
*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {
   #ifndef ONLINE_JUDGE
  freopen("D:/inputoutput/input.txt", "r", stdin);
  freopen("D:/inputoutput/output.txt", "w", stdout);
  #endif
int n,i;
cin>>n;
int ar[n];
for(i=0;i<n;i++)
{
    cin>>ar[i];
}
int z = *max_element(ar,ar+n);

cout<<z;

  }
