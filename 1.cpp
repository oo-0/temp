#include <iostream.h>
using namespace std;
void add(int,int);
void sub();
int main(){
	int i;
	cout<<"Enter 1 for addition ";
	cin>>i;
	int a,b;
	if(i==1){
		cout<<"Enter the numbers "<<endl;
		cin>>a>>b;
		add(a,b);
	}
	else{
		
	}
	return 0;
}

void add(int a,int b){
return a+b;
}
