#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	//改作业的人请注意！这个代码包含两项作业
	
	
	
	//第一项作业是定义不同类型的数据
	
	//第二项作业是探究数据类型的取值范围 
	
	
	//现在我们在定义不同类型数据 
    /* integer definitions */

    // 1. short variable definitions
    // signed short part
    signed short int shNum01 = 999;            // if assign: 65535;
    short int shNum02 = -123;
    short shNum03 = 12345;

    printf("shNum01 = %hd \nshNum02 = %hd \nshNum03 = %hd\n", shNum01, shNum02, shNum03);

    // unsigned short part
    unsigned short int uhNum01 = 101;   // if assign: -1;
    unsigned short uhNum02 = 32767;

    printf("uhNum01 = %hu \nuhNum02 = %hu\n", uhNum01, uhNum02);

    // 2. try int and long int here

	int lNum01 = 66;
	long int lNum02 = 44532;
	long lNum03 = 13245;
	
	printf("lNum01 = %d \nlNum02 = %ld \nlNum03 = %ld",lNum01,lNum02,lNum03);

    // 3. try long long int and unsigned long long int
    signed long long int llNum01 = 87654;
    long long int llNum02 = -92088;
    long long llNum03 = 99999;
    
    printf("llNum01 = %ld \nllNum02 = %ld \nllNum03 = %ld\n",llNum01,llNum02,llNum03);


    // 4. unsigned long long int
    unsigned long long int ullNum01 = 9927099;
    unsigned long long ullNum02 = 5379201;
    
    printf("ullNum01 = %llu \nullNum02 = %llu \n",ullNum01,ullNum02);


    /* float definitions */
 	float fNum01 = -0.839218;
 	
 	printf("fNum01 = %f\n",fNum01);

    /* char definitions */
    char cNum01 = -1;
    unsigned char cNum02 = 66;
    
    printf("cNum01 = %d\ncNum02 = %d\n",cNum01,cNum02);



	//以下我们来探究数据类型取值范围 
	
	printf("\n"); 
	printf("(signed) char: [ %d , %d ]\n",CHAR_MIN,CHAR_MAX);
    printf("(unsigned) char: [ %d, %d ]\n", 0, UCHAR_MAX);
    printf("\n");

    printf("(signed) short: [ %hd, %hd ]\n", SHRT_MIN, SHRT_MAX);
    printf("(unsigned) short: [ %hu, %hu ]\n", 0, USHRT_MAX); // modify for unsigned short
    printf("\n");

    // complete the int value range for signed and unsigned
    
    printf("(signed) int: [ %d , %d ]\n",INT_MIN, INT_MAX);
    printf("(unsigned) int: [ %u, %u ]\n", 0, UINT_MAX);
	printf("\n");

    printf("(signed) long long int: [ %lld, %lld ]\n", LLONG_MIN, LLONG_MAX);
    printf("(unsigned) long long int: [ %llu, %llu ]\n",0ULL, ULLONG_MAX);
    printf("\n");

    printf("float:  [ %e, %e ]\n", FLT_MIN, FLT_MAX);
    //printf("float:  [ %f, %f ]\n", FLT_MIN, FLT_MAX);
    printf("double: [ %e, %e ]\n", DBL_MIN, DBL_MAX);
    //printf("double: [ %f, %f ]\n", DBL_MIN, DBL_MAX);

    printf("long double: [ %Le , %Le ]\n",LDBL_MIN, LDBL_MAX);

    return 0;
}
