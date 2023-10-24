#include <bits/stdc++.h> 
using namespace std; 

int f_search(int arr[], int x, int n) 
{ 
	
	int f2 = 0; 
	int f1 = 1;
  int f=f1+f2;
	
	while (f<n) { 
		f2=f1; 
		f1=f; 
		f=f1+f2;
	} 

	int offset = -1; 

	while (f>1) { 
	
		int i = min(offset + f2, n - 1); 

		if (arr[i] < x) { 
			f=f1; 
			f1=f2; 
			f2=f-f1; 
			offset=i; 
		} 

		else if (arr[i] > x) { 
			f=f2; 
			f1=f1-f2; 
			f2=f-f1; 
		} 

		else
			return i; 
	} 

	
	if (f1 && arr[offset + 1] == x) 
		return offset + 1; 

	return -1; 
} 

int main() 
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int x;
  cin>>x;

	int ind=f_search(a, x, n); 
if(ind>=0) 
	cout << "Found at index: " << ind; 
else
	cout << x << " isn't present in the array"; 

	return 0; 
} 
