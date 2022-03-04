//by HÜSEYİN ÖZDEMİR
#include <iostream>
using namespace std;
int main() {
	double x, y, w = 0;
	char z;
	cout << "Lutfen yapacaginiz islemi secin" << endl << "(+)" << "(-)" << "(*)" << "(/)";
	cin >> z;
	cout << "Ilk veriyi giriniz";
	cin >> x;
	cout << "Ikinci degeri giriniz";
	cin >> y;
	if (z == 43) { w = x + y; }
	if (z == 45) { w = x - y; }
	if (z == 42) { w = x * y; }
	if (z == 47) { w = x / y; }
	if (w != 0) { cout << w; }
	else { cout << "Hata"; }
}
//by HÜSEYİN ÖZDEMİR