#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "Calculator1.h"
void testcase(void)
{printf("commited by tarun");
 printf("commited by SAI DATTATHREYA");
    assert(calc_1(12,11,1)== 23);
 printf("\nOK");
  assert(calc_1(19,-12,1)== 7);
 printf("commited by vamsi")
 printf("\nOK");
 assert(calc_1(-12,-23,1)== -35);
 printf("\nOK");
 assert(calc_1(12,2,2)== 10);
 printf("\nOK");
 assert(calc_1(15,-3,2)== 18);
 printf("\nOK");
 assert(calc_1(-20,-40,2)== 20);
 printf("\nOK");
 assert(calc_1(3,0,4)== 0);
 printf("\n ok");
}
void main(void){
 printf("Testing Calculator using assert :");

testcase();

}
