#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "Calculator1.h"
void testcase(void)
{
    assert(calculator(41,42,1)== 83);
 printf("\nexecuted,OK");

  assert(calculator(5,-4,1)== 1);
 printf("\nexecuted,OK");

 assert(calculator(-32,-2,1)== -34);
 printf("\nexecuted,OK");

 assert(calculator(12,10,2)== 2);
 printf("\nexecuted,OK");

 assert(calculator(5,10,2)== -5);
 printf("\nexecuted,OK");

 assert(calculator(-12,-34,2)== 22);
 printf("\nexecuted,OK");

 assert(calculator(12,3,4)== 8);
 printf("\nexecuted,OK");
}
void main(void){
 printf("calculator testing with assert function :");

testcase();

}
