#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	int i,j,c,r,min=999;
	cin>>r;
	cin>>c;
	vector<vector<int> > arr(r, vector<int>(c));
	map<int,int> sample;
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
			if(arr[i][j]==1)
			{
				sample[i]++;
			}
		}
	}
	for(map<int, int>::iterator it = sample.begin(); it != sample.end(); ++it)
	{
		cout<<it->first<<" : "<<it->second;
		if(it->second<min)
		{
			min=it->second;	
		}	
		if(it->second==min)
		{
			continue;
		}
	}
	if(min==999)
	{
		cout<<"Index with max number of counts"<<endl;
		cout<<"1";
	}
	for(map<int, int>::iterator it = sample.begin(); it != sample.end(); ++it)
	{
	
		if(it->second==min)
		{
			cout<<"Index with max number of counts"<<endl;
			cout<<it->first+1;
			break;
		}
	}
	return 0;
}
