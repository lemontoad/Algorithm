#include <stdio.h>

int main(void)
{   
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    printf("arr[%d|%d|%d|%d|%d]\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

    arr[0] = arr[0] * 2;
    arr[1] = arr[1] * 2;
    arr[2] = arr[2] * 2;
    arr[3] = arr[3] * 2;
    arr[4] = arr[4] * 2;

    printf("arr[%d|%d|%d|%d|%d]\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    */
    /*
    int num;

    printf("숫자 입력: ");
    scanf("%d", &num);

    if (num>0) {
        printf("양수");
    } else if (num < 0) {
        printf("음수");
    } else {
        printf("0");
    }
    */
    /*
    int day;
    printf("요일 번호를 입력하세요 (1~7 순서대로 월~일)");
    scanf("%d", &day);

    switch (day) {
       case 1:
           printf("월요일\n");
           break;
       case 2:
           printf("화요일\n");
           break;
       case 3:
           printf("수요일\n");
           break;   
       case 4:
           printf("목요일\n");
           break;
       case 5:
           printf("금요일\n");
           break;
       case 6:
           printf("토요일\n");
           break; 
       case 7:
           printf("일요일\n");
       default:
           printf("잘못된 요일 번호\n");
           break;
    }
    */
    /*
    int arr[10] = {0,};
    for (int i = 0; i<=9; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<=9; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    */
    /*
    int num, sum = 0;

    do {
        printf("숫자를 입력하세요 (0을 입력하면 종료): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("입력한 숫자들의 합은 %d입니다.\n", sum);
    */
    /*
    int a = 5;
    int b = ++a; // 전위 증가: a = 6, b = 6
    int c = a++; // 후위 증가: c = 6, a = 7

    printf("a: %d, b: %d, c: %d\n", a, b, c); // a: 7, b: 6, c: 6
    */
    return 0;
}
//실행: ls, add ., gcc 1001.c, ./a.out
