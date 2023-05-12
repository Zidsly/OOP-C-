#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <windows.h>

using namespace std;

void menu();
void login();
void daftar();
void rules();
void exit();
void customer();
void carOption1();
void carOption2();
void carOption3();
void fullscreen();
void startdisplay();
void loading();
void gotoxy(int x, int y);
void bingkai();
void bon(long jam , long total);

class homeMenu{
	public:
	menu(void){
	fullscreen();
	loading();
	int x;
	string line;
	gotoxy(15, 1.5);
	ifstream myfile("Title1.txt");
	if(myfile.is_open())
	{
	while (!myfile.eof())
	{
	getline(myfile,line);
	cout << line << endl;
	}
	myfile.close();
	};
	cout << endl;
	cout<< "\n\t  \t\t  1. Login ";
	cout<< "\n\t  \t\t  2. Register ";
	cout<< "\n\t  \t\t  3. Syarat dan Ketentuan ";
	cout<< "\n\t  \t\t  4. Exit "<< endl <<"\n";
	cout<< "\n\t  \t\t  Input : ";
	cin>>x;
	if (x==1){
		login();
		system("cls");
		bingkai();
		customer();
	}
	
	else if (x==2){
		daftar();
		system("cls");
		bingkai();
		customer();
	}
	
	else if (x==3){
		system("cls");
		fullscreen();
		rules();
		int a;
		string line;
		ifstream myfile("pilihan rules.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		cout << "Input: ";
		cin >> a;
		if (a == 1){
			system("cls");
			fullscreen();
		}
		else if (a == 2){
			system("cls");
			fullscreen();
			exit();
		}
	}
	
	else if (x==4){
		system("cls");
		fullscreen();
		exit();
	}
	
	}
};

void fullscreen()
{
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
	system("Color BD");
}

void startdisplay(){
		string line;
		ifstream myfile("Title1.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
}


void delay(void){
	int delay;
	delay = 1;
	while(delay<10000000){
		delay++;
	}
}

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void loading(){
	int i,j;
	char ulang;
	char x =219;
	
	for(i=60 ; i<=100 ; i++){
		system("Color BD");
		gotoxy(i,12);
		printf("-");
		gotoxy(i,14);
		printf("-");
		//system("color A");
		printf("-");
		
	}
	
	for(i=0 ; i<=100 ; i++){
		gotoxy(60,13);
		cout << "L O A D I N G " << i << " %";

		
			gotoxy(i,16);
			cout << x << "\n\n\tMohon bersabar...";
			if(i<10);
			if(i>=10 && i<20);
			if(i>=10);
			
			delay();
	}
	system("cls");
	
	//bingkai atas
	for(i=1 ; i<=120 ; i++){
		gotoxy(i, 1);
		printf("#");
		gotoxy(i, 15);
		printf("#");
		gotoxy(i, 40);
		printf("#");
		delay();
	}
	
	//bingkai samping
		for(i=1 ; i<=40 ;i++){
		gotoxy(1, i);
		printf("#");
		gotoxy(120, i);
		printf("#");
		delay();
	}
	 
	getch();
}

void bingkai(){
	int i;
	for(i=1 ; i<=120 ; i++){
		gotoxy(i, 1);
		printf("#");
		gotoxy(i, 40);
		printf("#");
	}
	
	//bingkai samping
		for(i=1 ; i<=40 ;i++){
		gotoxy(1, i);
		printf("#");
		gotoxy(120, i);
		printf("#");
	}
	 
	getch();
}

void login(){
	string email;
	string password;
	cout << endl;
	
	cout << "\n\t  \t\t\t\tEmail : ";
	cin >> email;
	cout << "\n\t  \t\t\t\tPlease enter Password : ";
	cin >> password;	
}

void daftar(){
	string nama, email, no_ktp, alamat, telp;
	cout << "\n\t  \t\t\t\tMasukan Data Diri ";
	cout << "\n\t  \t\t\t\tNama : ";
	cin >> nama;
	cout << "\n\t  \t\t\t\tEmail : ";
	cin >> email;
	cout << "\n\t  \t\t\t\tNo KTP : ";
	cin >> no_ktp;
	cout << "\n\t  \t\t\t\tAlamat : ";
	cin >> alamat;
	cout << "\n\t  \t\t\t\tNo Telepon : ";
	cin >> telp;
}

void rules(){
	fullscreen();
	string line;
	ifstream myfile("syratKetentuan.txt");
	if(myfile.is_open())
	{
	while (!myfile.eof())
	{
	getline(myfile,line);
	cout << line << endl;
	}
	myfile.close();
	};
}

void bon(long jam, long total){
	ofstream myfile ("bon.txt");
	if (myfile.is_open()){
		myfile << "------------------------------------- \n";
		myfile << "-----      Nota Pembayaran      ----- \n";
		myfile << "------------------------------------- \n";
		myfile << "- Total Jam = " << jam << "         - \n";
		myfile << "- Total Harga = " << total << "     - \n";
		myfile << "------------------------------------- \n";
		myfile.close();
	}
}

void exit(){
	fullscreen();
	string line;
	ifstream myfile("endtitle.txt");
	if(myfile.is_open())
	{
	while (!myfile.eof())
	{
	getline(myfile,line);
	cout << line << endl;
	}
	myfile.close();
	};
}

void menu(){
	int x;
	string line;
	gotoxy(15, 1.5);
	ifstream myfile("Title1.txt");
	if(myfile.is_open())
	{
	while (!myfile.eof())
	{
	getline(myfile,line);
	cout << line << endl;
	}
	myfile.close();
	};
	cout << endl;
	cout<< "\n\t  \t\t  1. Login ";
	cout<< "\n\t  \t\t  2. Register ";
	cout<< "\n\t  \t\t  3. Syarat dan Ketentuan ";
	cout<< "\n\t  \t\t  4. Exit "<< endl <<"\n";
	cout<< "\n\t  \t\t  Input : ";
	bingkai();
	gotoxy(33,26);
	cin>>x;
	if (x==1){
		login();
		system("cls");
		customer();
	}
	
	else if (x==2){
		daftar();
		system("cls");
		customer();
	}
	
	else if (x==3){
		system("cls");
		fullscreen();
		rules();
		int a;
		string line;
		ifstream myfile("pilihan rules.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		cout << "Input: ";
		cin >> a;
		if (a == 1){
			system("cls");
			menu();
			fullscreen();
		}
		else if (a == 2){
			system("cls");
			exit();	
			fullscreen();
		}
	}
	
	else if (x==4){
		system("cls");
		exit();
		fullscreen();
	}
	else {
		fullscreen();
		cout << "Maaf itu bukan pilihan";
		exit();
	}
}

void customer(){
	string line;
	int y;
	
	bingkai();
	gotoxy(45,15);
	cout << endl;
	cout << "\n\t  \t\t  Silahkan Pilih Kelas Mobil";
	cout << "\n\t  \t\t  1. 1000 CC";
	cout << "\n\t  \t\t  2. 1500 CC";
	cout << "\n\t  \t\t  3. 2000 CC";
	cout << "\n\t  \t\t  4. Back";
	cout << "\n\t  \t\t  Input : ";;	
	cin >> y;
	if (y==1){
		system("cls");
		cout << "\n" << endl;
		ifstream myfile("mobil.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		carOption1();
	}
	else if (y==2){
		system("cls");
		ifstream myfile("mobil2.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		carOption2();
	}
	else if (y==3){
		system("cls");
		ifstream myfile("mobil3.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		carOption3();
	}
	else if (y == 4){
		system("cls");
		menu();
	}
	else{
		fullscreen();
		cout << "Maaf itu bukan pilihan";
		system("cls");
		exit();
	}
}


void carOption1(){
	string line;
	int model;
    long jam, total, x = 12, a = 750000, b = 500000, c = 400000;;
	cout << "Masukkan pilihan anda: " << endl;
	cin >> model;
	if (model == 1){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * a;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);
		system("cls");
		startdisplay();
		menu();	
	}
	else if (model == 2){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * b;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);
		system("cls");
		startdisplay();
		menu();		
	}
	else if (model == 3){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * c;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};	
		Sleep(2000);
		system("cls");
		startdisplay();
		menu();
	}
	else{
		system("cls");
		cout << "Maaf itu bukan pilihan, mohon pilih ulang";
		customer();
	}
}

void carOption2(){
	string line;
	int model;
	long jam, total, x = 12, a = 775000, b = 700000, c = 800000;;
	cout << "Masukkan pilihan anda: " << endl;
	cin >> model;
	if (model == 1){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * a;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);	
		system("cls");
		startdisplay();
		menu();
	}
	else if (model == 2){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * b;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);	
		system("cls");
		startdisplay();
		menu();	
	}
	else if (model == 3){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * c;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);	
		system("cls");
		startdisplay();
		menu();	
	}
	else{
		system("cls");
		cout << "Maaf itu bukan pilihan, mohon pilih ulang";
		customer();
	}
}

void carOption3(){
	string line;
	int model;
	long jam, total, x = 12, a = 1000000, b = 750000, c = 10000000;
	cout << "Masukkan pilihan anda: " << endl;
	cin >> model;
	if (model == 1){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * a;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);	
		system("cls");
		startdisplay();
		menu();
	}
	else if (model == 2){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * b;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);
		system("cls");
		startdisplay();
		menu();		
	}
	else if (model == 3){
		cout << "Berapa lama mobil akan dirental :      (dalam jam)" << endl;
		cin >> jam;
		total = (jam / x) * c;
		cout << "Total harga anda adalah " << total << endl;
		Sleep(4000);
		bon(jam, total);
		system("cls");
		ifstream myfile("endtitle.txt");
		if(myfile.is_open())
		{
		while (!myfile.eof())
		{
		getline(myfile,line);
		cout << line << endl;
		}
		myfile.close();
		};
		Sleep(2000);
		system("cls");
		startdisplay();
		menu();	
	}
	else{
		system("cls");
		cout << "Maaf itu bukan pilihan, mohon pilih ulang";
		customer();
	}
}


int main(){
	homeMenu tester;
	tester.menu();
	return 0;
}



