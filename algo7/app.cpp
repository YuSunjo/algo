#include <iostream>
using namespace std;
char aeiou[5] = { 'a', 'e', 'i', 'o','u' };
void isAeiou(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a')
		{
			cout << 'a';
		}
		else if (str[i] == 'e')
		{
			cout << 'e';
		}

		else if (str[i] == 'i')
		{
			cout << 'i';
		}
		else if (str[i] == 'o')
		{
			cout << 'o';
		}
		else if (str[i] == 'u')
		{
			cout << 'u';
		}
		else if (str[i] == 'A')
		{
			cout << 'A';
		}
		else if (str[i] == 'E')
		{
			cout << 'E';
		}
		else if (str[i] == 'I')
		{
			cout << 'I';
		}
		else if (str[i] == 'O')
		{
			cout << 'O';
		}
		else if (str[i] == 'U')
		{
			cout << 'U';
		}
	}
	cout << endl;
}
int main()
{
	int num;
	cin >> num;
	
	

	string arr[100];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++)
	{
		isAeiou(arr[i]);
	}

}


//int rest[1000000];
//int j = 0;
//int Divine(int num,int i)
//{
//	rest[j] = num % i;
//	j++;
//	int share = num / i;
//	if (share > i)
//	{
//		return Divine(share, i);
//	}
//	else
//	{
//		rest[j] = share;
//		
//	}
//
//	return *rest;
//	
//
//}
////진법변환
//int main() {
//	
//	long num;
//	long result;
//	cin >> num >> result;
//	int sys;
//	
//
//	for (int i = 2; i <= 16; i++)
//	{
//		int num2= Divine(num, i);
//		if (num2 == result)
//		{
//			sys = i;
//			break;
//		}
//		
//		j = 0;
//	}
//
//	cout << sys;
//
//	
//	return 0;
//}