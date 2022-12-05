#include <stdio.h>

void display(int x[]){
    int i;

    for(i=0; i<5; i++){

        printf("%d ",x[i]);

    }

}

int main()
{
    int num[] = {1,2,3,4,5};
    display(num);


}


