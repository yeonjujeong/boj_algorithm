#include <stdio.h>
#include <queue>

using namespace std;

int h, l;
int mat[105][105];
int visited[105][105];
int dist[105][105];
int diy[4] = {0, -1, 0, 1};
int dix[4] = {1, 0, -1, 0};

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
            if (yy < 0 || xx < 0 || xx >= l || yy >= h)
                continue;
            if (visited[yy][xx] == 0 && mat[yy][xx] == 1)
            {
                visited[yy][xx] = 1;
                dist[yy][xx] = dist[y][x] + 1;
                q.push(make_pair(yy, xx));
            }
        }
    }
}

int main()
{
    scanf("%d%d", &h, &l);
    for (int i = 0; i < h; i++)
    {
        char inf[105] = {};
        scanf("%s", inf);
        for (int j = 0; j < l; j++)
        {
            if (inf[j] == '0')
                mat[i][j] = 0;
            else
                mat[i][j] = 1;
        }
    }
    dist[0][0] = 1;
    bfs(0, 0);
    printf("%d\n", dist[h - 1][l - 1]);
}