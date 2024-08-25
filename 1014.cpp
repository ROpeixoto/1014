#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int km;
	float gas;
	cin >> km >> gas;
	gas = km / gas;
	cout << fixed << setprecision(3);
	cout << gas << " km/l" << endl;
}
