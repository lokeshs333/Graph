class Solution
{
public:
    void dfs(int i, int j, vector<vector<int>> &vis, vector<vector<int>> &img, int oldcolor, int newcolor, int n, int m)
    {
        if (i < 0 || j < 0 || i >= n || j >= m)
            return;
        if (vis[i][j] || img[i][j] != oldcolor)
            return;

        vis[i][j] = 1;
        img[i][j] = newcolor;
        dfs(i + 1, j, vis, img, oldcolor, newcolor, n, m);
        dfs(i, j + 1, vis, img, oldcolor, newcolor, n, m);
        dfs(i - 1, j, vis, img, oldcolor, newcolor, n, m);
        dfs(i, j - 1, vis, img, oldcolor, newcolor, n, m);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newcolor)
    {
        int oldcolor = image[sr][sc];
        int r = image.size();
        int c = image[0].size();
        vector<vector<int>> vis(r, vector<int>(c, 0));
        dfs(sr, sc, vis, image, oldcolor, newcolor, r, c);
        return image;
    }
};