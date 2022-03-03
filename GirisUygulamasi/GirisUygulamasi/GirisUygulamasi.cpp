//by HÜSEYİN ÖZDEMİR
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string accountin, passwordin, account, password, accountout, passwordout;
	char x;
	cout << "Kayit Yapmak Icin 'K' Tusuna ve Entere Basin" << endl << "Giris Yapmak Icin 'G'  Tusuna ve Entere Basin";
	cin >> x;
	if (x == 75 || x == 107) {
		cout << "Lutfen Bir Kullanici Adi Girin ve Entere Basin";
		cin >> account;
		cout << "Lutfen Bir Sifre Girin ve Entere Basin";
		cin >> password;
		ofstream kullaniciv;
		kullaniciv.open("kullanici.txt");
		kullaniciv << account << endl << password;
		kullaniciv.close();
	}
	if (x == 71 || x == 103) {
		ifstream kullanicia;
		kullanicia.open("kullanici.txt");
		kullanicia >> accountout; "\n";
		kullanicia >> passwordout;
		cout << "Lutfen Kullanici Adinizi Giriniz";
		cin >> accountin;
		cout << "Lutfen Sifrenizi Giriniz";
		cin >> passwordin;
		if (accountout == accountin && passwordout == passwordin) {
			cout << "Basarili giris";
		}
		else {
			cout << "Kullanici adi veya Sifre Yanlis";
		}

	}
	else { cout << "Hata"; }
	cout << endl;
	system("pause");
}
//by HÜSEYİN ÖZDEMİR