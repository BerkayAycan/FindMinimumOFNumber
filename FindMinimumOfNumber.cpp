#include<iostream>

using namespace std;
void FindMinimum(int x,int y,int z);

int main(){
	FindMinimum(3,5,1);
	return 0;
}
void FindMinimum(int number1,int number2,int number3){
	int minimum=number1;
	if(number2<number1)
	 minimum=number2;
	if(number3<number1)
	 minimum=number3;
	cout<<minimum;
}
