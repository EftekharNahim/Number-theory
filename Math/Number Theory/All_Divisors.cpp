#include<bits/stdc++.h>
using namespace std;

vector<int>divisors[1000002];
void Divisors(int n)
{
    int i, j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j+=i)
        {
            divisors[j].push_back(i);
        }
    }
}
int main()
{
    int n,i;
    cin >> n;
    Divisors(1000001);
    while(n--)
    {
        int x;
        cin >> x;
        cout << divisors[x].size() << endl;
    }
}
