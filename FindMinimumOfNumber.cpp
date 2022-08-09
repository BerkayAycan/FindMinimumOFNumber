#include<iostream>

using namespace std;
void FindMinimum(int x,int y,int z);//Fonksiyon Imzasi

int main(){
	FindMinimum(3,5,1);//Fonksiyonu 3,5,1 sayilari ile çagirma
	return 0;
}
void FindMinimum(int number1,int number2,int number3){//Fonksiyonun tanimi
	int minimum=number1;//Varsayim yontemi ile minimum degiskenine number1 degiskenini atamak.
	if(number2<number1)//Eger number2, number1 degiskeninden kucukse minimum number2 degiskenidir.
	 minimum=number2;
	if(number3<number1)//Eger number3, number1 degiskeninden kucukse minimum number2 degiskenidir
	 minimum=number3;
	cout<<minimum;//minimum degerini ekrana bastir
}
