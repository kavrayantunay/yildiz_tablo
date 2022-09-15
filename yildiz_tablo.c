#include <stdio.h>
int main(){
    int i=1;
    int j=1;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            if((i+j)%2==0)
                printf("*");
            else
            printf(" ");

            
        }
        printf("\n");
    }
}