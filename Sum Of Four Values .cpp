#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(vector<ll>& v, ll k, ll n)
{
    vector<vector<ll>> vec(n, vector<ll>(2));

    for (int i = 0; i < n; i++)
    {
        vec[i][0] = v[i];
        vec[i][1] = i + 1;
    }

    sort(vec.begin(), vec.end());

    for (ll i = 0; i < n - 3; i++)
    {

        for (ll j = i + 1; j < n - 2; j++)
        {

            ll l = j + 1;
            ll r = n - 1;
            while (l < r)
            {
                ll currentSum = vec[i][0] + vec[j][0]
                                + vec[l][0]
                                + vec[r][0];


                if (currentSum == k)
                {
                    cout << vec[i][1]<< " "
                         << vec[j][1]<< " "
                         << vec[l][1]<< " "
                         << vec[r][1]<< "\n";
                    return;
                }
                else if (currentSum > k)
                {
                    r--;
                }
                else if (currentSum < k)
                {
                    l++;
                }
            }
        }
    }
    cout << "IMPOSSIBLE";
}

int main()
{
    ll n,k; cin >> n >> k;

    vector<ll>v(n);

    for(int i=0; i<n; i++) cin >> v[i] ;

    solve(v, k, n);

    return 0;
}


/*
n x
a1 a2 an

8 15
3 2 5 8 1 3 2 3

You are given an array of n integers,
and your task is to find four values (at distinct positions) whose sum is x.

index ber korbo jegular valu er sum == x

*/
