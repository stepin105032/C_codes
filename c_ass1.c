#include<stdio.h>
#include<string.h>

int main()
{
	int count=0,i,j=0,k=0,jmax;
	char name[1000], ind[1000][1000];
	printf("enter :");
	scanf("%s",name);
	
	
	
	for(i=0;i<strlen(name);i++)
	{
		if((name[i]=='_'))
		{k++;
		count++;
		j=0;
		}
		else  {
			ind[k][j++]=name[i];
			ind[k][j]='\0';
			
		}
	}
	
	for(k=0;k<=count;k++)
	{for(i=0;i<=strlen(ind[k]);i++)
	printf("%c",ind[k][i]);
	printf("\n");}
	return 0;
}
