#include <iostream.h>
using namespace std;
int add(int,int);
int sub(int,int);
int main(){
	int i;
	cout<<"Enter 1 for addition , for substraction press any other number	";
	cin>>i;
	int a,b;
	if(i==1){
		cout<<"Enter the numbers "<<endl;
		cin>>a>>b;
		add(a,b);
	}
	else{
		cout<<"Enter the numbers "<<endl;
		cin>>a>>b;
		sub(a,b);
	}
	return 0;
}

int add(int a,int b){
return a+b;
}
int sub(int a,int b){
return a-b;
}
