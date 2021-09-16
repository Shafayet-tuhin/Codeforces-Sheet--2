#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0;
    cin >>a;
    b =a;
  while (b!=0)
    {
        c = b%10;
        d = (d*10)+c;
        b = b/10;
    }
if (d == a )
{
    cout<<d<<"\n"<<"YES";
}
else
{
    cout <<d<<"\n"<<"NO";
}

    return 0;
}
