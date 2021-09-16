#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,i,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(i%2==0){
            cout<<i<<endl;
            count++;
        }
    }
    if(count==0){
        cout<<"-1";
    }
    return 0;
}

