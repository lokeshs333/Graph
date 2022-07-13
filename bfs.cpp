#include <bits/stdc++.h>
using namespace std;
vector<int> bfs_of_graph(int v, vector<int> adj[])
{
    vector<int> vv;
    queue<int> q;
    q.push(0);
    vector<int> visited(v, 0);
    visited[0] = 1;
    while (!q.empty())
    {
        int td = q.front();
        q.pop();
        vv.push_back(td);
        for (auto x : adj[td])
        {
            if (!visited[x])
            {
                visited[x] = 1;
                q.push(x);
            }
        }
    }
    return vv;
}

int main()
{
    cout << "enter v and e" << endl;
    int v, e;
    cin >> v >> e;
    vector<int> g[v + 1];
    for (int i = 0; i < e; i++)
    {
        cout << "enter the edges" << endl;
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    // for (int i = 0; i <= v; i++)
    // {
    //     cout << i << "-->";
    //     for (int j = 0; j < g[i].size(); j++)
    //     {
    //         cout << g[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << "hello lokesh pandey" << endl;
    vector<int> vvv = bfs_of_graph(v, g);
    for (int i = 0; i < vvv.size(); i++)
    {
        cout << vvv[i] << " ";
    }
    return 0;
}
