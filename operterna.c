#include<stdio.h>

void maximum(int a, int b){
	int max= (a < b ? b: a);
}

void main(){
	int a = 10, b =20;
	
	maximum(a, b);
}
