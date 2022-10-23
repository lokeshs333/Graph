#include <bits/stdc++.h>
using namespace std;
int min_step_to_reach(vector<int> &knight_pos, vector<int> &target_pos, int n)
{
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    int x1 = knight_pos[0];
    int y1 = knight_pos[1];
    int x2 = target_pos[0];
    int y2 = target_pos[1];
    if (x1 == x2 && y1 == y2)
    {
        return 0;
    }
    queue<pair<int, int>> q;
    q.push(make_pair(x1 - 1, y1 - 1));
    while (!q.empty())
    {
        auto cur = q.front();
        int i = cur.first;
        int j = cur.second;
        q.pop();
        if ((i + 1) >= 0 && (i + 1) < n && (j + 2) >= 0 && (j + 2) < n && arr[i][j] == 0)
        {
            arr[i + 1][j + 2] = arr[i][j] + 1;
            q.push(make_pair(i + 1, j + 2));
        }
        if ((i - 1) >= 0 && (i - 1) < n && (j + 2) >= 0 && (j + 2) < n && arr[i][j] == 0)
        {
            arr[i - 1][j + 2] = arr[i][j] + 1;
            q.push(make_pair(i - 1, j + 2));
        }
        if ((i - 2) >= 0 && (i - 2) < n && (j + 1) >= 0 && (j + 1) < n && arr[i][j] == 0)
        {
            arr[i - 2][j + 1] = arr[i][j] + 1;
            q.push(make_pair(i - 2, j + 1));
        }
        if ((i + 2) >= 0 && (i + 2) < n && (j + 1) >= 0 && (j + 1) < n && arr[i][j] == 0)
        {
            arr[i + 2][j + 1] = arr[i][j] + 1;
            q.push(make_pair(i + 2, j + 1));
        }
        // second cordinates..
        if ((i - 1) >= 0 && (i - 1) < n && (j - 2) >= 0 && (j - 2) < n && arr[i][j] == 0)
        {
            arr[i - 1][j - 2] = arr[i][j] + 1;
            q.push(make_pair(i - 1, j - 2));
        }
        if ((i + 1) >= 0 && (i + 1) < n && (j - 2) >= 0 && (j - 2) < n && arr[i][j] == 0)
        {
            arr[i + 1][j - 2] = arr[i][j] + 1;
            q.push(make_pair(i + 1, j - 2));
        }
        if ((i + 2) >= 0 && (i + 2) < n && (j - 1) >= 0 && (j - 1) < n && arr[i][j] == 0)
        {
            arr[i + 2][j - 1] = arr[i][j] + 1;
            q.push(make_pair(i + 2, j - 1));
        }
        if ((i - 2) >= 0 && (i - 2) < n && (j - 1) >= 0 && (j - 1) < n && arr[i][j] == 0)
        {
            arr[i - 2][j - 1] = arr[i][j] + 1;
            q.push(make_pair(i - 2, j - 1));
        }
    }
    return arr[x2 - 1][y2 - 1];
}
int main()
{
    // cout << "enter the value of n";
    int n = 6;
    cout << endl;
    vector<int> knightpos;
    knightpos.push_back(4);
    knightpos.push_back(5);
    vector<int> targetpos;
    targetpos.push_back(1);
    targetpos.push_back(1);
    int a = min_step_to_reach(knightpos, targetpos, n);
    cout << "your answer is" << a << endl;

    return 0;
}