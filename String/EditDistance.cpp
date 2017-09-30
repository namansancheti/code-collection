#include<bits/stdc++.h>
usign namespace std;

int editDist(string a, string b, int len1, int len2)
{
	if(len1 == 0) return len2;
	
	if(len2 == 0) return len1;
	
	if(a[len1-1] == b[len2-1])
	{
		return editDist(str1, str2, m-1, n-1);
	}
	else 
	{
		return 1 + min(editDist(a, b, len1, len2 - 1), editDist(a, b, len);
	}
	
	
}

int main()
{
	string str1 = "sunday";
	string str2 = "saturday";
	
	cout<<editDist(str1, str2, str1.length(), str2.length());
	
	return 0;
}

