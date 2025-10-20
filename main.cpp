#include<iostream>

int a(int *b,int *c){
	int d = 0;
	d = (*b)*(*c);
	return d;
}
int main(){
	int b = 3;
	int c = 6;
	std::cout << a(&b,&c) << std::endl;
	return 0;
}
