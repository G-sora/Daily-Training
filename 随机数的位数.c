#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int inputNumber;
    printf("请输入数字：");
    scanf("%d", &inputNumber);

    if (inputNumber < 0) {
        printf("请输入非负整数。\n");
        return 1;
    }

    int digitCount = 0;
    int temp = inputNumber;

    // 计算数字位数
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    int position = 0;
    temp = inputNumber;

    // 逐位打印数字
    while (temp != 0) {
        position++;
        int currentDigit = temp % 10;
        temp /= 10;
        printf("第%d位数为%d\n", position, currentDigit);
    }
    return 0;
}
