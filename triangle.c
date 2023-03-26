#include<stdio.h>
int main(){

int n, c=1;
printf("Enter the number of rows: \n");
scanf("%d", &n);
int nsp=n-1;
for(int i=0; i<=n; i++)
{
    for(int j=0; j<=nsp; j++);
    {
        printf(" ");

    }
    nsp--;
    for(int k=0; k<=i; k++)
    {
        if(i==0 || k==0)
        printf("%d", c);
        else
        {
            c=c*(i-k+1)/k;
            printf("%d",c);
        }
    
    } 
    printf("\n");
    }

    return 0;
}

