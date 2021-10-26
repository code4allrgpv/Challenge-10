#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define MAXN 200002

vector<int> adj[MAXN];
vector<bool> vis(MAXN);

void fio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void dfs(int root, vector<int> &tmp)
{
    tmp.push_back(root);
    vis[root] = true;
    for (auto i : adj[root])
    {
        if (!vis[i])
            dfs(i, tmp);
    }
}

int main()
{
    fio();
    int n, m, x, y, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        vector<int> tmp;
        if (!vis[i])
        {
            bool flag = true;
            dfs(i, tmp);
            for (auto i : tmp)
            {
                if (adj[i].size() != 2)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans++;
        }
    }
    cout << ans << endl;
}
