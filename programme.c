#include <stdio.h>
int main(void){
int num;
printf("ENTER YOUR MARKS");
scanf("%d",&num);
printf(" You entered %d", num);
	if (num>100) printf(" ! Wrong data ");
	else if(num >= 75){
	printf(" GRADE A");
		}
	else if ( num >=65){
		printf(" GRADE B");
		}
	else if ( num >=55){
		printf(" GRADE C");
		}
	else if ( num >=35){
		printf(" GRADE S");
		}
    else if ( num >=0){
        printf(" GRADE F");
        }
    else{
        printf("grade=invaild");
        }
return 0;
}
