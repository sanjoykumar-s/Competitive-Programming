#include<bits/stdc++.h>
#include <cstdio>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define first_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define in_buffer cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define ll long long
#define int long long
#define double long double
#define pb push_back
#define goto_hell return 0
#define newline cout  << "\n"
#define endl "\n"
using namespace __gnu_pbds;
using namespace std;
using namespace std;


void solve(int test)
{
    int n;
    cin >> n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end());
    vector<int>el;
    for(auto it : v)
    {
        el.pb(it.first);
    }
    el.pb(10000000000);
    int mx = 0;
    map<int,int>mp;
    mp[10000000000]=0;
    for(int i=v.size()-1;i>=0;i--)
    {
         auto lw = lower_bound(el.begin(),el.end(),v[i].second);
         mx = max(mx,1+mp[*lw]);
         mp[v[i].first]=mx;
    }
    cout << mx << endl;
}

int32_t main()
{

    first_IO;
    int test=1;
    //cin >> test;
    //in_buffer;
    for(int t=1;t<=test;t++)solve(t);
    goto_hell;

}
