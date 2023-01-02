#include <bits/stdc++.h>
using namespace std;

void printTriangle(int n) {
    // code here
    
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=2; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
	
	int n;
	cin>>n;
	
	printTriangle(n);

	return 0;
}


// output:

// *********
//  *******
//   *****
//    ***
//     *
