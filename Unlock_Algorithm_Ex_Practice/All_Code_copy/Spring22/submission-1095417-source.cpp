#include<bits/stdc++.h>
using namespace std;
#define fast     ios_base::sync_with_stdio(0);cin.tie(0);
#define ll  long long int

const ll N = (ll)1e5+12;
vector<ll>adj[N];
bool visited[N];
vector<ll>path;

void bfs(ll start,ll last)
{
    queue<ll>q;
    q.push(start);
    vector<ll> parent(N, -1);
    visited[start]=1;
    while(!q.empty())
    {
        ll curr=q.front();
        q.pop();
        for(auto child : adj[curr])
        {
            if(visited[child]) continue;
            visited[child]=1;
            parent[child]=curr;
            q.push(child);
        }
    }
    ll node=last;
    while(node!=-1)
    {
        path.push_back(node);
        node=parent[node];
    }
    reverse(path.begin(),path.end());
}
void solve()
{
    ll n,s,e,i,j,k;
    cin>>n>>s>>e;
    memset(visited,0,sizeof(visited));
    for(i=0;i<N;i++) adj[i].clear();
    path.clear();
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            ll x;
            cin>>x;
            if(x==1) adj[i+1].push_back(j+1);
        }
    }
    bfs(s,e);
    ll ans=path.size()-2;
    cout<<ans<<endl;
    for(auto it : path) cout<<it<<" ";
    cout<<endl;
}
int main()
{
    fast;
    ll t=1,c=1;
    cin>>t;
    for(ll i=1; i<=t; i++) cout<<"Case "<<c<<": "<<endl, c++ , solve();
}
