#include<stdio.h>
int main(){
	FILE *ptr=fopen("bt01.txt","r");
	int ch=fgetc(ptr);
	printf("%c",ch);
	return 0;
}

