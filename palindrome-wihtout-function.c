#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100],rev[100];
  	int i,j,len;
    char org[20];
    strcpy(org,str);
  	printf("Enter any String :\n");
  	gets(str); 	
  	j=0;
  	len=strlen(str);
  	for (i =len-1; i>=0;i--)
  	{
  		rev[j++]=str[i];
  	}
  	printf("\n String after Reversing=%s\n",rev);
    if(strcmp(org,str)==0){
        printf("yes its palindrome");
    }
    else{
        printf("no its not a palindrome");
    }
  	return 0;
}