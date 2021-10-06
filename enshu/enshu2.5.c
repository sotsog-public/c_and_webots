//ある数numが素数かどうかの判定(num > 2)
#include <stdio.h>
int main(void){
    //まず、numを宣言しておきます。
    int num,i,j,flag;
    puts("2より大きい整数を入力してください。");
    scanf("%d",&num);
    //受け取った値が素数かどうかを判定する。
    //素数であればその整数よりも小さい整数で割り切れない。
    //2,3,5,7,11... 11 (2,3,4,5,6,7,8,9,10で割り切れない。)
    flag = 1;//素数である
    //素数判定
    for(i = 2;i < num;i++){
        if(num % i == 0){
            //これは割り切れた時、つまり素数ではないとき
            flag = 0;
            break;//for分を途中で抜けること
        }
    }
    if(flag == 0 ){
        puts("素数ではありません。");
    }
    else {
        puts("素数です。");
    }
    return 0;
}