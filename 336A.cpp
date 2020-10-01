#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define f(i,a,b) for(ll i=a;i<b;i++)
#define rf(i,a,b) for(ll i=a;i>=b;i--)
#define rep(i,n) f(i,0,n)
#define rrep(i,n) rf(i,n-1,0)
#define w(t) ll t; cin>>t; while(t--)
#define vi vector<ll>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mii map<ll,ll>
#define mci map<char,ll>
#define inf (ll)(1e18)

using namespace std;

ll dx[] = {1, 0, -1, 0};
ll dy[] = {0, 1, 0, -1};

ll bin_expo(ll x, ll n, ll m)
{
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return bin_expo((x * x) % m, n / 2, m);
	else
		return x * bin_expo((x * x) % m, (n - 1) / 2, m);
}

void coder99()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main()
{
	coder99();
	ll x, y;
	cin >> x >> y;
	if (x > 0 && y > 0)
	{
		cout << 0 << " " << x + y << " " << x + y << " " << 0 << "\n";
	}
	else if (x > 0 && y < 0)
	{
		cout << 0 << " " << y - x << " " << x - y << " " << 0 << "\n";
	}
	else if (x < 0 && y > 0)
	{
		cout << x - y << " " << 0 << " " << 0 << " " << y - x << "\n";
	}
	else if (x < 0 && y < 0)
	{
		cout << x + y << " " << 0 << " " << 0 << " " << x + y << "\n";
	}
	return 0;
}
