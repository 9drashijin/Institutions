#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"
#include "CException.h"






void setUp(){}

void tearDown(){}

void test_Institution_reverse_should_reverse_the_institude_with_2_different_institution(){

 Institution institude,institude2;



 LinkedList listIn,listOut;



 int stackCount;



 List_removeHead_CMockExpectAndReturn(28, &listIn, &institude);

 Stack_push_CMockExpect(29, &stack, &institude);

 List_removeHead_CMockExpectAndReturn(30, &listIn, &institude2);

 Stack_push_CMockExpect(31, &stack, &institude2);



 List_removeHead_CMockExpectAndReturn(33, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(35, &stack, &institude2);

 List_addTail_CMockExpect(36, &listOut, &institude2);

 Stack_pop_CMockExpectAndReturn(37, &stack, &institude);

 List_addTail_CMockExpect(38, &listOut, &institude);



 stackCount = Institution_reverse(&listIn,&listOut);



 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((stackCount)), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);



}



void test_Institution_reverse_should_reverse_the_institude_with_3_different_institution(){

 Institution institude,institude2,institude3;



 LinkedList listIn,listOut;

 int stackCount;



 List_removeHead_CMockExpectAndReturn(52, &listIn, &institude);

 Stack_push_CMockExpect(53, &stack, &institude);

 List_removeHead_CMockExpectAndReturn(54, &listIn, &institude2);

 Stack_push_CMockExpect(55, &stack, &institude2);

 List_removeHead_CMockExpectAndReturn(56, &listIn, &institude3);

 Stack_push_CMockExpect(57, &stack, &institude3);



 List_removeHead_CMockExpectAndReturn(59, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(61, &stack, &institude3);

 List_addTail_CMockExpect(62, &listOut, &institude3);

 Stack_pop_CMockExpectAndReturn(63, &stack, &institude2);

 List_addTail_CMockExpect(64, &listOut, &institude2);

 Stack_pop_CMockExpectAndReturn(65, &stack, &institude);

 List_addTail_CMockExpect(66, &listOut, &institude);



 stackCount = Institution_reverse(&listIn,&listOut);



 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((stackCount)), (((void *)0)), (_U_UINT)70, UNITY_DISPLAY_STYLE_INT);



}

void test_isUniversityCollege_should_compare_and_return_1_if_Institution_is_the_same_type(){

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

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)88, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)90, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)92, UNITY_DISPLAY_STYLE_INT);

}

void test_isUniversityCollege_should_compare_and_return_0_if_Institution_is_the_different_type(){

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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)107, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)109, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)111, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

}

void test_Institution_select_should_select_the_institution(){



 LinkedList listIn,listOut;

 int stackCount;



 Institution Insti[] = {{.type = Unknown},

       {.type = University},

       {.type = UniversityCollege},

       {.type = College}};

 char random;

 InstitutionType type = UniversityCollege;



 List_removeHead_CMockExpectAndReturn(127, &listIn, &Insti[0]);

 Stack_push_CMockExpect(128, &stack, &Insti[0]);

 List_removeHead_CMockExpectAndReturn(129, &listIn, &Insti[1]);

 Stack_push_CMockExpect(130, &stack, &Insti[1]);

 List_removeHead_CMockExpectAndReturn(131, &listIn, &Insti[2]);

 Stack_push_CMockExpect(132, &stack, &Insti[2]);

 List_removeHead_CMockExpectAndReturn(133, &listIn, &Insti[3]);

 Stack_push_CMockExpect(134, &stack, &Insti[3]);



 List_removeHead_CMockExpectAndReturn(136, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(138, &stack, &Insti[0]);

 List_addTail_CMockExpect(139, &listOut, &Insti[0]);

 Stack_pop_CMockExpectAndReturn(140, &stack, &Insti[1]);

 List_addTail_CMockExpect(141, &listOut, &Insti[1]);

 Stack_pop_CMockExpectAndReturn(142, &stack, &Insti[2]);

 List_addTail_CMockExpect(143, &listOut, &Insti[2]);

 Stack_pop_CMockExpectAndReturn(144, &stack, &Insti[3]);

 List_addTail_CMockExpect(145, &listOut, &Insti[3]);



 stackCount = Institution_select(&listIn,&listOut,&random,isUniversityCollege);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((stackCount)), (((void *)0)), (_U_UINT)148, UNITY_DISPLAY_STYLE_INT);

}

void test_wasEstablishedBefore_Year_should_compare_and_return_1_if_the_year_is_the_same(){

 int compare;

 Institution Insti[] = {{.type = Unknown, .yearEstablished = 1000},

       {.type = University, .yearEstablished = 2000},

       {.type = UniversityCollege, .yearEstablished = 3000},

       {.type = College, .yearEstablished = 4000 }};



 InstitutionType year = 1000;

 InstitutionType year2 = 2000;

 InstitutionType year3 = 3000;

 InstitutionType year4 = 4000;



 compare = wasEstablishedBefore(&Insti[0],&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)163, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[1],&year2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)165, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[2],&year3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)167, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[3],&year4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)169, UNITY_DISPLAY_STYLE_INT);

}

void test_wasEstablishedBefore_Year_should_compare_and_return_0_if_the_year_is_the_different(){

 int compare;

 Institution Insti[] = {{.type = Unknown, .yearEstablished = 1000},

       {.type = University, .yearEstablished = 2000},

       {.type = UniversityCollege, .yearEstablished = 3000},

       {.type = College, .yearEstablished = 4000 }};



 InstitutionType year = 1234;

 InstitutionType year2 = 2345;

 InstitutionType year3 = 3456;

 InstitutionType year4 = 4567;



 compare = wasEstablishedBefore(&Insti[0],&year);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)184, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[1],&year2);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)186, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[2],&year3);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)188, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[3],&year4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)190, UNITY_DISPLAY_STYLE_INT);

}

void test_Institution_select_should_select_the_institution_year(){



 LinkedList listIn,listOut;

 int stackCount;



 Institution Insti[] = {{.type = Unknown, .yearEstablished = 1000},

       {.type = University, .yearEstablished = 2000},

       {.type = UniversityCollege, .yearEstablished = 3000},

       {.type = College, .yearEstablished = 4000 }};

 char random;

 InstitutionType type = UniversityCollege;



 List_removeHead_CMockExpectAndReturn(204, &listIn, &Insti[0]);

 Stack_push_CMockExpect(205, &stack, &Insti[0]);

 List_removeHead_CMockExpectAndReturn(206, &listIn, &Insti[1]);

 Stack_push_CMockExpect(207, &stack, &Insti[1]);

 List_removeHead_CMockExpectAndReturn(208, &listIn, &Insti[2]);

 Stack_push_CMockExpect(209, &stack, &Insti[2]);

 List_removeHead_CMockExpectAndReturn(210, &listIn, &Insti[3]);

 Stack_push_CMockExpect(211, &stack, &Insti[3]);



 List_removeHead_CMockExpectAndReturn(213, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(215, &stack, &Insti[0]);

 List_addTail_CMockExpect(216, &listOut, &Insti[0]);

 Stack_pop_CMockExpectAndReturn(217, &stack, &Insti[1]);

 List_addTail_CMockExpect(218, &listOut, &Insti[1]);

 Stack_pop_CMockExpectAndReturn(219, &stack, &Insti[2]);

 List_addTail_CMockExpect(220, &listOut, &Insti[2]);

 Stack_pop_CMockExpectAndReturn(221, &stack, &Insti[3]);

 List_addTail_CMockExpect(222, &listOut, &Insti[3]);



 stackCount = Institution_select(&listIn,&listOut,&random,wasEstablishedBefore);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((stackCount)), (((void *)0)), (_U_UINT)225, UNITY_DISPLAY_STYLE_INT);

}

void test_wasEstablishedBefore_should_throw_an_exception_if_the_year_is_greater_than_2014(){

 int CException;

 int compare;

 Institution Insti[] = {{.type = Unknown, .yearEstablished = 1000},

       {.type = University, .yearEstablished = 2000},

       {.type = UniversityCollege, .yearEstablished = 3000},

       {.type = College, .yearEstablished = 4000 }};



 InstitutionType year = 1234;

 InstitutionType year2 = 2345;

 InstitutionType year3 = 3456;

 InstitutionType year4 = 4567;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame){

  compare = wasEstablishedBefore(&Insti[0],&year);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)242, UNITY_DISPLAY_STYLE_INT);

  compare = wasEstablishedBefore(&Insti[1],&year);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)244, UNITY_DISPLAY_STYLE_INT);

  compare = wasEstablishedBefore(&Insti[2],&year);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)246, UNITY_DISPLAY_STYLE_INT);

  compare = wasEstablishedBefore(&Insti[3],&year);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)248, UNITY_DISPLAY_STYLE_INT);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { CException = CExceptionFrames[MY_ID].Exception; CException=CException; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A)){

  printf("ERROR");

  UnityAssertEqualNumber((_U_SINT)((CException)), (_U_SINT)((CException)), (((void *)0)), (_U_UINT)252, UNITY_DISPLAY_STYLE_INT);

 }

}
