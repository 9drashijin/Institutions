#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"




void setUp(){}

void tearDown(){}











void test_Institution_reverse_should_reverse_the_institude_with_2_different_institution(){

 Institution institude,institude2;



 LinkedList listIn,listOut;





 List_removeHead_CMockExpectAndReturn(20, &listIn, &institude);

 Stack_push_CMockExpect(21, &stack, &institude);

 List_removeHead_CMockExpectAndReturn(22, &listIn, &institude2);

 Stack_push_CMockExpect(23, &stack, &institude2);



 List_removeHead_CMockExpectAndReturn(25, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(27, &stack, &institude2);

 List_addTail_CMockExpect(28, &listOut, &institude2);

 Stack_pop_CMockExpectAndReturn(29, &stack, &institude);

 List_addTail_CMockExpect(30, &listOut, &institude);



 Institution_reverse(&listIn,&listOut);







}



void test_Institution_reverse_should_reverse_the_institude_with_3_different_institution(){

 Institution institude,institude2,institude3;



 LinkedList listIn,listOut;





 List_removeHead_CMockExpectAndReturn(44, &listIn, &institude);

 Stack_push_CMockExpect(45, &stack, &institude);

 List_removeHead_CMockExpectAndReturn(46, &listIn, &institude2);

 Stack_push_CMockExpect(47, &stack, &institude2);

 List_removeHead_CMockExpectAndReturn(48, &listIn, &institude3);

 Stack_push_CMockExpect(49, &stack, &institude3);



 List_removeHead_CMockExpectAndReturn(51, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(53, &stack, &institude3);

 List_addTail_CMockExpect(54, &listOut, &institude3);

 Stack_pop_CMockExpectAndReturn(55, &stack, &institude2);

 List_addTail_CMockExpect(56, &listOut, &institude2);

 Stack_pop_CMockExpectAndReturn(57, &stack, &institude);

 List_addTail_CMockExpect(58, &listOut, &institude);



 Institution_reverse(&listIn,&listOut);



}
