// link :- https://codeforces.com/contest/282/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x=0;
    cin>>n;
    for (int i=0 ; i<n ; i++)
    {
        string s;
        cin >> s;
        if (s=="++X" || s=="X++") x++;
        else x--;
    }
    cout << x;


    return 0;
}