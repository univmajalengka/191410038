#include <iostream>
#include <string.h>
using namespace std;

int main() {

char c [100];
char d [100];
    cout<<"Masukan kata : ";cin>>c;

    strcpy(d,c);
    strrev(d);

if(strcmp(c,d) == 0) {
cout<<c<<" >> True";
} else {
	cout<<c<<" >> False";
}
return 0;
}
