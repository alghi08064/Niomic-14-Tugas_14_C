#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	setcolor(5);
	struct database {
		string tipe_rumah;
		int jumlah_kamar;
		float luas_rumah;
		float tinggi_rumah;
		string pemilik_rumah;			
	};
    
    database rumah;
    rumah.tipe_rumah = "72";
    cout<<"Inputkan Tipe Rumah : "<<rumah.tipe_rumah<<endl;
	rumah.jumlah_kamar = 3; 
    cout<<"Inputkan Jumlah Kamar : "<<rumah.jumlah_kamar<<endl;
    rumah.luas_rumah = 100.0;
    cout<<"Inputkan Luas Rumah : "<<rumah.luas_rumah<<endl;
    rumah.tinggi_rumah = 3.5;
    cout<<"Inputkan Tinggi Rumah : "<<rumah.tinggi_rumah<<endl;
    rumah.pemilik_rumah = "Alghi";
    cout<<"Inputkan Pemilik Rumah : "<<rumah.pemilik_rumah<<endl;
        
    cout<<endl;
    cout<<endl;
    
    string a = rumah.tipe_rumah;
    int b = rumah.jumlah_kamar;
    cout<<"Point : "<<endl;
    cout<<"Tipe Rumah : "<<&a<<endl;
    cout<<"Jumlah Kamar : "<<&b<<endl;
    
    
	return 0;
}
	

