#include <iostream>
#include <vector>
using namespace std;
int main() {
	int num;
	cin >> num;
	vector<int> arr(num);
	for (int i = 0; i < num; i++)
		cin >> arr[i];
	
	int count = 1;
	int min = arr[num - 1];
	for (int i = num - 1; i >=0; i--)
	{
		if (arr[i] > min)
		{
			count++;
			swap(min, arr[i]);
		}
	}
	cout << count;
	
}

//#include <iostream>
//using namespace std;
//int main() {
//	int num;
//	cin >> num;
//	int arr[10000];
//	for (int i = 0; i < num; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int min = arr[0];
//	for (int i = 1; i < num; i++)
//	{
//		if (min > arr[i])
//			min = arr[i];
//	}
//	cout << min;
//
//	return 0;
//}