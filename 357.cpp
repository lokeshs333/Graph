#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(int v, vector<int> g[])
{
    vector<int> vv;
    queue<int> q;
    vector<int> visited(v, 0);
    q.push(0);
    visited[0] = 1;
    while (!q.empty())
    {
        int td;
        td = q.front();
        q.pop();
        vv.push_back(td);
        for (auto x : g[td])
        {
            if (!visited[x])
            {
                visited[x] = 1;
                vv.push_back(x);
            }
        }
    }
    return vv;
}
int main()
{
    cout << "v and e";
    int v, e;
    cin >> v >> e;
    vector<int> g[v + 1];
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cout << "x and y" << endl;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout << "lokesh pandey" << endl;

    return 0;
}