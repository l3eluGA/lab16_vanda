#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d)
{
	int n;
	n=rand()%4;
	int n1 =a,n2=b,n3=c,n4=d;
	switch(n)
	{	case 0: a=b; b=n1;break;
		case 1: c=d; d=n3;break;
		case 2: a=c; c=n1;break;
		case 3: b=d; d=n2;break;
	}
}