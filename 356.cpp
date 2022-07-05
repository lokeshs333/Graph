// implementation of graph in matrix format..
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter the n and m" << endl;
    int n, m;
    cin >> n >> m;
    // declare the adjacent matrix
    int adj[n + 1][n + 1];
    // take edges as input
    cout << "enter the input" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    return 0;
}