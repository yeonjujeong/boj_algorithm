#include <stdio.h>
#include <algorithm>
#include <queue>

using namespace std;

int n, c, temp_count;
int mat[30][30];
int arr[900];
int diy[4] = {0, -1, 0, 1};
int dix[4] = {1, 0, -1, 0};

void dfs(int y, int x)
{
    if (y < 0 || x < 0 || y >= n || x >= n)
        return;
    if (mat[y][x])
    {
        temp_count++;
        mat[y][x] = 0;
        for (int i = 0; i < 4; i++)
            dfs(y + diy[i], x + dix[i]);
    }
}

void bfs(int sy, int sx)
{
    queue<pair<int, int>> q;
    q.push(make_pair(sy, sx));
    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int yy = y + diy[i];
            int xx = x + dix[i];
            if (yy < 0 || xx < 0 || yy >= n || xx >= n)
                continue;
            if (mat[yy][xx] == 1)
            {
                temp_count++;
                q.push(make_pair(yy, xx));
                mat[yy][xx] = 0;
            }
        }
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%1d", &mat[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j])
            {
                temp_count = 1;
                mat[i][j] = 0;
                bfs(i, j);
                arr[c++] = temp_count;
            }
    printf("%d\n", c);
    sort(arr, arr + c);
    for (int i = 0; i < c; i++)
        printf("%d\n", arr[i]);
}