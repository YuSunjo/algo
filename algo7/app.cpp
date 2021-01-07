#include <iostream>
#include <string>
using namespace std;

void isAeiou(string str)
{
	
}
int main()
{
	int num, len, i, cnt;
	string str;
	cin >> num;
	getline(cin, str);
	while (num--)
	{
		getline(cin, str);
		len = str.size();
		cnt = 0;
		for (i = 0; i < len; i++)
		{
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
				|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'
				) {
				cout << str[i];
				cnt++;
			}
		}
		if (cnt == 0)
		{
			cout << "???";
		}
		cout << "\n";
	}
	

}

//#include <iostream>	
//#include <string>
//using namespace std;
//char aeiou[5] = { 'a', 'e', 'i', 'o','u' };
//void isAeiou(string str)
//{
//	int len = str.length();
//	for (int i = 0; i < len; i++)
//	{
//		if(str[i]=='a' || str[i]=='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'e' || )
//	}
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//	string str;
//	while (num--)
//	{
//		getline(cin, str);
//		isAeiou(str);
//	}
//	return 0;
//}



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