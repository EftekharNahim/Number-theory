#include<bits/stdc++.h>
using namespace std;
int pi[100000];
string P,T;
int prefixFunction(string p)
{
    int now;
    pi[0]=now=-1;
    int len=p.size();
    for(int i=1;i<len;i++)
    {
        while(now!=-1 && p[now+1] != p[i])
        {
            now=pi[now];
        }
        if(p[now+1]==p[i])pi[i]=++now;
        else pi[i]=now=-1;
        //cout << pi[ i ] << ' ';
    }
}
int kmp()
{
    int now;
    int n=T.size();
    int m=P.size();
    for(int i=0;i<n;i++)
    {
        while(now !=-1 && P[now+1]!=T[i])
                                  now = pi[now];
        if(P[now+1] == T[i])++now;
        else now=-1;
        if(now+1 == m)return 1;
        //cout << now << ' ';
    }
    return 0;
}
int main()
{
    cin>> P>>T;
    prefixFunction(P);
    if(kmp())cout << "YES\n";
    else cout << "NO\n";
}
