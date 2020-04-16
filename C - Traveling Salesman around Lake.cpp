#include<bits/stdc++.h>
using namespace std;
#define           ll                 long long int
#define           pb                 push_back
#define           rall(v)            v.rbegin(),v.rend()
vector<ll>v1,v2;

int main()
{
    ll  a,b,c,d,e,f,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;
    cin >> b  >> a ;
    for( i= 0 ; i < a ; i++)
    {
        cin >> c ;
        v1.pb(c);
    }
    for( j = 0 ; j < a-1 ; j++)
    {
        v2.pb(abs(v1[j]-v1[j+1]));
    }
    v2.pb(abs(v1[0]-0)+abs(b-v1.back()));
    sort(rall(v2));

    for(  i = 1 ; i < v2.size() ; i++)
    {
        sum1+=v2[i];
    }
    cout<<sum1<<endl;
    return 0 ;
}
//https://atcoder.jp/contests/abc160/tasks/abc160_c
