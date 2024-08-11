#include<iostream>
using namespace std;
int main()
{
	int i,t1,t2,j,r,c,arr[20][20];
	cin>>r>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]==0)
			{
				 t1=i;
				 t2=j;
			//	cout<<"j"<<j<<endl;
			//	cout<<"i"<<i<<endl;
				break;
			}
		}
	}
	int z;
//	cout<<"j"<<t2<<endl;
//	cout<<"i"<<t1<<endl;
	for(z=0;z<r;z++)
	{
		arr[z][t2]=0;
	}
	for(z=0;z<c;z++)
	{
		arr[t1][z]=0;
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
}
