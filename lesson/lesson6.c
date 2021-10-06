//関数の利用方法
#include <stdio.h>
//2乗するプログラムを関数化する
int square(int num){
    num = num * num;
    return num;
}
void square_norep(int num){
    num = num * num;
    printf("%d\n",num);
}

int main(void){

    int a = 2;
    a = a * a;//2乗することができた。
    printf("%d\n",a);

    printf("%d\n",square(3));//a * aの部分までを関数化
    square_norep(4);//printf分もまとめて関数化したもの
    return 0;
}