#include<bits/stdc++.h>
using namespace std;

int LCSubstr(string a, string b, int m, int n)
{
	int LCSuff[m+1][n+1];
	int result = 0;
	
	for(int i = 0; i <= m; i++) {
		for(int j = 0; j <= n; j++) {
			if(i == 0 || j == 0)
				LCSuff[i][j] = 0;
			
			else if(a[i-1] == b[j-1]) {
				LCSuff[i][j] = 1 + LCSuff[i-1][j-1];
				result = max(result, LCSuff[i][j]);
			}
			else 
				LCSuff[i][j] = 0;
		}
	}
	return result;
};


int main() {
	string a = "OldSite:GeeksforGeeks.org";
	string b = "NewSite:GeeksQuiz.com";
	
	int m = a.size();
	int n = b.size();
	
	cout<<LCSubstr(a, b, m, n);
	
	return 0;
}
