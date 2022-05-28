#include<iostream>
#include<queue>
using namespace std;
 
#define MAX_VALUE 1001            //'N�� 1~1000 �̹Ƿ� 1000��° �ε����� ���� -> ũ�� 1001���� ����
int N, M, V;                    //��� ����, ���� ����, ������ ��� ��ȣ
int mat[MAX_VALUE][MAX_VALUE];    //������� �迭 ����
int visit[MAX_VALUE];            //visit �迭 default �� 0����. . . 
 
void dfs(int v) {
    
    cout << v << ' ' ;
    visit[v] = 1;            //�湮�� ��带 visit 0���� 1�� ����
    for(int i=1; i<=N; i++) {
        if(visit[i] == 1 || mat[v][i] == 0)     
            continue;
        dfs(i);                //dfs���� ��͸� ���
    }
}
 
void bfs(int v) {
    queue<int> q;            //bfs������ q�����
    q.push(v);
    visit[v] = 0;            //�湮�� ��带 visit 1���� 0���� ����
    while(!q.empty()) {
        v = q.front();
        cout << q.front() << ' ';
        q.pop();
        for(int i=1; i<=N; i++) {
            if(visit[i] == 0 || mat[v][i] == 0)
                continue;
            q.push(i);
            visit[i] = 0;
        }
    }
}
 
int main() {
    int x, y;.
    cin >> N >> M >> V;            //N�� ��尳��, M�� �����ǰ���, V�� ó�� ��ġ�� ������ �Ǵ� ���
    for(int i=0; i<M; i++) {    //������ ������ŭ ���� �̾��� x�� y��带 �Է¹޽��ϴ�.
        cin >> x >> y;            
        mat[x][y] = mat[y][x] = 1;    //������� ǥ��
    }
    dfs(V);            
    cout << '\n';
    bfs(V);
    return 0;
}

