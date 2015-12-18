//Matrica
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,i,j,m;
	int a[100][100];
	
	cout<<"Unesi broj vrsta:"<<endl;
	cin>>n;
	cout<<"Unesi broj kolona:"<<endl;
	cin>>m;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		cout<<"Unesi broj u matricu :";
		cin>>a[i][j];
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		
		cout<<a[i][j];
		cout<<"   ";
		}
		cout<<endl;
	}
	return 0;
}
