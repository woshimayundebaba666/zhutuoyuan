#include<stdio.h>
int main(){

int num = 0;
if (num == 0) {
    printf("The number is zero.\n");
}



char digit = '0';
int value = digit - '0';  // 将字符 '0' 转换为对应的整数 0
printf("The value is: %d\n", value);



char str[] = "Hello\0World";  // 在字符串中使用空字符作为结束标记
printf("The string is: %s\n", str);  // 输出结果为 "Hello"



char ch = '\000';  // 使用八进制表示法的空字符
printf("The character is: %c\n", ch);  // 输出结果为空字符



char ch2 = '\x00';  // 使用十六进制表示法的空字符
printf("The character is: %c\n", ch2);  // 输出结果为空字符



char str2[] = "0";  // 字符串 "0" 包含字符 '0' 和空字符 '\0'
printf("The string is: %s\n", str2);  // 输出结果为 "0"
}
