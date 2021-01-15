
//BFS(�ʺ� �켱 Ž��)    DFS(���� �켱Ž��)

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//}

//���� �׷��� Ž�� - �̷�Ž��

#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

int n;  //row
int m;  //column

bool map[100][100];  //true - can go, false - can't go
int check[100][100]; //�����±� ���
int dir[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} }; //up, down, left, right check.

//input
void In() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int b;
            scanf("%1d", &b);

            if (b == 1) {
                map[i][j] = true;
            }
        }
    }
}

//output
void Out(int num) {
    printf("%d\n", num);
}

//check [y, x] is in or not
bool isInside(int a, int b) {
    return (a >= 0 && a < n) && (b >= 0 && b < m);
}


int bfs() {
    int cur_y = 0, cur_x = 0;   //current y, x

    queue<pair<int, int> > q;   //queue for bfs search
    q.push(pair<int, int>(cur_y, cur_x));
    check[cur_y][cur_x] = 1;    //bfs�� �������鼭 ���°���� �� ���� �����ߴ���

    while (!q.empty()) {

        cur_y = q.front().first;
        cur_x = q.front().second;
        q.pop();

        if ((cur_y == n - 1) && (cur_x == m - 1)) break; //�������� (���� Ż�������� ��� �����մϴ�)

            for (int i = 0; i < 4; i++) {
                //up, down, left, right !!
                int next_y = cur_y + dir[i][0];
                int next_x = cur_x + dir[i][1];

                //next y, x�� �迭 ���ο� �ְ�, check 2�����迭�� ��ϵ��� ����, map�� true�� �Ǿ�������
                if (isInside(next_y, next_x) && check[next_y][next_x] == 0 && map[next_y][next_x]) {
                    check[next_y][next_x] = check[cur_y][cur_x] + 1; //���� �湮�� + 1 = ���� �湮
                    q.push(pair<int, int>(next_y, next_x)); //�湮�� �� push push
                }
            }
    }

    /*  bfs�� ���� check �迭 ����غ���
    for(int i=0;i<n; i++){
        for(int j=0; j<m ; j++){
            cout << check[i][j];
        }
        cout << endl;
    }
    */

    return check[n - 1][m - 1];
}


int main(void) {
    In();
    Out(bfs());
    return 0;
}