#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,a,b) for( ll i=a;i<b;i++)
#define tc() int t; cin>> t; while (t--)
#define MOD 1000000007
#define vec vector<ll>
#define pb push_back

int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,k; cin>>n>>k;
vec pk;
ff(i,0,n)
{
    ll o; cin>>o;
    pk.pb(o);
}
sort(pk.begin(),pk.end());
ll cnt=0;
ff(i,0,n)
{
    ff(j,i+1,n)
    {
        if(pk.at(j)-pk.at(i)==k)
        {
            cnt++;break;
        }
        if(pk.at(j)-pk.at(i)>k)
        {
            break;
        }
    }
}
cout<<cnt;
return 0;}
//PRATIK_SINGH!!
// cout<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

// ░█████╗░░░░░░░░░░░░░░░
// ██╔══██╗░░██╗░░░░██╗░░
// ██║░░╚═╝██████╗██████╗
// ██║░░██╗╚═██╔═╝╚═██╔═╝
// ╚█████╔╝░░╚═╝░░░░╚═╝░░
// ░╚════╝░░░░░░░░░░░░░░░
