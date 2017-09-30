#include<bits/stdc++.h>
using namespace std;

#define N 7

void quicksort(int arr[], int start, int last) // QuickSort which considers the pivot as the first element
{
	int i = start + 1;
	int j = last;
	int temp;
	
	if(i > j)
		return;
	
	while(i <= j)
	{
		if(arr[i] < arr[start]) {
			i++;
			continue;
		}
		
		if(arr[j] > arr[start]) {
			j--;
			continue;
		}
		
		if(i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	temp = arr[start];
	arr[start] = arr[j];
	arr[j] = temp;
	
	cout<<"The array now is :-\n";
	for(int i = start; i <= last; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	quicksort(arr, start, j - 1);
	quicksort(arr, j + 1, last);	
	
}

int main()
{
	//int arr[] = {10, 80, 30, 50, 70};
	int arr[] = {5, 6, 8, 10, 2, 1, 3};
	
	for(int i = 0; i < 7; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	quicksort(arr, 0, N - 1);
	
	cout<<"\nThe sorted array is :\n";
	for(int i = 0; i < 7; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
