/*
 * Author - Shivam Dongre
 * github - spd123
 * binary search - 
 * Time Complexity - O(logn)
 * Space Complexity - O(1)
 * When to use - When we have sorted input
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int element)
{
	if(low<=high)
	{
		int mid = low + (high-low)/2;
		if(arr[mid]==element)
			return mid;

		else if(arr[mid]>element)
			return binarySearch(arr,low,mid-1,element);
		else
			return binarySearch(arr,mid+1,high,element);
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
        cout<<element<<" Found at index "<<binarySearch(arr,0,n-1,element)<<"\n";
        return 0;
}
