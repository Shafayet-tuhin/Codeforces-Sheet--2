#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,i,r;
    cin>>a;

    for(i=1;i<=12;i++)
    {
          r = a*i;
        cout<<a<<" "<<"* "<<i<<" = "<<r<<endl;
    }
    return 0;
}
