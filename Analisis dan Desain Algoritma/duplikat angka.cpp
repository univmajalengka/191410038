#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
	int x;
    int arr[] = { 1,2,2,3,4,5,6,2,8 }; 
    int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Angka berapa yang anda ingin ketahui : ";cin>>x; 
    cout << "Kemunculan angka : "<< count(arr, arr + n, x); 
  
    return 0; 
} 
