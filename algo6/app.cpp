#include <iostream>
using namespace std;

int main()
{
	long num;
	long sum = 0;

	cin >> num;
	for (long i = 1; i <= num; i++)
	{
		sum += i * i;
	}
	cout << sum;
}

//int Divine(int num)
//{
//	if (num / 2 == 1 && num % 2 == 0)
//		return 1;
//	else if (num % 2 == 0)
//		return Divine(num/2);
//	else
//		return -1;
//}
//
//int main() {
//	int num;
//	
//	int arr[100] = { 0 };
//	int count=0;
//	int result[100] = { 0 };
//	
//	cin >> num;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int j = 0;
//	for (int i = 0; i < num; i++)
//	{
//		
//		if (Divine(arr[i]) == -1)
//		{
//			count++;
//			result[j] = i + 1;
//			j++;
//		}
//	}
//
//	cout << count<<endl;
//	for (int i = 0; i < j; i++)
//	{
//		cout << result[i]<< " ";
//	}
//
//	return 0;
//}