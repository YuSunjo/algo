
////백준 그리디알고리즘 - 동전 0
//#include<iostream>
//
//using namespace std;
//const int MAX = 10;
//int main() {
//	int num;
//	int won;
//	int count = 0;
//	int time[MAX];
//	cin >> num >> won;
//	for (int i = 0; i < num; i++) {
//		cin >> time[i];
//	}
//
//	while (won > 0) {
//
//		for (int i = 0; i < num; i++)
//		{
//			if (won % time[num - i - 1] == 0) {
//				won -= time[num - i - 1];
//				count++;
//				break;
//			}
//			if (won > time[num - i - 1]) {
//				won -= time[num - i - 1];
//				count++;
//				break;
//			}
//		}
//		
//	}
//	cout << count;
//}

//백준 그리디 알고리즘 - 거스름돈 
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//int main() {
//	
//	int num;
//	cin >> num;
//	
//	int count = 0;
//	int left;
//	left = 1000 - num;
//
//	while (left > 0) {
//		if (left % 500 == 0) {
//			left -= 500;
//			count++;
//		}
//		else if (left % 100 == 0)
//		{
//			left -= 100;
//			count++;
//		}
//		else if (left % 50 == 0) 
//		{
//			left -= 50;
//			count++;
//		}
//		else if (left % 10 == 0)
//		{
//			left -= 10;
//			count++;
//		}
//		else if (left % 5 == 0)
//		{
//			left -= 5;
//			count++;
//		}
//		else if (left % 1 == 0)
//		{
//			left -= 1;
//			count++;
//		}
//
//	}
//
//	cout << count;
//}

//백준 그리디 알고리즘 - 로프

//#include<iostream>
//#include<vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int num;
//
//	cin >> num;
//	vector<int> v;
//	int rof=0;
//	int max = 0;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> rof;
//		v.push_back(rof);
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < num; i++)
//	{
//		int var = v[num - 1 - i] * (i + 1);
//		if (var > max) {
//			max = var;
//		}
//	}
//
//	cout << max;
//
//}

#include<vector>
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;

string str;
int minResult(void)
{
    int result = 0;
    string temp = "";
    bool minus = false;
    for (int i = 0; i <= str.size(); i++)
    {
        //연산자일 경우
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0')
        {
            if (minus)
                result -= stoi(temp);
            else
                result += stoi(temp);
            temp = ""; //초기화
            //괄호를 뺄셈 이후에 치면 최소
            if (str[i] == '-')
                minus = true;
            continue;
        }
        //피연산자일 경우
        temp += str[i];
    }
    return result;
}
int main(void)
{
    cin >> str;

    cout << minResult() << endl;
    return 0;
}

