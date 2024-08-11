#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int num;
	cin>>num;
	int start=2;
	int temp=start,i=1,j=0;
	vector<int> nums;
	while(temp<=num)
	{
		nums.push_back(temp);
		temp++;
	}
	while(j<nums.size())
	{
		int	z=j+1;
		while(i<nums.size())
		{
			if(nums[i]%start==0)
			{
				nums[i]==-1;
				i++;
			}
			else{
				i++;
			}
		}	
		while(z<nums.size())
		{
			if(nums[z]==-1)
			{
				z++;
			}
			else{
				start=nums[z];
			}
		}
	}
	for(i=0;i<nums.size();i++)
	{
		if(nums[i]==-1)
		{
			continue;
		}
		else{
			cout<<nums[i];
			cout<<"\n";
		}
	}
	
}
