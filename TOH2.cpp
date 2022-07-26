#include<iostream>
using namespace std;
int TOH(int n){
	if (n==1)
		return 1;
	else 
	    return (2*TOH(n-1)+1);
}
int main(){
	int n,m;
	cout<<"Number of discs:";
	cin>>n;
	m=TOH(n))
	cout<<"/n Number of moves:"<<m;
	
	
}
