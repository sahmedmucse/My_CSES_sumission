#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tir(0);
#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;
#define testcases int t; cin>>t; while(t--)


ll solve( int indx, ll* arr, ll sum1, ll sum2, ll n )
{

    if(indx == n)
    {
        return abs(sum1-sum2) ;
    }

    ll choose = solve(indx+1, arr, sum1+arr[indx], sum2, n);

    ll notchoose = solve(indx+1, arr, sum1, sum2+arr[indx], n);

    return min(choose, notchoose);


}


int main()
{
    int n;
    cin>>n;

    ll arr[n+1] ;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ll ans = solve(0, arr, 0,0,n);

    cout << ans << endl;

}

