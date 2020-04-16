#include<bits/stdc++.h>
using namespace std;
#define           ll                 long long int
#define           pb                 push_back
#define           rall(v)       v.rbegin(),v.rend()

vector<ll>v1,v2,v3,v4;

int main()
{
    ll  a,b,c,d,e,f,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> a >> b >> c >> d >> e ;

    for( i = 0 ; i < c ; i++)
    {
        cin >> f ;
        v1.pb(f);
    }
    for( i = 0 ; i < d ; i++)
    {
        cin >> f ;
        v2.pb(f);
    }
    for( i = 0 ; i < e ; i++)
    {
        cin >> f ;
        v3.pb(f);
    }
    sort(rall(v1));
    sort(rall(v2));
    sort(rall(v3));

    while(v1.size()>a)
    {
        v1.pop_back();
    }
    while(v2.size()>b)
    {
        v2.pop_back();
    }
    while(v1.size())
    {
        v4.pb(v1.back());
        v1.pop_back();
    }
    while(v2.size())
    {
        v4.pb(v2.back());
        v2.pop_back();
    }
    while(v3.size())
    {
        v4.pb(v3.back());
        v3.pop_back();
    }
    sort(rall(v4));
    ll x = v4.size()-(a+b);
    while(x>0)
    {
        x--;
        v4.pop_back();
    }
    while(v4.size())
    {
        sum1+=v4.back();
        v4.pop_back();
    }
    cout<<sum1<<endl;
    return 0 ;
}
https://atcoder.jp/contests/abc160/tasks/abc160_e/
