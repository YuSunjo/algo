#include <iostream>
using namespace std;
int main() {
	/*int brother1, brother2;
	int day;

	cin >> brother1 >> brother2 ;
	cin >> day;

	for (int i = 1; i <= day; i++)
	{
		if (i % 2 == 1)
		{
			if (brother1 % 2 == 1)
			{
				brother2 += brother1 / 2+1;
				brother1 = brother1 / 2;
			}
			else {
				brother2 += brother1 / 2;
				brother1 = brother1 / 2;
			}
			
		}
		else {
			if (brother2 % 2 == 1)
			{
				brother1 += brother2 / 2+1;
				brother2 = brother2 / 2;
			}
			else {
				brother1 += brother2 / 2;
				brother2 = brother2 / 2;
			}
			
			

		}

	}
	cout << brother1 <<" "<<brother2;*/

	//여름의 대삼각형 

	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	double s = 0;
	s = ( abs((x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x3 * y2 + x2 * y1)) )/ 2.00;

	cout << abs((x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x3 * y2 + x2 * y1));
	cout << fixed;
	cout.precision(2);
	cout << s;


	
	return 0;
}