#include<iostream>
using namespace std;
int main()
{
	int arr[20][20];
	int i,j;
	int r,c,target;
	cout<<"rows"<<endl;
	cin>>r;
	cout<<"cols"<<endl;
	cin>>c;
	cout<<"target"<<endl;
	cin>>target;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	i=0;
	while(i<r)
	{
		if(arr[i][c-1]>target)
		{
			break;
		}
		else{
			i++;
		}
	}
	for(j=0;j<c;j++)
	{
		if(arr[i][j]==target)
		{
			cout<<"true";
			return 0;
		}
	}
	cout<<"false";
	
}
