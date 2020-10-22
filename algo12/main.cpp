
#include <iostream>
#include <algorithm>
#include <string.h>	
#define M 500000
#define N 1000001
using namespace std;

int n, d[N], e[100000][2], i, j, k, s, t;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> n;
	for (; i < n; i++) cin >> e[i][0] >> e[i][1];
	for (j = 0; j < 2; j++)
	{
		memset(d, 0, sizeof(d));
		for (i = j; i < n; i += 2)
		{
			k = (i + 1) % n;
			if (e[i][0] != e[k][0])
			{
				d[min(e[i][0], e[k][0]) + M] ++;
				d[max(e[i][0], e[k][0]) + M]--;
			}
			else
			{
				d[min(e[i][1], e[k][1]) + M]++;
				d[max(e[i][1], e[k][1] + M)]--;

			}
		}
		for (t = k = i = 0; i < N; i++)
			k += d[i], t = max(t, k);
		s = max(s, t);
	}
	cout << s;
}

//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Person
//{
//	int id, w, totalMin, casher;
//	bool operator < (const Person& otherPerson) const {
//		if (totalMin < otherPerson.totalMin)
//			return true;
//		else if (totalMin == otherPerson.totalMin) {
//			if (casher < otherPerson.casher)
//				return false;
//			else
//				return true;
//		}
//		else
//			return false;
//	}
//};
//
//struct Casher
//{
//	int id, totalMin;
//	bool operator < (const Casher& other) const {
//		if (totalMin < other.totalMin)
//			return false;
//		else if (totalMin == other.totalMin) {
//			if (id < other.id)
//				return false;
//			else
//				return true;
//		}
//		else
//			return true;
//	}
//};
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	int N, k;
//	cin >> N >> k;
//	priority_queue<Casher> casherPQ;
//	for (int i = 1; i <= k; i++)
//	{
//		casherPQ.push({ i,0 });
//	}
//
//	vector<Person> customerVec(N);
//	int cusld, weight;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> cusld >> weight;
//		customerVec[i] = { cusld, weight,0,0 };
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		Casher topPriCasher = casherPQ.top();  casherPQ.pop();
//		int tmpld = topPriCasher.id;
//		int tmpTotalMin = topPriCasher.totalMin;
//
//		tmpTotalMin += customerVec[i].w;
//		customerVec[i].totalMin = tmpTotalMin;
//		customerVec[i].casher = tmpld;
//
//		casherPQ.push({ tmpld, tmpTotalMin });
//	}
//	sort(customerVec.begin(), customerVec.end());
//
//	long long ret = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		ret += i * (long long)customerVec[i - 1].id;
//	}
//	
//	cout << ret;
//
//	return 0;
//}