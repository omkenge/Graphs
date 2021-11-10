// Adjecency MATRICS
// If our i and j is connected the a[i][j]=1(It is actually Weight)
#include <iostream>
using namespace std;
int main()
{
    int edges, vertex;
    cin >> vertex >> edges;
    int graph[vertex][vertex];
    for (int i = 1; i <= vertex; i++)
    {
        for (int j = 1; j <= vertex; j++)
        {
            graph[i][j] = 0;
        }
    }

    while (edges--)
    {
        int i, j;
        cin >> i >> j;
        graph[i][j] = 1;
        graph[j][i] = 1;
    }
    for (int i = 1; i <= vertex; i++)
    {
        for (int j = 1; j <= vertex; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
