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



 List_removeHead_CMockExpectAndReturn(49, &listIn, &institude);

 Stack_push_CMockExpect(50, &stack, &institude);

 List_removeHead_CMockExpectAndReturn(51, &listIn, &institude2);

 Stack_push_CMockExpect(52, &stack, &institude2);

 List_removeHead_CMockExpectAndReturn(53, &listIn, &institude3);

 Stack_push_CMockExpect(54, &stack, &institude3);



 List_removeHead_CMockExpectAndReturn(56, &listIn, ((void *)0));



 Stack_pop_CMockExpectAndReturn(58, &stack, &institude3);

 List_addTail_CMockExpect(59, &listOut, &institude3);

 Stack_pop_CMockExpectAndReturn(60, &stack, &institude2);

 List_addTail_CMockExpect(61, &listOut, &institude2);

 Stack_pop_CMockExpectAndReturn(62, &stack, &institude);

 List_addTail_CMockExpect(63, &listOut, &institude);



 Institution_reverse(&listIn,&listOut);



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

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)87, UNITY_DISPLAY_STYLE_INT);

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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)102, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)104, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)106, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)108, UNITY_DISPLAY_STYLE_INT);

}

void test_Institution_select_should_select_the_institution(){



 LinkedList listIn,listOut;



 Institution Insti[] = {{.type = Unknown},

       {.type = University},

       {.type = UniversityCollege},

       {.type = College}};

 char random;



 List_removeHead_CMockExpectAndReturn(120, &listIn, &Insti[0]);

 List_addTail_CMockExpect(121, &listOut, &Insti[0]);

 List_removeHead_CMockExpectAndReturn(122, &listIn, &Insti[1]);

 List_addTail_CMockExpect(123, &listOut, &Insti[1]);

 List_removeHead_CMockExpectAndReturn(124, &listIn, &Insti[2]);

 List_addTail_CMockExpect(125, &listOut, &Insti[2]);

 List_removeHead_CMockExpectAndReturn(126, &listIn, &Insti[3]);

 List_addTail_CMockExpect(127, &listOut, &Insti[3]);

 List_removeHead_CMockExpectAndReturn(128, &listIn, ((void *)0));

 Institution_select(&listIn,&listOut,&random,isUniversityCollege);



}

void test_Established_Year_should_compare_and_return_1_if_the_year_is_the_same(){

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

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)145, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[1],&year2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)147, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[2],&year3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)149, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[3],&year4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)151, UNITY_DISPLAY_STYLE_INT);

}

void test_Established_Year_should_compare_and_return_0_if_the_year_is_the_different(){

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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)166, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[1],&year2);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[2],&year3);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)170, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[3],&year4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)172, UNITY_DISPLAY_STYLE_INT);

}

void test_Institution_select_should_select_the_institution_year(){



 LinkedList listIn,listOut;



 Institution Insti[] = {{.type = Unknown, .yearEstablished = 1000},

       {.type = University, .yearEstablished = 2000},

       {.type = UniversityCollege, .yearEstablished = 3000},

       {.type = College, .yearEstablished = 4000 }};

 char random;



 List_removeHead_CMockExpectAndReturn(184, &listIn, &Insti[0]);

 List_addTail_CMockExpect(185, &listOut, &Insti[0]);

 List_removeHead_CMockExpectAndReturn(186, &listIn, &Insti[1]);

 List_addTail_CMockExpect(187, &listOut, &Insti[1]);

 List_removeHead_CMockExpectAndReturn(188, &listIn, &Insti[2]);

 List_addTail_CMockExpect(189, &listOut, &Insti[2]);

 List_removeHead_CMockExpectAndReturn(190, &listIn, &Insti[3]);

 List_addTail_CMockExpect(191, &listOut, &Insti[3]);

 List_removeHead_CMockExpectAndReturn(192, &listIn, ((void *)0));

 Institution_select(&listIn,&listOut,&random,wasEstablishedBefore);



}
