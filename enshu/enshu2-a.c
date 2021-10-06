//演習2の機能を拡張していきます。
//入力する整数の数を任意に選べるようにします。
//5つ整数を入力することや10個入力することができる。
#include <stdio.h>
int main(void){
    //入口 いくつの整数を入力するかユーザーに尋ねる
    int i,j,num,temp;
    int value[100];
    //value[0],value[1]
    //3 -> value[0] = 1  value[1] = 2 value[2] = 3
    //3,2,1,4
    puts("整数の個数を入力してください。");
    scanf("%d",&num);
    //numの部分に何個整数を入力するのかが入る。

    //指定された個数の入力(scanf)を行う
    //num回for分が回る
    for(i = 0;i < num;i++){
        scanf("%d",&value[i]);
    }

    //並び替えの部分を行う
    //step1の部分 (stepはnum - 1)
    for(i = 0;i < num - 1;i ++ ){
        //stepが内側のforで行われる
        for(j = 0;j < num - 1;j++){
            if(value[j] > value[j + 1]){
                temp = value[j];//bを避難させておく
                value[j] = value[j + 1];
                value[j + 1] = temp;//tempにはbが入っている
            }
        }
    }
    //出力を行う
    for(i = 0;i < num;i ++){
        printf("%d,",value[i]);
    }
    
    return 0;
}