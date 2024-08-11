#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[20];
	int n;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	map <int,int> sample;
	int i;
	for(i=0;i<n;i++)
	{
		sample[arr[i]]++;
	}
	for(map<int, int>::iterator it = sample.begin(); it != sample.end(); ++it)
	{
		if(it->second>n/2)
		{
			cout<<"count "<<it->first;
		}
	}
}
