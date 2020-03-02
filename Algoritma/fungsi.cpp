#include <iostream>
using namespace std;

int kj(int j,int m,int d){
	int td;
 		td=(j*3600)+(m*60)+d;
 		return td;
}
	int main (){
	int td1, td2, td3, j1, j2, m1, m2, d1, d2;
		cout<<"masukan nilai jam pertama"; cin>>j1;
		cout<<"masukan nilai menit pertama";cin>>m1;
		cout<<"masukan nilai detik pertama";cin>>d1;
			td1=kj(int j,int m, int d)
		cout<<"masukan nilai jam kedua";cin>>j2;
		cout<<"masukan nilai menit kedua";cin>>m2;
		cout<<"masukan nilai detik kedua";cin>>d2;
			td2=kj(int j,int m,int d)
		td3=td2-td1
		cout<<"maka total detik";cin>>td3;
		
}
