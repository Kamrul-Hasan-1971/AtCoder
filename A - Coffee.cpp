#include<bits/stdc++.h>
using namespace std;
#define  no            cout << "NO" << endl ;
#define  yes           cout << "YES" << endl;
string s1;
int main()
{
    cin >> s1 ;
    if(s1[2]==s1[3] && s1[4]==s1[5])
    {
        yes;
    }
    else
    {
        no;
    }
    return 0 ;
}
//https://atcoder.jp/contests/abc160/tasks/abc160_a
