//繰り返し処理 for while
#include <stdio.h>
int main(void){
    int i;
    //for分
    for (i = 0;i < 10;i ++){
         printf("for %d\n",i);
    }
    //while分
    int j = 0;
    while(j < 10){
        printf("while %d\n",j);
        //j = j + 1;
        j += 1;
    }
    return 0;

}