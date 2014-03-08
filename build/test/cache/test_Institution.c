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

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)82, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)88, UNITY_DISPLAY_STYLE_INT);

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

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)103, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)107, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)109, UNITY_DISPLAY_STYLE_INT);

}

void test_Institution_select_should_select_the_institution(){







 LinkedList listIn,listOut;



 Institution Insti[] = {{.type = Unknown},

       {.type = University},

       {.type = UniversityCollege},

       {.type = College}};

 char random;



 List_removeHead_CMockExpectAndReturn(123, &listIn, &Insti[0]);

 List_addTail_CMockExpect(124, &listOut, &Insti[0]);

 List_removeHead_CMockExpectAndReturn(125, &listIn, &Insti[1]);

 List_addTail_CMockExpect(126, &listOut, &Insti[1]);

 List_removeHead_CMockExpectAndReturn(127, &listIn, &Insti[2]);

 List_addTail_CMockExpect(128, &listOut, &Insti[2]);

 List_removeHead_CMockExpectAndReturn(129, &listIn, &Insti[3]);

 List_addTail_CMockExpect(130, &listOut, &Insti[3]);

 List_removeHead_CMockExpectAndReturn(131, &listIn, ((void *)0));

 Institution_select(&listIn,&listOut,&random,isUniversityCollege);



}

void test_Established_Year_should_compare_and_return_1_if_the_year_is_the_same(){

 int compare;

 Institution Insti[] = {{.type = Unknown, .yearEstablished = 1000},

       {.type = University, .yearEstablished = 2000},

       {.type = UniversityCollege, .yearEstablished = 3000},

       {.type = College, .yearEstablished = 4000 }};



 InstitutionType type = Unknown;

 InstitutionType type2 = University;

 InstitutionType type3 = UniversityCollege;

 InstitutionType type4 = College;



 InstitutionType year = 1000;

 InstitutionType year2 = 2000;

 InstitutionType year3 = 3000;

 InstitutionType year4 = 4000;



 compare = isUniversityCollege(&Insti[0],&type);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)153, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)155, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)157, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)159, UNITY_DISPLAY_STYLE_INT);



 compare = wasEstablishedBefore(&Insti[0],&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)162, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[1],&year2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)164, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[2],&year3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)166, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[3],&year4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)168, UNITY_DISPLAY_STYLE_INT);

}

void test_Established_Year_should_compare_and_return_0_if_the_year_is_the_different(){

 int compare;

 Institution Insti[] = {{.type = Unknown, .yearEstablished = 1000},

       {.type = University, .yearEstablished = 2000},

       {.type = UniversityCollege, .yearEstablished = 3000},

       {.type = College, .yearEstablished = 4000 }};



 InstitutionType type = Unknown;

 InstitutionType type2 = University;

 InstitutionType type3 = UniversityCollege;

 InstitutionType type4 = College;



 InstitutionType year = 1234;

 InstitutionType year2 = 2345;

 InstitutionType year3 = 3456;

 InstitutionType year4 = 4567;



 compare = isUniversityCollege(&Insti[0],&type);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)188, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[1],&type2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)190, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[2],&type3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)192, UNITY_DISPLAY_STYLE_INT);

 compare = isUniversityCollege(&Insti[3],&type4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)194, UNITY_DISPLAY_STYLE_INT);



 compare = wasEstablishedBefore(&Insti[0],&year);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)197, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[1],&year2);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)199, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[2],&year3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)201, UNITY_DISPLAY_STYLE_INT);

 compare = wasEstablishedBefore(&Insti[3],&year4);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((compare)), (((void *)0)), (_U_UINT)203, UNITY_DISPLAY_STYLE_INT);

}
