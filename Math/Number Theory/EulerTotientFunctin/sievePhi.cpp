#include<bits/stdc++.h>
using namespace std;

int phi[1000006];

void sievephi(int n)
{
    int i,j;

    for(i=1;i<=n;i++)phi[i]=i;

    phi[1]=1;
    for(i = 2;i<=n;i++)
    {
        if(phi[i]==i)
        {
            for(j = i;j<=n;j+=i)
            {
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sievephi(n);
    for(int i=1;i<=n;i++)cout << phi[i] << ' ';
}
