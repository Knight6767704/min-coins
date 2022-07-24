#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a=0,b=0,c=0,d=0,e=0;
	cin>>n;
	a=n/11;
	n=n%11;
	b=n/9;
	n=n%9;
	c=n/7;
	n=n%7;
	d=n/5;
	n=n%5;
	e=n/1;
	n=n%1;
	cout<<a+b+c+d+e<<endl;
	return 0;
}
