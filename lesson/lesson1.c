#include <stdio.h>//stdioでありstudio
int main(void){
 //ここにプログラムを記述する
 //出力を行う
 //今回はHello worldと表示してみよう！
 printf("ここに記述した文字列が表示されます。\n"); //printではない
 puts("putsは何もしなくても改行してくれます。");

 printf("Hello World\n");

 //続いては入力も行ってみる
 int a;  //aという数字を入れるための箱を作成
 a = 10; //aという箱の中に10を入れる

 printf("%d\n",a + 1);//変換形式ですが、深く考える必要はありません。
 printf("10 + 1\n");

 int num;//numという箱を用意
 scanf("%d",&num);//bの中にユーザーから入力された値を入れる。
 //ここで一度実行がストップします。

 //ユーザーから値を受け取った後に次へ進む
 printf("あなたが入力した値は %d ですね。\n",num);//入力された値を表示
 
    return 0;
}