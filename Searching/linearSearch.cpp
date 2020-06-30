/*
 * Author - Shivam Dongre
 * github - spd123
 * linear search - 
 * Time Complexity - O(n)
 * Space Complexity - O(1)
 * When to use - When we don't have sorted input
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int length, int element)
{
	for(int i=0;i<length;i++)
	{
		if(arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n;
	cout<<"Please enter total numbers to be pressent in the list\n";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" numbers\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int element;
	cout<<"Number to be searched\n";
	cin>>element;
	cout<<element<<" Found at index "<<linearSearch(arr,n,element)<<"\n";
	return 0;
}

