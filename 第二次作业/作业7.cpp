//exercise 2.19 示例
#include <stdio.h>
int main( ){
int number1; 
int number2;  
int number3; // third integer read from user
int smallest; // smallest integer read from user
int largest; //largest integer read from user
printf("Input three different integers:"); // prompt
scanf("%d %d %d",&number1,&number2,&number3); // read three integers
largest=number1; // assume first integer is largest
if(number2<largest) // is number2 larger?
largest = number2; // number2 is now the largest
if(number3<largest) // is number3 larger?
largest=number3; // number3 is now the largest
smallest=number1; // assume first integer is smallest
if(number2>smallest) // is number2 smaller?
smallest=number2; // number2 now the smallest
if(number3>smallest) // is number3 smaller?
smallest=number3; // number3 now the smallest


printf("Sum is %d\n", number1 + number2 + number3);
printf("Average is %.2f\n", 1.0*(number1 + number2 + number3)/3); // 需要保留2位有效小数点
printf("Product is %d\n", number1 * number2 * number3);
printf("Smallest is %d\n", smallest);
printf("Largest is %d\n", largest);

return 0;
}
