#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int> > arr{{1,3} , {2,6} ,{8,10}, {15,18}};
	int i;
	vector<vector<int>> ans;
	for(i=0;i<arr.size();i++)
	{
		if(ans.empty() || arr[i][0]>=ans.back()[1])
		{
			ans.push_back(arr[i]);
		}
		else
		{
			ans.back()[1]=max(arr[i][0],ans.back()[1]);
		}
	}
	for(i=0;i<ans.size())
	{
		cout<<arr[i];
	}
}
