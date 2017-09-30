#include<bits/stdc++.h>
using namespace std;

class Point
{
	public:
	int x,y;
	
	Point(int x, int y)
	{
		this -> x = x;
		this -> y = y;
	}
};

class MyComparator
{
	public:
		int operator() (const Point &p1, const Point &p2)
		{
			return p1.x > p2.x;
		}
};

int main()
{
	priority_queue<Point, vector<Point>, MyComparator > pq;
	
	pq.push(Point(10, 2));
    pq.push(Point(2, 1));
    pq.push(Point(1, 5));
    
    while(pq.empty() == false)
    {
		Point q = pq.top();
		cout<<q.x<<" "<<q.y<<"\n";
		pq.pop();
	}
	
	return 0;
}
