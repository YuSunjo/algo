
//BFS(너비 우선 탐색)    DFS(깊이 우선탐색)

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//}

//백준 그래프 탐색 - 미로탐색

//#include<cstdio>
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int n;  //row
//int m;  //column
//
//bool map[100][100];  //true - can go, false - can't go
//int check[100][100]; //지나온길 기록
//int dir[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} }; //up, down, left, right check.
//
////input
//void In() {
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            int b;
//            scanf("%1d", &b);
//
//            if (b == 1) {
//                map[i][j] = true;
//            }
//        }
//    }
//}
//
////output
//void Out(int num) {
//    printf("%d\n", num);
//}
//
////check [y, x] is in or not
//bool isInside(int a, int b) {
//    return (a >= 0 && a < n) && (b >= 0 && b < m);
//}
//
//
//int bfs() {
//    int cur_y = 0, cur_x = 0;   //current y, x
//
//    queue<pair<int, int> > q;   //queue for bfs search
//    q.push(pair<int, int>(cur_y, cur_x));
//    check[cur_y][cur_x] = 1;    //bfs가 지나가면서 몇번째만에 그 점에 접근했는지
//
//    while (!q.empty()) {
//
//        cur_y = q.front().first;
//        cur_x = q.front().second;
//        q.pop();
//
//        if ((cur_y == n - 1) && (cur_x == m - 1)) break; //도착지점 (위의 탈출조건은 없어도 무방합니다)
//
//            for (int i = 0; i < 4; i++) {
//                //up, down, left, right !!
//                int next_y = cur_y + dir[i][0];
//                int next_x = cur_x + dir[i][1];
//
//                //next y, x가 배열 내부에 있고, check 2차원배열에 기록된적 없고, map에 true로 되어있으면
//                if (isInside(next_y, next_x) && check[next_y][next_x] == 0 && map[next_y][next_x]) {
//                    check[next_y][next_x] = check[cur_y][cur_x] + 1; //이전 방문값 + 1 = 다음 방문
//                    q.push(pair<int, int>(next_y, next_x)); //방문한 곳 push push
//                }
//            }
//    }
//
//    /*  bfs로 만든 check 배열 출력해보기
//    for(int i=0;i<n; i++){
//        for(int j=0; j<m ; j++){
//            cout << check[i][j];
//        }
//        cout << endl;
//    }
//    */
//
//    return check[n - 1][m - 1];
//}
//
//
//int main(void) {
//    In();
//    Out(bfs());
//    return 0;
//}

//스택
//vector, stack<int> 이런거 사용 가능
//큐(FIFO)
//재귀함수 

//DFS(depth-first-search) 
//스택자료구조를 이용(혹은 재귀함수) 
//1. 탐색 시작 노드를 스택에 삽입하고 방문처리 -> 스택의 최상단 노드에 방문하지 않은 인접한 노드가 
//하나라도 있으면 그 노드를 스택에 넣고 방문처리, 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 꺼냅니다.
//3. 더이상 2번의 과정을 수행할 수 없을 때까지 반복합니다.  ==> 그림으로 보면 좋음


//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//bool visited[9];
//vector<int> graph[9];
//
//void dfs(int x) {
//	visited[x] = true;
//	cout << x << ' ';
//	for (int i = 0; i < graph[x].size(); i++) {
//		int y = graph[x][i];
//		if (!visited[y]) dfs(y);
//	}
//}
//
//int main(void) {
//
//}

//BFS(Breadth-first-search)
//큐 자료구조 사용 
//1부터 시작 인접한 노드 넣고 -> 다음 노드 를 빼고 거기서 인접한것을 넣고 반복...

//bool visited[9];
//vector<int> graph[9];
//
//void bfs(int start) {
//	queue<int> q;
//	q.push(start);
//	visited[start] = true;
//	while (!q.empth()) {
//		int x = q.front();
//		q.pop();
//		cout << x << ' ';
//		for (int i = 0; i < graph[x].size(); i++) {
//			int y = graph[x][i];
//			if (!visited[y]) {
//				q.push(y);
//				visited[y] = true;
//			}
//		}
//	}
//}