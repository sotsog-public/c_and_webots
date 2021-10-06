//条件分岐
#include <stdio.h>
int main(void){
    //今回は条件分岐を学びます。
    int a = 10;
    //2条件分
    if(a > 3){
        //aが3より大きいときにここのプログラムを実行する
        puts("upper 3");
        }
    else {
        //aが3以下の時に実行するプログラム
        puts("under 3");
    }    

    //3条件分岐
    if (a < 5){
        //5より小さいとき
        puts("under 5");
    }
    else if (a == 5){//= は代入 等号は　『==』
        //5の時
        puts("just 5");
    }
    else {
        //5より大きいとき
        puts("upper 5");
    }

    return 0;
}