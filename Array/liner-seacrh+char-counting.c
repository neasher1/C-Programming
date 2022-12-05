#include <stdio.h>
int main()
{
    int count=0,i,num,pos=-1;
    char a[100],x;

    printf("Enter numbers: ");
    scanf("%d",&num);

    printf("Enter %d numbers: ",num);
    for(i=0; i<num; i++){
        scanf(" %c",&a[i]);
    }

    printf("Enter charcter: ");
    scanf(" %c",&x);

    for(i=0; i<num; i++){
        if(x==a[i]){
            printf("%c is found",x);
            pos = i+1;
            count++;
        }
    }
    printf("\nThere is a %d times %c charcter\n",count,x);
    if(pos==-1)
        printf("Not found");
    else
        printf("Position = %d",pos);
}
