#include <stdio.h>
#include "head.h"
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc>1) {
		if (argv[1][0]=='-' && argv[1][1]=='f') {
			for (unsigned int i=0;i<strlen(argv[2]);i++)
				if (argv[2][i]=='q')
					argv[2][i]='^';
			printf("%s: ",argv[2]);
			printf("%f",scan_str(argv[2]));
		}
		else if (argv[1][0]=='-' && argv[1][1]=='i') {
			char c;
			float a,b,f;
			char temp[80];
			printf("Vvedite 1-u operand:");
			scanf("%f",&a);
			printf("Vvedite 2-u operand:");
			scanf("%f",&b);
			printf("Vvedite operaciyu:");
			scanf("%s",&c);
			if(c=='+'){
				f=a+b;
			}else{
				f=a-b;
			}
			printf("%f",f);
		}
		else if (argv[1][0]=='-' || argv[1][1]=='h')
			printf("\nAvtor: Hvalin KI-104\n\nkey:\n-h --> help\n-i --> interaktiv\n-f --> prostoy vvod");
	}
	else
		printf("Programma zapushchena bez kluchey");
	do{
		char temp[80];
		printf("\nVvedite vyrazhenie: ");
		scanf("%s",&temp);
		printf("%s= ",temp);;
		printf("%f",scan_str(temp));
	} while (true);
	int q;
	scanf("%d",&q);
	return 0;
}
