#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
#include<vector>
#include<stack>
#include<queue>
#include<cstring>
#include<algorithm>
#include<bits/stc++.h>
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdin(0); cin.tie(0); cout.tie(0);
#define loop(n) for(int i=0; i<n; i++)
#define read freopen("in.txt","r",stdin); 
#define write freopen("out.txt","w",stdout);
//priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll,int>>> pq;
/*void Dijkstra(int s){
    fill(dist + 1, dist + n + 1, INF);
    dist[s] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll,int>>> pq;
    pq.push({0, s});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        if(mark[u]) continue;
        mark[u] = true;
        for(auto e : adj[u]){
            int v = e.first;
            ll w = e.second;
            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}*/

using namespace std;
const int IMAX = 1e9+7;
const int MAX = 1e7+5;
const ll INF = 1e18;

