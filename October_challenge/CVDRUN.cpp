/*
Contest Code:OCT20B Problem Code:CVDRUN

Covid-19 is spreading fast! There are N cities, numbered from 0 to (N-1), arranged in a circular manner.
City 0 is connected to city 1, 1 to 2, …, city (N-2) to city (N-1), and city (N-1) to city 0.

The virus is currently at city X. Each day, it jumps from its current city, to the city K to its right, i.e., from city X to the city (X+K)%N. As the virus jumps,
the cities in between don't get infected. Cities once infected stay infected. You live in city Y.
Find if it will reach your city eventually. If it will, print YES, else print NO.

Input:
The first line of the input consists of an integer T, the number of test cases.
The first and only line of each test case contains four space-separated integers - N, K, X and Y, denoting the number of cities,
the size of jumps, Covid's current city, and the city that you live in, respectively.
Output:
For each test case, in a new line, print YES if Covid shall reach your city after a finite number of days, else print NO.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t,n,k,x,y;
	cin>>t;     //test cases
	while(t--){
		cin>>n>>k>>x>>y;
	    int arr[n],	flag=0;;
	    for(int i=1; i<n; i++){
	    	arr[0]= x;
	    	arr[i] = (x+k)%n;
	    	x=arr[i];
	    	if(arr[0]==arr[i]){
	    		break;
	    	}
	    	if(arr[i-1]==y){
	    		flag=1;
	    		break;
			}
			}
	  if(flag==1)
	  cout<<"YES\n";
	  else
	  cout<<"NO\n";  
	}
	return 0;
}



