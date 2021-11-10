// Number of List Number of Vertices
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 100;
    int vertex;
    int edges;
    cin >> vertex >> edges;
    vector<int> graph[N];
    while (edges--)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
for(int i=1;i<=5;i++){
    cout<<i<<"->";
    for(auto i:graph[i]){
        cout<<i<<"  ";
    }
    cout<<endl;
}
    return 0;
}
