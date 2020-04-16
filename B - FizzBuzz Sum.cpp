#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a,b,c,d,e,f,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> a ;
    for( i = 1 ; i <= a ; i++ )
    {
        if(i%3==0 && i%5==0)
        {

        }
        else if(i%3==0)
        {

        }
        else if(i%5==0)
        {

        }
        else
        {
            sum1+=i;
        }
    }
    cout<<sum1<<endl;
    return 0 ;
}
//https://atcoder.jp/contests/abc162/tasks/abc162_b
