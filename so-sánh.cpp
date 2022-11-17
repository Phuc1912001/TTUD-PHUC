#include<iostream>
#include<math.h>
using namespace std;
void sosanh(int a,int b,int c,int d){
	if(pow(a,b)> pow(c,d))
		cout<<"lon hon";
	else if(pow(a,b) == pow(c,d))
		cout<<"bang nhau";
	else
		cout<<"nho hon";
}
int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	sosanh(a,b,c,d);
	return 0;	
}
