#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int key,i=0;   //key is the number of nodes upto which height is to be calculated
    printf("Enter Key");
    scanf("%d",&key);    

    if(key%2!=0)
    {
        key++;
    }
    while(key/(int)pow(2,i))
    {
        i++;
    }
    if(i)
    printf("%d ",i-1);
    else
        printf("%d",i);
    return 0;
}
