#include <bits/stdc++.h>
using namespace std;
bool check_for_cycle(int node, int parent, vector<int> &vis, vector<int> g[])
{
    vis[node] = 1;
    for (auto pre : g[node])
    {
        if (vis[pre] == 0)
        {
            if (check_for_cycle(pre, node, vis, g))
                return true;
        }
        else if (pre != parent)
            return true;
    }
    return false;
}
bool is_cycle(int v, vector<int> g[])
{
    vector<int> vis(v + 1, 0);
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            if (check_for_cycle(i, -1, vis, g))
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
    cout << "enter the vertex and the edges" << endl;
    cin >> v >> e;
    vector<int> g[v + 1];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cout << "enter the cordinates" << endl;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bool a = is_cycle(v, g);
    cout << "your answer is " << a << endl;
    return 0;
}