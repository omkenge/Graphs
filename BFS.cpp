#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];
int main()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    int x, y, n, m;
    // n = Number of vertices...
    // m = Number of edges...
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(0);         // We can push any data type in queuq which we want
    vis[0] = true;     // But we are accesing these data by indexing 
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << endl;
        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!vis[*it])
            {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }
    return 0;
}