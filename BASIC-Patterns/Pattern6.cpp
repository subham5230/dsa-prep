#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	for (int i=0; i<n; i++){
		for (int j=n; j>i; j--){
			cout << n-j+1;
		}
		cout<< '\n';
	}

	return 0;
}


// output:

// 12345
// 1234
// 123
// 12
// 1
