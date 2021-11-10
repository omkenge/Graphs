#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool iscycle(int scr, vector<vector<int>> adj, vector<bool> &visited, vector<int> &stack)
{
    stack[scr] = true;
    if (!visited[scr])
    {
        visited[scr] = true;
        for (auto i : adj[scr])
        {
            if (!visited[i] && iscycle(i, adj, visited, stack))
            {
                return true;
            }
            if (stack[i])
            {
                return true;
            }
        }
    }
    stack[scr] = false;
    return false;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    bool cycle = false;
    vector<int> stack(n, 0);
    vector<bool> visited(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && iscycle(i, adj, visited, stack))
        {
            cycle = true;
        }
    }
    if (cycle)
    {
        cout << "Cycle is present..." << endl;
    }
    else
    {
        cout << "Cycle is not present..." << endl;
    }
    return 0;
}