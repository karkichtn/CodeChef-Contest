#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string S;
	cin >> S;
	
	int n = S.length();
	
	if(S[0] == 'c' || S[n-1] == 'f')
	cout << "YES"<< endl;
	
	else
	cout << "NO" << endl;
    
  }
