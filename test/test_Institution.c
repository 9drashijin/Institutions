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
void test_isUniversityCollege_should_compare_and_return_if_Institution_is_the_same_type(){
	int compare;
	Institution Insti[] = {{.type = Unknown},
							{.type = University},
							{.type = UniversityCollege},
							{.type = College}};
							
	InstitutionType type = Unknown;
	InstitutionType type2 = University;
	InstitutionType type3 = UniversityCollege;
	InstitutionType type4 = College;
	
	compare = isUniversityCollege(&Insti[0],&type);
	TEST_ASSERT_EQUAL(1,compare);
	compare = isUniversityCollege(&Insti[1],&type2);
	TEST_ASSERT_EQUAL(1,compare);
	compare = isUniversityCollege(&Insti[2],&type3);
	TEST_ASSERT_EQUAL(1,compare);
	compare = isUniversityCollege(&Insti[3],&type4);
	TEST_ASSERT_EQUAL(1,compare);
}
void test_isUniversityCollege_should_compare_and_return_if_Institution_is_the_different_type(){
	int compare;
	Institution Insti[] = {{.type = Unknown},
							{.type = University},
							{.type = UniversityCollege},
							{.type = College}};
	
	InstitutionType type = College;
	InstitutionType type2 = UniversityCollege;
	InstitutionType type3 = University;
	InstitutionType type4 = Unknown;
	
	compare = isUniversityCollege(&Insti[0],&type);
	TEST_ASSERT_EQUAL(0,compare);
	compare = isUniversityCollege(&Insti[1],&type2);
	TEST_ASSERT_EQUAL(0,compare);
	compare = isUniversityCollege(&Insti[2],&type3);
	TEST_ASSERT_EQUAL(0,compare);
	compare = isUniversityCollege(&Insti[3],&type4);
	TEST_ASSERT_EQUAL(0,compare);
}
void test_Institution_select_should_select_the_institution(){
	
	//Institution institude,institude2;

	LinkedList listIn,listOut;
	
	Institution Insti[] = {{.type = Unknown},
							{.type = University},
							{.type = UniversityCollege},
							{.type = College}};
	char random;
	
	List_removeHead_ExpectAndReturn(&listIn,&Insti[0]);
	List_addTail_Expect(&listOut, &Insti[0]);
	List_removeHead_ExpectAndReturn(&listIn,&Insti[1]);
	List_addTail_Expect(&listOut, &Insti[1]);
	List_removeHead_ExpectAndReturn(&listIn,&Insti[2]);
	List_addTail_Expect(&listOut, &Insti[2]);
	List_removeHead_ExpectAndReturn(&listIn,&Insti[3]);
	List_addTail_Expect(&listOut, &Insti[3]);
	List_removeHead_ExpectAndReturn(&listIn,NULL);
	Institution_select(&listIn,&listOut,&random,isUniversityCollege);
	
}