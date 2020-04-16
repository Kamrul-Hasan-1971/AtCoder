#include<bits/stdc++.h>
using namespace std;
#define  ll             long long int
#define  gcd(a, b)     __gcd(a,b)
int main()
{
    ll  a,b,c,d,e,f,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> a ;
    b=a;
    c=a;

    for( i = 1 ; i <= a ; i++)
    {
        for( j= 1 ; j <=b ; j++)
        {
            for( k = 1 ; k<=c ; k++)
            {
                ll x = gcd(i,j);
                x = gcd(x,k);
                sum1+=x;
            }
        }
    }
    cout<<sum1<<endl;
    return 0 ;
}
//https://atcoder.jp/contests/abc162/submissions/11812025
