#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,i,a,b;
cin>>n;
while(n--)
{
    long long sum=1;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        sum = sum * i;
    }
    cout<<sum<<endl;
}
return 0;
}
