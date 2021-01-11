
//백준 그리디알고리즘 - 동전 0
#include<iostream>

using namespace std;
const int MAX = 10;
int main() {
	int num;
	int won;
	int count = 0;
	int time[MAX];
	cin >> num >> won;
	for (int i = 0; i < num; i++) {
		cin >> time[i];
	}

	while (won > 0) {

		for (int i = 0; i < num; i++)
		{
			if (won % time[num - i - 1] == 0) {
				won -= time[num - i - 1];
				count++;
				break;
			}
			if (won > time[num - i - 1]) {
				won -= time[num - i - 1];
				count++;
				break;
			}
		}
		
	}
	cout << count;
}