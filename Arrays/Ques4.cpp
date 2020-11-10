/*
Problem:     SALARY - The Minimum Number Of Moves

Description:
 * The asnwer is sumW - N * minW,
 * where sumW is the sum of all salaries
 * and minW is the minimal salary
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int t=0; t<T;t++){
		
		int n;
	    cin>>n;
	    
	    int sum=0,minW=10000;
	    
	    for(int i=0; i<n; i++){
	    	
	    	int Wi;
	        cin>>Wi;
	        
	        sum+=Wi;
	        
	        minW= min(Wi,minW);
	    }
	    
	    cout<<sum-n *minW<<endl;
	}
	return 0;
}

