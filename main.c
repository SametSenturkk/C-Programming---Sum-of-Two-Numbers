#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	int number1,number2,total;
	
	printf("Birinci Sayýyý Giriniz: ");
	scanf("%d",&number1);
	printf("Ýkinci Sayýyý Giriniz: ");
	scanf("%d",&number2);
	printf("Toplam: %d",number1+number2);
	
}
