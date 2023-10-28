#include <stdio.h>

int main(){
	printf("*********\n"
	       "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   "*********\n" );
	printf("   ***\n"
	       " *     *\n"
		   "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   "*       *\n"
		   " *     *\n"
		   "   ***\n");
	printf("  *\n"
	       " ***\n"
		   "*****\n"
		   "  *\n"
		   "  *\n"
		   "  *\n"
		   "  *\n"
		   "  *\n"
		   "  *\n");
	printf("    *\n"
	       "   *  *\n"
		   "  *    *\n"
		   " *      *\n"
		   "*        *\n"
		   " *      *\n"
		   "  *    *\n"
		   "   *  *\n"
		   "     *\n");
		   
	for(int j = 0; j < 4; j++){
	
		for(int i = 0; i < 8; i++){
			printf("* ");
		}
			printf("\n");
		for(int k = 0; k < 8; k++){
			printf(" *");
		}
			printf("\n");
	
	}
}

