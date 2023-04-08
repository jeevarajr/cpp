#include <iostream>

using namespace std;

int main() {

	int a,b,c,d,e;
	cin>>a>>b>>c;
    d=c;
    c=a;
    a=b;
    b=d;
    cout<<a<<" "<<b<<" "<<c;
    
	
return 0;
}

INPUT: 115 20 301
OUTPUT : 20 301 115
