#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,i,j,k;
	cin>>r>>c>>k;
	if(k>c)
	{
		k-=c;
	}
	vector<vector<int> > arr(r,vector<int>(c));
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		reverse(arr[i].begin(),arr[i].end());
		reverse(arr[i].begin(),arr[i].begin()+k);
		reverse(arr[i].begin()+k,arr[i].end());
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
