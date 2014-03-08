#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"




void setUp(){}

void tearDown(){}

void test_Institution_reverse_should_reverse_the_institude_with_2_different_institution(){

 Institution institude,institude2;



 LinkedList listIn,listOut;





 List_removeHead_CMockExpectAndReturn(26, &listIn, &institude);

 Stack_push_CMockExpect(27, &stack, &institude);

 List_removeHead_CMockExpectAndReturn(28, &listIn, &institude2);

 Stack_push_CMockExpect(29, &stack, &institude2);



 List_removeHead_CMockExpectAndReturn(31, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(33, &stack, &institude2);

 List_addTail_CMockExpect(34, &listOut, &institude2);

 Stack_pop_CMockExpectAndReturn(35, &stack, &institude);

 List_addTail_CMockExpect(36, &listOut, &institude);



 Institution_reverse(&listIn,&listOut);







}



void test_Institution_reverse_should_reverse_the_institude_with_3_different_institution(){

 Institution institude,institude2,institude3;



 LinkedList listIn,listOut;





 List_removeHead_CMockExpectAndReturn(50, &listIn, &institude);

 Stack_push_CMockExpect(51, &stack, &institude);

 List_removeHead_CMockExpectAndReturn(52, &listIn, &institude2);

 Stack_push_CMockExpect(53, &stack, &institude2);

 List_removeHead_CMockExpectAndReturn(54, &listIn, &institude3);

 Stack_push_CMockExpect(55, &stack, &institude3);



 List_removeHead_CMockExpectAndReturn(57, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(59, &stack, &institude3);

 List_addTail_CMockExpect(60, &listOut, &institude3);

 Stack_pop_CMockExpectAndReturn(61, &stack, &institude2);

 List_addTail_CMockExpect(62, &listOut, &institude2);

 Stack_pop_CMockExpectAndReturn(63, &stack, &institude);

 List_addTail_CMockExpect(64, &listOut, &institude);



 Institution_reverse(&listIn,&listOut);



}
