#include<bits/stdc++.h>
using namespace std;
// I prefer vector
int Prime[300000],nPrime;
//1 if not prime, 0 if prime
int mark[1000002];

void sieve(int n)
{
    int i,j,limit=sqrt(n*1.)+2;
    //1 is not prime. you can also mark 0
    mark[1]=1;
    for(i=4;i<=n;i+=2)mark[i]=1;
    //2 is prime
    Prime[nPrime++]=2;
    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            Prime[nPrime++]=i;
            // i*i may overflow
            if(i<=limit)
            {
                for(j=i*i;j<=n;j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
int main()
{
        
}
