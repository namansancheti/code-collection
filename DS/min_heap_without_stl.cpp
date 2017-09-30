#include<bits/stdc++.h>
using namespace std;

class minHeap
{
	public:
	int size;
	int mh[10000];
	int position;
	
	minHeap(int arr[], int size)
	{
		this -> size = size;
		for(int i = 1; i <= size; i++)
		{
			mh[i] = arr[i];
		}
		position = 0;
	}
	
	void display()
	{
		for(int i = 1; i <= size; i++)
		{
			cout<<mh[i]<<" ";
		}
	}
	
	void insert(int x)
	{
		if(position == 0) // Heap is empty
		{
			mh[position + 1] = x;
			position = 2;
		}
		
		else
		{
			mh[position++] = x;
			bubbleUp();
		}
	}
	
	void bubbleUp()
	{
		int pos = position - 1;
		while(pos > 0 && mh[pos / 2] > mh[pos])
		{
			// Swap parent with child
			int y = mh[pos]; 
			mh[pos] = mh[pos / 2];
			mh[pos / 2] = y;
			
			pos = pos / 2;
		}
	}
	
	int extractMin()
	{
		int min = mh[1];
		mh[1] = mh[position - 1];
		mh[position - 1] = 0;
		position--;
		sinkDown(1);
		return min;
	}
	
	void sinkDown(int k)
	{
		int smallest = k;
		
		if(2*k<position && mh[smallest]>mh[2*k]){
			smallest = 2*k;
		}
		
		if(2*k+1<position && mh[smallest]>mh[2*k+1]){
			smallest = 2*k+1;
		}
		
		if(smallest!=k){
			swap(k,smallest);
			sinkDown(smallest);
		}
		
	}
	
	void swap(int a, int b){
		int temp = mh[a];
		mh[a] = mh[b];
		mh[b] = temp;
	}
	
	
	
};

int main()
{
	
	int arr[] = {3,2,1,7,8,4,10,16,12};
	for(int i=0; i < sizeof(arr) / sizeof(arr[0]) ;i++)
	{
			cout<<arr[i]<<" ";
	}
	
	minHeap m = minHeap(arr, 9);
	
	cout<<"The min heap is\n";
	m.display();
	/*for(int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
			cout<<m.extractMin()<<" ";
	}*/
	
	
	return 0;
}
