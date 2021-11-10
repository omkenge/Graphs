#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
void dsf(int vertex)
{
    /** Part1 :- Take Action on vertex after
        ** entering the vertex                                  // Enter kara Visit Kara
        **/
    //cout << vertex << endl;
    // Another way
    //if(vis[vertex]) return;
    vis[vertex] = true;
    for (int child : g[vertex])
    {
        //cout << "Parent:- " << vertex << " , Child:- " << child << endl;
        if (vis[child])
            continue;
        /** Part2 :- Take action on child before
        ** entering the child node 
        **/
        dsf(child);
        /** Part3:- 
         * Take action on child after exiting child node **/
    }
    /** Part4:- 
     * Take action on vertex before exiting the vertex **/
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v1].push_back(v1);
    }
    int cot = 0;
    for (int j = 1; j <= n; j++)
    {
        if (vis[j]){
            continue;
    }
        dsf(j);          // Jinati Bar dfs kiya ustane componets
        cot++;
    }
    cout << cot << endl;
    return 0;
}
//Time Complexity :- O(V+E)