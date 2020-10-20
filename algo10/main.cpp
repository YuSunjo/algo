

#include <iostream>
using namespace std;
int mul(int a, int b)
{
	return a * b;
}

int main() {
	int num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;

	int result;
	result = mul(mul(num1, num2), mul(num3, num4));
	cout << result;

	return 0;
}

//#include <iostream>
//using namespace std;
//void Inspect(string arr)
//{
//	int len = arr.length();
//	int i = 0;
//	while (len > i/2)
//	{
//		if (arr[i] != arr[len - 1 -i])                //hello
//		{ 
//			if (arr[i + 1] == arr[len - 1 - i])
//			{
//				cout << 1 << endl;
//			}
//			else if (arr[i] == arr[len - 2 - i])
//			{
//				cout << 1 << endl;
//			}
//			else
//				cout << 2 << endl;
//		}
//		else
//			cout << 0 << endl;
//
//		i++;
//	}
//}
//
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
//	for (int i = 0; i < len-1; i++)
//	{
//		temp = str;
//		if (InspectAll(temp.erase(i, 1)))
//		{
//			return true;
//		}
//		else 
//			return false;
//	}
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