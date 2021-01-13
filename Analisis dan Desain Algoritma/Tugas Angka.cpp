#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int i, b;
	int Data[7]={1,2,2,5,4,4,1};
	reverse(Data, Data + 7); 
			
	for (i=6; i>=0; i--){
		cout << Data[i];
			for(b=1; b<=i; b++){
				cout << "0" ;
			}
		cout << endl;
	}	
}
