#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;

	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			cout << i+1;
		}
		cout<< '\n';
	}

	return 0;
}


// output:

// 1
// 22
// 333
// 4444
// 55555
