#include<bits/stdc++.h>
using namespace std;

/*int binary_search(int arr[], int ele, int low, int high)
{
	if(low > high) 
	{
		return -1;
	}
	
	int mid = low + ((high - low ) / 2);
	if(arr[mid] == ele)
	{
		return mid+1;
	}
	
	if(arr[mid] > ele)
	{
		return binary_search(arr, ele, low, mid - 1);
	}
	return binary_search(arr, ele, mid+1, high);
}*/

int binary_search(int arr[], int ele)
{
	int low = 0;
	int high = 5;
	
	while(low <= high)
	{
		int mid = low + ( (high - low) / 2);
		if(arr[mid] == ele)
		{
			return mid + 1;
		}
		if(arr[mid] > ele)
		{
			high = mid - 1;
		}		
		else 
		{
			low = mid + 1;
		}
	}
	return -1;
}

int main() 
{
	int arr[] = {1, 4, 6, 8, 10, 12};
	//cout<<binary_search(arr, 11, 0, 5);
	cout<<binary_search(arr, 11);
	return 0;
}
