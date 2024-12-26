#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr=fopen("bt01.txt","a");
	char str[50];
	printf("Moi ban nhap chuoi bat ki: ");
	fgets(str,50,stdin);
	for (int i=0;i<strlen(str);i++){
		fputc(str[i],ptr);
	}
	return 0;
}

