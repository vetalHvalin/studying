#include "head.h"
#include <stdio.h>
#include <string.h>

float scan_str(char *str){
	unsigned i=0;
	char temp_str[100]; /*строка с накапливаемой цифрой, для первода в int*/
	float res=0;
	int j=0; /*текущая длина строки с накапливаемой цифрой, для последующего перевода в int*/
	char ok='n';
	for (i=0;i<=strlen(str);i++){
		char c=str[i];
		if (str[i]==' ' || str[i]=='(' || str[i]==')') continue;
		if ((c>='0' && c<='9')|| c=='.'){
			temp_str[j]=c;
			j++;
		}
		else {
			temp_str[j]='\0';
			j=0;
			float temp_float=0;
			sscanf(temp_str,"%f",&temp_float);
			if (ok=='n') {
				res=temp_float;
				ok=c;
				continue;
			}
			if (c!='\0') ok=c;
			if (ok=='+') {
				res+=temp_float;
			}
			else {
				if (ok=='-')
					res-=temp_float;
				else {
					if (ok=='*')
						res*=temp_float;
					else {
						if (ok=='/')
							res/=temp_float;
						else {
							if (ok=='^'){
								int r=1;
								if (res!=0)
									for (int k=0; k<temp_float; k++)
										r=r*res;
								else res = 0;
								res=r;
							}
						}
					}
				}
			}
		}
	}
	return res;
}
