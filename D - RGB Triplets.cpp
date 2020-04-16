#include<bits/stdc++.h>
using namespace std;
#define  CIN            ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define  ll             long long int
#define  pb             push_back
#define  all(v)         v.begin(),v.end()

vector<ll>r,g,b;
string s1;
ll sum1 , a ;
void fun( vector<ll>&r,vector<ll>&g,vector<ll>&b)
{
    ll i ,j ;
    vector<bool>v(a,0);
    for( i = 0 ; i < b.size() ;i++) v[b[i]]=true;
    for( i = 0 ; i < r.size() ; i++)
    {
        ll x = upper_bound(all(g),r[i])-g.begin();
            for( j = x ; j < g.size() ; j++)
            {
                ll y = upper_bound(all(b),g[j])-b.begin();
                if(y<b.size())
                {
                    ll diff = g[j]-r[i];
                    ll last = g[j]+diff ;
                    sum1+= (b.size()-y);
                    if(last < a && v[last]) sum1--;
                }
            }
    }
}

int main()
{
    CIN;
    ll  i ;
    cin >> a >> s1 ;
    for( i  = 0 ; i < a ; i++)
    {
        if(s1[i]=='R')r.pb(i);
        else if(s1[i]=='G')g.pb(i);
        else b.pb(i);
    }
    fun(r,g,b);
    fun(r,b,g);
    fun(g,r,b);
    fun(g,b,r);
    fun(b,r,g);
    fun(b,g,r);
    cout<<sum1<<endl;
    return 0 ;
}
//https://atcoder.jp/contests/abc162/tasks/abc162_d
