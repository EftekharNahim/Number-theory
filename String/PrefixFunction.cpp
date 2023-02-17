#include<bits/stdc++.h>
using namespace std;
int pi[100];
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
        cout << pi[ i ] << ' ';
    }
}
int main()
{
    string s;
    cin >> s;
    prefixFunction(s);
}
