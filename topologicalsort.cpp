// Sequence of event is called topology
/**A topology Ordering is an ordering of the
** nodes in a directed graph where for each directed edge 
**from node A to node B, node A appers
** before node B in the ordering**/
// IT IS NOT UNIQUE
// Directed and Cyclic graph (DAG) have not topological sort... 
#include<iostream>
#include<bits/stdc++.h>
const int N=1e5+10;
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int cnt=0;
vector<vector<int>> adj(N);
vector<int> indeg(N,0);
for(int i=0;i<m;i++){
    int u,v;cin>>u>>v;
    // u--> v
    adj[u].push_back(v);
    indeg[v]++;
}
queue<int> pq;
for(int i=0;i<15;i++){
if(indeg[i]==0){
    pq.push(i);
}
}
while(!pq.empty()){
    cnt++;
    int x=pq.front();
    pq.pop();
    cout<<x<<" ";
    //x-->v
    for(auto it :adj[x]){
indeg[it]--;
if(indeg[it]==0){
    pq.push(it);
}
    }
}
    return 0;
}