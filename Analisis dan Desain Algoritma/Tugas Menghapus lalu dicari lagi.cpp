#include <iostream>
using namespace std;

int main()
{
	
	int a,i,x;
	int arr[100];
	int total=0;
	
	cout<<"Masukan jumlah angka : ";
	cin>>a;
	for(i=1; i<=a;i++)
	{
		cout << "Angka ke " << i << " : "; cin >> arr[i];
	}
	cout<<"Angka yang akan dihapus : ";
	cin>>x;
   for(int i=0;i<=x;i++)
    {
        if(arr[i]==x)
        {
            arr[i]=0;
            total=total+1;
        }
    }
    cout<<"\nData "<<x<<" berhasil dihapus!\n";

    cout<<"\nData sekarang : \n";
    for(int i=0;i<=7;i++)
    {
        if(arr[i]!=0)
        {
        cout<<arr[i]<<" ";
        }
    }
}
