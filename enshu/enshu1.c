//入力された整数が10以上ならOKと出力し、10未満ならNOと出力するプログラム
#include <stdio.h>
int main(void){
    //ここにプログラムを書いていくが、、
    //入口と出口を先に記述すると取り組みやすい。
    int num;
    scanf("%d",&num);


    if(num < 10){
        puts("NO");
    }
    else {
        puts("OK");
    }

    
    
    return 0;
}