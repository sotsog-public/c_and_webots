//変数の詳しい取り扱い
// a b c　の中に10,11,23といった形でいろいろな数を入れて操作してみる

#include <stdio.h>
int main(void){
    //ここにプログラムを記述していく
    int a,b;//aとbという数字を入れるための箱を用意する
    a = 1; //1が入っている
    b = 2;
    printf("a = %d,b = %d\n",a,b);
    //aとbを応用していく +  -  *  / 
    printf("a + b = %d\n",a + b);
    printf("a - b = %d\n",a - b);
    printf("a * b = %d\n",a * b);
    printf("a / b = %d\n",a / b);

    //1 / 2 = 0.5   0     .5
    float af,bf;//float doubleといわれる型を使うと桁を多く取ることができる。
    af = 1; //1.000000を入れている
    bf = 2; //2.000000
    printf("af = %f,bf = %f\n",af,bf);
    printf("af / bf = %f\n",af / bf);

    //double型
    double ad,bd;
    ad = 1;//1.000000
    bd = 2;//2.00000
    printf("ad = %lf,bd = %lf\n",ad,bd);
    printf("ad / bd = %lf\n",ad / bd);

    //ここまでは数字　
    //ここからは文字列 [a] [b]
    //char型
    char c1;//文字列を"一文字"入れることができる変数
    c1 = 'a';//c1の中にaを入れておく

    printf("c1の中には「%c」が入っています\n",c1);//c1の中身を取り出して表示



    return 0;
}