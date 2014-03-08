#include "unity.h"
#include "Institution.h"
#include "mock_LinkedList.h"
#include "mock_Stack.h"
#include <stdio.h>

void setUp(){}
void tearDown(){}

// void List_addTail(LinkedList *list,void *element);
// void *List_removeHead(LinkedList *list);
// void Stack_push(Stack *stack, void *element);
// void *Stack_pop(Stack *stack);

/**
	Push 1 ,2 ,3 to stack ...then remove its head from element
	Pop  3 ,2 ,1 form stack ... then add its tail to element 
	*/

void test_Institution_reverse_should_reverse_the_institude_with_2_different_institution(){
	Institution institude,institude2;

	LinkedList listIn,listOut;
	//Stack stack;
	
	List_removeHead_ExpectAndReturn(&listIn, &institude);
	Stack_push_Expect(&stack , &institude);
	List_removeHead_ExpectAndReturn(&listIn, &institude2);
	Stack_push_Expect(&stack , &institude2);
	
	List_removeHead_ExpectAndReturn(&listIn, NULL);

	Stack_pop_ExpectAndReturn(&stack, &institude2);
	List_addTail_Expect(&listOut, &institude2);
	Stack_pop_ExpectAndReturn(&stack, &institude);
	List_addTail_Expect(&listOut, &institude);	
	
	Institution_reverse(&listIn,&listOut);

	//TEST_ASSERT_EQUAL(0, Institution_reverse(&listIn, &listOut));
	
}

void test_Institution_reverse_should_reverse_the_institude_with_3_different_institution(){
	Institution institude,institude2,institude3;

	LinkedList listIn,listOut;
	//Stack stack;
	
	List_removeHead_ExpectAndReturn(&listIn, &institude);
	Stack_push_Expect(&stack , &institude);
	List_removeHead_ExpectAndReturn(&listIn, &institude2);
	Stack_push_Expect(&stack , &institude2);
	List_removeHead_ExpectAndReturn(&listIn, &institude3);
	Stack_push_Expect(&stack , &institude3);
	
	List_removeHead_ExpectAndReturn(&listIn, NULL);
	
	Stack_pop_ExpectAndReturn(&stack, &institude3);
	List_addTail_Expect(&listOut, &institude3);
	Stack_pop_ExpectAndReturn(&stack, &institude2);
	List_addTail_Expect(&listOut, &institude2);
	Stack_pop_ExpectAndReturn(&stack, &institude);
	List_addTail_Expect(&listOut, &institude);	
	
	Institution_reverse(&listIn,&listOut);
	
}