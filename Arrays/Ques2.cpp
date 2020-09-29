/*
Problem Code: CNOTE 

Chef likes to write poetry. Today, he has decided to write a X pages long poetry, but unfortunately his notebook has only Y pages left in it.
Thus he decided to buy a new CHEFMATE notebook and went to the stationary shop.
Shopkeeper showed him some N notebooks, where the number of pages and price of the ith one are Pi pages and Ci rubles respectively.
Chef has spent some money preparing for Ksen's birthday, and then he has only K rubles left for now.

Chef wants to buy a single notebook such that the price of the notebook should not exceed his budget and he is able to complete his poetry.

Help Chef accomplishing this task. You just need to tell him whether he can buy such a notebook or not.
Note that Chef can use all of the Y pages in the current notebook, and Chef can buy only one notebook because Chef doesn't want to use many notebooks.

Input
The first line of input contains an integer T, denoting the number of test cases.
Then T test cases are follow.

The first line of each test case contains four space-separated integers X, Y, K and N, described in the statement.
The ith line of the next N lines contains two space-separated integers Pi and Ci, denoting the number of pages and price of the ith notebook respectively.

Output
For each test case, Print "LuckyChef" if Chef can select such a notebook, otherwise print "UnluckyChef" (quotes for clarity).
*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;     //test cases
	int x,y,k,n;
	while(t--){
	    int flag=0;
	cin>>x>>y>>k>>n;   //No. of pages of poetry, pages left in prev notebook, rubles, no. of notebooks shown
	int p[n],c[n];
	for(int i=0; i<n; i++){
	    cin>>p[i]>>c[i]; //pages and cost of notebooks
	    if(x<=y) {
	    	flag=1;
		}
	    else if(c[i]<=k && p[i]+y >= x)
	    {
	            flag=1;
	        }
	}
	if(flag)
	cout<<"LuckyChef"<<endl;
	else
	cout<<"UnluckyChef"<<endl;
	    
	}
	return 0;
}


