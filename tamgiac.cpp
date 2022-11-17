#include<iostream>
using namespace std;

bool checkTamGiac (int a,int b,int c){
	if(a*a+b*b == c*c || a*a+c*c==b*b ||c*c+b*b==a*a)
		return true;
	return false;
}

void DemTamGiac(int n){
	int count=0;
	for(int a=0;a<=n;a++){
		for(int b=a+1; b<=n-a;b++){
			for(int c=b+1;c<=n-a-b;c++){
				if(a+b+c<=n && checkTamGiac(a,b,c)){
					count++;
				}
			}
		}
	}
	cout<<count;
}
int main(){
	int n;
	cin>>n;
	DemTamGiac(n);
	
}
