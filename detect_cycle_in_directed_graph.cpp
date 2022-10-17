#include <bits/stdc++.h>
using namespace std;
bool check_cycle(int node, vector<int> g[], vector<int> vis, vector<int> dfs_vis)
{
    vis[node] = 1;
    dfs_vis[node] = 1;
    for (auto x : g[node])
    {
        if (!vis[x])
        {
            if (check_cycle(x, g, vis, dfs_vis))

                return true;
        }
        else if (dfs_vis[x])
            return true;
    }
    dfs_vis[node] = 0;
    return false;
}
bool is_cyclic(int v, vector<int> g[])
{
    vector<int> vis(v, 0);
    vector<int> dfs_vis(v, 0);
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            if (check_cycle(i, g, vis, dfs_vis))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int v, e;
    cout << "enter the edges and the vertex" << endl;
    cin >> v >> e;
    vector<int> g[v + 1];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cout << "x and y" << endl;
        cin >> x >> y;
        g[x].push_back(y);
    }
    // for (int i = 0; i <= v; i++)
    // {
    //     cout << i << "->";
    //     for (int j = 0; j < g[i].size(); j++)
    //     {
    //         cout << g[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << "answer is " << endl;
    bool a = is_cyclic(v, g);
    cout << "hoii answer is " << a << endl;

    return 0;
}