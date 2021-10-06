//整数を３つユーザーから受け取り、小さい順に出力させる。
#include <stdio.h>
int main(void){
    int a,b,c,temp;
    //入口の部分
    puts("一つ目の整数は");
    scanf("%d",&a);
    puts("二つ目の整数は");
    scanf("%d",&b);
    puts("三つ目の整数は");
    scanf("%d",&c);
    //小さい順に並び変えるプログラム
    //3,2,1  2,3,1   1,2,3
    //step1
    //3,2,1 -> 2,3,1 -> 2,1,3 
    //step2
    //2,1,3 -> 1,2,3

    //step1
    if(a > b){
        //aとbの交換を行える
        temp = a;//aを一時的に避難させる
        a = b;//ここでaがbで上書きされるから
        b = temp;//避難させたaをbに入れる   
    }
    if(b > c){
        temp = b;//bを避難させておく
        b = c;
        c = temp;//tempにはbが入っている

    }

    //step2
    if(a > b){
        //aとbの交換を行える
        temp = a;//aを一時的に避難させる
        a = b;//ここでaがbで上書きされるから
        b = temp;//避難させたaをbに入れる   
    }
    if(b > c){
        temp = b;//bを避難させておく
        b = c;
        c = temp;//tempにはbが入っている

    }


    //出口の部分
    printf("%d,%d,%d\n",a,b,c);
    return 0;
}