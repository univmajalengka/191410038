#include<iostream>
using namespace std;

int main()
{
	int i,a;
	
cout<<"Masukan bilangan : ";cin>>a;
	for (i=1; i <= a; i++){
		if((i%3==0) && (i%5==0)){
			cout<<"Upin & Ipin"<<endl;
		}else if ( i%3==0){
			cout<<"Upin"<<endl;
		} else if ( i%5==0){
			cout<<"Ipin"<<endl;
		} else {
			cout<<i<<endl;
		}
	}
	return 0;
}
