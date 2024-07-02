#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 乱数の初期化
    srand(time(NULL));

    // 結果の格納用変数
    int heads = 0, tails = 0;
    char name[100];

    printf("Who are you?\n");
    printf("> ");
    scanf("%s", name);
    printf("Hello, %s!\n",name);

    printf("Tossing a coin...\n");

    // 3ラウンドのコインフリップ
    for (int i = 1; i <= 3; i++) {
        int result = rand() % 2;  // 0=表, 1=裏
        printf("Round %d: ", i);
        if (result == 0) {
            printf("Heads\n");
            heads++;
        } else {
            printf("Tails\n");
            tails++;
        }
    }

    // 結果の出力
    printf("Heads: %d, Tails: %d\n", heads, tails);

    return 0;
}
