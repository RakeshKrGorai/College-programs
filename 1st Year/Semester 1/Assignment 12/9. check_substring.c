//WAP to check whether a string is a substring of another string.
#include<stdio.h>
int main(){
	char str1[]={"HelloWorldProgrammingIsFun"};
	char str2[]={"Programming"};
	int len1=sizeof(str1)/sizeof(str1[0]);
	int times=0, cnt=1,i,j;
	for(i=0;i<len1;i++){
		if (str1[i]==str2[0]){
			for(j=0;str2[j]!='\0';j++){
				if (str1[i+j]==str2[j]){
					cnt=0;
					continue;
				}
				else{
					cnt++;
					break;
				}
			}
			i=i+j;
		}
		else{
			continue;
		}
	}
	if(cnt==0){
		printf("Ayyeah");
	}
	else{
		printf("Noooooo");
	}
	return 0;
}
