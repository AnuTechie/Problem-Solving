#include<bits/stdc++.h> 
using namespace std; 
void printDiamond(int n) 
	{ 
		cout<<endl; 
	
		int i, j = 0; 
	
		// for top half 
		for (i = 0; i < n; i++) { 
	
			// for left * 
			for (j = i; j < n; j++) 
				cout<<"*"; 
	
			// for middle " " 
			for (j = 0; j < 2 * i + 1; j++) 
				cout<<" "; 
	
			// for right * 
			for (j = i; j < n; j++) 
				cout<<"*"; 
	
			cout<<endl; 
		} 
	
		// for below half 
		for (i = 0; i < n - 1; i++) { 
	
			// for left * 
			for (j = 0; j < i + 2; j++) 
				cout<<"*"; 
	
			// for middle " " 
			for (j = 0; j < 2 * (n - 1 - i) - 1; j++) 
				cout<<" "; 
	
			// for right * 
			for (j = 0; j < i + 2; j++) 
				cout<<"*"; 
	
			cout<<endl; 
		} 
		cout<<endl; 
	} 
	
	// Driver Code 
	int main() 
	{ 
	
		// Define n 
		int n = 3; 
		cout<<"Inverse Diamond Pattern for n = "<<n; 
		printDiamond(n); 
	
		n = 5; 
		cout<<"\nInverse Diamond Pattern for n = "<<n; 
		printDiamond(n); 
	} 

