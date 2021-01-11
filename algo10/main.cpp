

//#include <iostream>
//using namespace std;
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int main() {
//	int num1, num2, num3, num4;
//	cin >> num1 >> num2 >> num3 >> num4;
//
//	int result;
//	result = mul(mul(num1, num2), mul(num3, num4));
//	cout << result;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//bool InspectAll(string str)
//{
//	int len = str.length();
//	for (int i = 0; i < len / 2; i++)          //hello
//	{
//		if (str[i] != str[len - 1 - i])
//		{
//			return false;
//		}
//
//	}
//	return true;
//}
//bool InspectHalf(string str)
//{
//	
//
//	int len = str.length();
//	string temp;
//	for (int i = 0; i <= len-1; i++)
//	{
//		temp = str;
//		if (InspectAll(temp.erase(i, 1)))
//		{
//			return true;
//		}
//		
//	}
//	return false;
//}
//
//int main() {
//	int num;
//	cin >> num;
//	string str[30];
//	for (int i = 0; i < num; i++)
//	{
//		cin >> str[i];
//	}
//	for (int i = 0; i < num; i++)
//	{
//		if (InspectAll(str[i]))
//		{
//			cout << 0 << endl;
//		}
//		else if (InspectHalf(str[i]))
//		{
//			cout << 1 << endl;
//		}
//		else
//			cout << 2 << endl;
//	}
//}


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int cnt = 0; cnt < N; cnt++) {
		string str;
		cin >> str;
		int answer = 0;
		int len = str.length();
		int i = 0, j = len - 1;
		while (i < j) {
			if (str[i] == str[j]) {
				i++; j--;
			}
			else if (str[i + 1] == str[j] || str[i] == str[j - 1]) {
				
				if (str[i + 1] == str[j]) {
					int ti = i + 1, tj = j;
					answer = 1;
					while (ti < tj) {
						if (str[ti] == str[tj]) {
							ti++; tj--;
						}
						else {
							answer = 2;
							break;
						}
					}
				}
				
				if (answer != 1 && str[i] == str[j - 1]) {
					int ti = i, tj = j - 1;
					answer = 1;
					while (ti < tj) {
						if (str[ti] == str[tj]) {
							ti++; tj--;
						}
						else {
							answer = 2;
							break;
						}
					}
				}
				break;
			}
			else {
				answer = 2;
				break;
			}
		}
		cout << answer << '\n';
	}

	return 0;
}


