#include<bits/stdc++.h>
using namespace std;
#define           ll                 long long int
int main()
{
    ll  a,b,c,d,e,f,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> a ;
    ll mx = 0 ;
    for( i = 0 ; ; i++)
    {
        ll x = i * 500 ;
        if(x>a) break;
        ll sum = i*1000;
        ll baki = a-x;
        ll p = baki / 5 ;
        sum += (p*5);
        mx = max(mx,sum);
    }
    cout<<mx<<endl;
    return 0 ;
}
//https://atcoder.jp/contests/abc160/tasks/abc160_b
