#include <iostream>

using namespace std;
//cam on da sua cai code. -nodatai- 
void main()
{	
	cout << "Nhom 3\n" << "Cau 1: Le Duc Hanh\n" << "Cau 2: Chua ai lam\n" << "Cau 3: Truong Minh Tri\n\n";
	//Cau 1 bat dau tu day -leeduchank-
	//Cau 1: Nhap nam sinh, xuat ra tuoi -leeduchank-
	cout << "Cau 1: Nhap nam sinh, xuat ra tuoi\n";
		int year;
		cout << "Nhap nam sinh: ";
		cin >> year;
		int age;
		age = 2021 - year;
	cout << " tuoi cua ban: " << age << endl << endl;
	cout << "---------------------------" << endl;

	//Toi them 2 cai endl de no cach cau toi ra nha -nodatai-
//cau 2 bat dau tu day	
   char ch;
   cout<<"Enter a character in lowercase: "; 
   cin>>ch;
   ch=ch-32;
   cout<<"Entered character in uppercase: "<<ch<<endl
   cout << "---------------------------" << endl;

	//cau 3 bat dau tu day -nodatai-
	//Cau 3: nhap tien xuat ra to hop tien -nodatai-
	cout << "Cau 3: Nhap vao so tien, xuat ra to hop cac loai tien \n";
		int sotien=0;
		cout << "Nhap vao so tien: "; cin >> sotien;
		cout << "So tien moi loai:\n";
		cout << "500.000: " << sotien / 500000 << endl;
		cout << "200.000: " << (sotien % 500000) / 200000 << endl;
		cout << "100.000: " << ((sotien % 500000) % 200000) / 100000 << endl;
		cout << "50.000:  " << (((sotien % 500000) % 200000) % 100000) / 50000 << endl;
		cout << "20.000:  " << ((((sotien % 500000) % 200000) % 100000) % 50000) / 20000 << endl;
		cout << "10.000:  " << (((((sotien % 500000) % 200000) % 100000) % 50000) % 20000) / 10000 << endl;
		cout << "5.000:   " << ((((((sotien % 500000) % 200000) % 100000) % 50000) % 20000) % 10000) / 5000 << endl;
		cout << "2.000:   " << (((((((sotien % 500000) % 200000) % 100000) % 50000) % 20000) % 10000) % 5000) / 2000 << endl;
		cout << "1.000:   " << ((((((((sotien % 500000) % 200000) % 100000) % 50000) % 20000) % 10000) % 5000) % 2000) / 1000 << endl;
	        cout << "---------------------------" << endl;
return 0;
}
