#include <iostream>
using namespace std;
int num;
char mirror[] = { 'b','d','i','l','m','n','o','p','q','s','z','u','v','w','x' };

int isMirror(string str)
{
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		bool isln = false;
		for (int j = 0; j < 15; j++)
		{
			if (str[i] == mirror[j])
			{
				isln = true;
				break;
			}
		}
		if (isln == false)
		{
			return -1;
		}
		else if (str[i] == 'b')
		{
			if (str[len - 1 - i] != 'd')
			{
				return -1;
			}
		}
		else if (str[i] == 'd')
		{
			if (str[len - 1 - i] != 'b')
			{
				return -1;
			}
		}
		
		else if (str[i] == 'p')
		{
			if (str[len - 1 - i] != 'q')
			{
				return -1;
			}
		}
		else if (str[i] == 'q')
		{
			if (str[len - 1 - i] != 'p')
			{
				return -1;
			}
		}
		else if (str[i] == 's')
		{
			if (str[len - 1 - i] != 'z')
			{
				return -1;
			}
		}
		else if (str[i] == 'z')
		{
			if (str[len - 1 - i] != 's')
			{
				return -1;
			}
		}
		
	}
	return 1;
}

int main()
{
	
	cin >> num;
	string arr[1000];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++)
	{
		if (isMirror(arr[i]) == 1)
		{
			cout << "Mirror" << endl;
		}
		else 
		{
			cout << "Normal" << endl;
		}
	}
	
	
}

//int main() {
//	int width;
//	int height;
//	cin >> width >> height;
//	char map[100][100] ;
//
//	for (int i = 0; i < width; i++)
//	{
//		if (i % 2 == 0)
//		{
//			for (int j = 0; j < height; j++)
//			{
//				cout << "#";
//			}
//			cout << endl;
//		}
//		else {
//			if (i % 4 == 1)
//			{
//				for (int j = 0; j < height-1; j++)
//				{
//					cout << ".";
//				}
//				cout << "#"<<endl;
//			}
//			else if (i % 4 == 3)
//			{
//				cout << "#";
//				for (int j = 0; j < height - 1; j++)
//				{
//					cout << ".";
//				}
//				cout << endl;
//			}
//		}
//		
//	}
//
//	return 0;
//}