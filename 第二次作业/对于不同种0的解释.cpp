#include<stdio.h>
int main(){

int num = 0;
if (num == 0) {
    printf("The number is zero.\n");
}



char digit = '0';
int value = digit - '0';  // ���ַ� '0' ת��Ϊ��Ӧ������ 0
printf("The value is: %d\n", value);



char str[] = "Hello\0World";  // ���ַ�����ʹ�ÿ��ַ���Ϊ�������
printf("The string is: %s\n", str);  // ������Ϊ "Hello"



char ch = '\000';  // ʹ�ð˽��Ʊ�ʾ���Ŀ��ַ�
printf("The character is: %c\n", ch);  // ������Ϊ���ַ�



char ch2 = '\x00';  // ʹ��ʮ�����Ʊ�ʾ���Ŀ��ַ�
printf("The character is: %c\n", ch2);  // ������Ϊ���ַ�



char str2[] = "0";  // �ַ��� "0" �����ַ� '0' �Ϳ��ַ� '\0'
printf("The string is: %s\n", str2);  // ������Ϊ "0"
}
