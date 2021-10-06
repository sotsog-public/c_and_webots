//100番目の素数を求める
#include <stdio.h>
int main(void){
    int count = 0,answer,flag,i,j;

    //2から1000までの素数を列挙して、100番目のものをansewerに入れる。
    for(i = 2;i < 1001;i++){
        flag = 1;//素数である
        //素数判定
        for(j = 2;j < i;j++){
            if(i % j == 0){
                //これは割り切れた時、つまり素数ではないとき
                flag = 0;
                break;//for分を途中で抜けること
            }
        }
        if(flag == 1){
            //iが素数の時の処理
            count += 1;
            answer = i;
            printf("count = %d,value = %d\n",count,answer);//素数が正確に計算されているかのチェック
        }
        if(count == 100){
            break;
        }

    }
    printf("100番目の素数は%d\n",answer);

    return 0;
}