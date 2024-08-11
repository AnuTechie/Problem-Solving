#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int i,sum=0;
	int maxi=0,start;
	int n=5,s,e;
	int arr[20]={-1, -2, -3, -2, 5};
	for(i=0;i<n;i++)
	{
		if(sum==0)	
		{
			start=i;
		}
		sum+=arr[i];
		if(sum<0)
		{
			sum=0;
		}
		if(sum>maxi)
		{
			maxi=sum;
			s=start;
			e=i;
		}
	}
	cout<<"sum  "<<sum;
}
