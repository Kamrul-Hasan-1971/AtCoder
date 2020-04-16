#include<bits/stdc++.h>
using namespace std;
string s1;
int main()
{
    int  a,i;
    cin >> a ;
    stringstream ss ;
    ss<<a;
    ss>>s1;
    for( i = 0 ; i < s1.size() ; i++)
    {
        if(s1[i]=='7')
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0 ;
}
//https://atcoder.jp/contests/abc162/tasks/abc162_a
