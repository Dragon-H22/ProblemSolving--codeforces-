// link :- https://codeforces.com/contest/1030/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i>=n ; i--)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


int main()
{
    io;
    int n, x, c=0;
    cin>>n;
    fo1(0, n)
    {
        cin>>x;
        if (x) c++;
    }
    c? cout<<"HARD" : cout<<"EASY" ;


    return 0;
}