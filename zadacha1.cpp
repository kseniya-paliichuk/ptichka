#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	cout << "Введите 3 цифры: "<<endl;
	cin >> a >> b >> c;

	if (a < 0 || b < 0 || c < 0) {
		cout << "Числа положительные по условию!!!" << endl;
		return main(); }

	int res1 = a * b * c;
	int res2 = a + b + c;
	int res3 = (a + b) * c;
	int res4 = a * (b + c);
	int res5 = a * b + c;
	int res6 = a + b * c;
	
	int maxresult = res1;

	if (res2 > maxresult) maxresult = res2;
	if (res3 > maxresult) maxresult = res3;
	if (res4 > maxresult) maxresult = res4;
	if (res5 > maxresult) maxresult = res5;
	if (res6 > maxresult) maxresult = res6;

	cout << maxresult;
	return 0;
}
