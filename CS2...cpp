#include <iostream>
using namespace std;
int main()
{
	float percent;
	int x;
	cout<<"enter you percentage:";
	cin>>percent;
	cout<<"you scored"<<percent<<"%"<<endl;
	x=percent/10;
	switch(x)
{
	case 10:
	case 9:
	case 8:
		cout<<"you have passed distinction";
	break;
	case 7:
	case 6:
		cout<<"you have passed first division";
	break;
	case 5:
		cout<<" you have passed second division";
	break;
	case 4:
		cout<<" you have passed third division";
	break;
	defult:
	cout<<"sorry:you have failed";
}
return 0;
}
		 
	      