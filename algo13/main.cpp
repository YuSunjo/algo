//�׸��� �˰��� 
//�������
//����̴� ���� �������忡�� ������ ����ϰ� �ִ�.����̴� ���� �������Կ� ������ ��Ȯ�ϰ� Nų�α׷��� ����ؾ� �Ѵ�.
//�������忡�� ����� ������ ������ ����� �ִ�.������ 3ų�α׷� ������ 5ų�α׷� ������ �ִ�.
//
//����̴� ������ ������, �ִ��� ���� ������ ��� ������ �Ѵ�.���� ���, 18ų�α׷� ������ ����ؾ� �� ��, 
//3ų�α׷� ���� 6���� �������� ������, 5ų�α׷� 3���� 3ų�α׷� 1���� ����ϸ�, �� ���� ������ ������ ����� �� �ִ�.
//
//����̰� ������ ��Ȯ�ϰ� Nų�α׷� ����ؾ� �� ��, ���� �� ���� �������� �Ǵ��� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

//#include<iostream>
//
//using namespace std;
//int main() {
//	int num;
//	int count = 0;
//	int left=0;
//	cin >> num;
//
//	while (num > 0) {
//		if (num % 5 == 0) {
//			num -= 5;
//			count++;
//		}
//		else if (num % 3 == 0) {
//			num -= 3;
//			count++;
//		}
//		else if (num > 5) {
//			num -= 5;
//			count++;
//		}
//		else {
//			count = -1;
//			break;
//		}
//	}
//	cout << count;
//}

//���� ATM ���� 11399��

#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
const int MAX = 1000;

int main() {
	int num;
	int count = 0;
	cin >> num;
	int time[MAX];
	for (int i = 0; i < num; i++) {
		cin >> time[i];
	}


	sort(time, time + num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			count += time[j];
		}
	}
	cout << count<<endl;
	
}