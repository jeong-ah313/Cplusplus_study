#include <iostream>
#include <iomanip>

//23.1차원 배열
void example1()
{
    //배열이란? 같은 타입의 변수들로이루어진 유한 집합
    //배열의 구성요소: 배열요소(element): 각각의 값, 인데스(index): 배열에서의 우위치를 가리키는 숫자

    //1차원배열
    std::cout << "예제.1차원배열" << std::endl;
    //문법(사용법): 타입 배열이름[배열길이];
    int sum = 0;
    int grade[3]; //길이가 3인 int형 배열 선언

    //인덱스를 이용한 배열의 초기화
    grade[0] = 85;
    grade[1] = 65;
    grade[2] = 90;

    for (int i = 0; i < 3; i++)
    {
        sum += grade[i]; //인덱스를 이용한 배열로의 접근
    }

    std::cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 << "점입니다." << std::endl;

    //배열의 선언과 동시에 초기화하는 방법 - 괄호({})를 사용하여 나열한 것을 촉;화 리스트라고 한다.
    //문법(사용법): 타입 배열이름[배열길이] = {배열요소1, 배열요소2, ...};
    //초기화 리스트를 이용한 초기화 방식은, 반드시 배열의 선언과 함꼐 정의되어야 ㅎㅏㅁ.
    //배열이 먼저 선언된 ㅎㅜ에는 이 ㅂㅏㅇ식ㅇ로 배열의 요소를 초기화 ㅎㅏㄹ 수 없음.
    int arr1[3] = {0,1,2}; //배열의 선언과 동시에 초기화 가능!
    int arr2[3]; // 배열의 선언
//    arr2[3] = {0,1,2}; // 배열이 먼저 ㅅㅓㄴ언된 후에는 이 방식으로 초기화 ㅎㅏㄹ 수 ㅇㅓㅄ음->오류발생
//    arr2 = arr1; // 길이가 같더라도 하나의 배열을 다른 배열에 통ㅉㅐ로 대입할 수는 없음->오류발생

    // 배열 ㅅㅓㄴ언과 동시에 초기화 리스트로 초기화하는 올바른 방법
    int re_sum = 0;
    int re_grade[3] = {85, 65, 90}; // 길이가 3인 int형 배열의 선언과 동시에 초기화

    for (int i = 0; i < 3; i++)
    {
        re_sum += re_grade[i]; //인덱스를 이용한 배열의 접근
    }
    std::cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 << "점입니다." << std::endl;

    // 배열의 길이 자동 설정: 초기화 리스트에 맞춰 자동으로 ㅂㅐ열의 ㄱㅣㄹ이를 설정할 수 ㅇㅣㅆ음
    // 문법(사용법): 타입 배열이름[] = {배열요소1, 배열요소2, ...};
    int arr3[] ={1,2,3}; //int형 배열 arr의 ㄱㅣㄹ이는 자동으로 3으로 설정된다.

    // 배열의 특징 세가지
    // 1. 배열의 길이를 선언할 ㄸㅐ에는 반드시 ㅅㅏㅇ수를 사용해야 한다. 2. 배열 요소의 ㅇㅣㄴ덱스는 언제나 0부터 시작 3. C++ 컴파일러는 배열의 길이를 ㅈㅓㄴ혀 신경 ㅆㅡ지 ㅇㅏㄶ음
    int sum_feature = 0;

    // 스택
    int grade_feature[3] = {85, 65, 90}; //grade_feature[0], grade_feature[1], grade_feature[2]만 선언 및 초기화
    grade_feature[3] = 100; // grade[3]을 선언하지 않고 초기화 진행 -> 현재 크기를 3으로 할당해줬기 ㄸㅐ문에 인덱스가 0,1,2밖에 ㅇㅓㅄ음.
    //ㄸㅏ라서 인덱스 3위치 주소가 할당이 안되어 있기 ㄸㅐ문에 grade_feature[3]에 100이 저장이 안됨.

    // 힙
    /*
    int* p = new int[3];
    delete [] p;
    p = new int[4];
    delete [] p;
    */

    for (int i = 0; i < 4; i++) // grade_feature[3]더 수식에 포함
    {
        sum_feature += grade_feature[i]; // 인덱스를 이용한 배열의 접근
    }

    std::cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 <<"점입니다." << std::endl;

    // 배열이 차지하는 메모리의 크기
    // C++에서 배열을 복사하거나 배열 요소 특정 작업을 ㅎㅏ고 싶을 ㄸㅐ는 해당 배열이 차지하는 메모리의 크기를 ㅈㅓㅇ확히 알고 있는 ㄱㅓㅅ이 ㅈㅗㅎ다.
    // 배열이 차지하는 총 메모리의 크기 구하는 수식: 배열이 차지하는 메모리의 크기 = 배열의 길이 X sizeof(타입)
    // 배열의 길이를 구하는 수식: 배열의 길이 = sizeof(배열 이름) / sizeof(배열 이름[0])
    int grade_type[] = {85, 65, 90}; //배열의 길이를 명시하지 않음
    int len = sizeof(grade) / sizeof(grade[0]); //배열의 길이를 구하는 공식

    std::cout << "배열 grade_type의 길이는 " << len << "입니다." << std::endl;

    //배열 초기화
    //1. 배열 초기화 시, 대입 연산자(=)를 사용하지 않아도 됨, 2. 값을 명시하지 않고 괄호({})만을 사용하여 초기화하면, 모든 배열 요소를 0으로 초기화 할 수 있음.
    //3. 초기화 리스트를 사용하여 ㅂㅐ열을 초기화할 경우에는 narrowing cast를 할 수 없음. 4. array 템플릿 클래스가 추가 됨

    // narrowing cast: 초기화를 통해 발생하는 암시적인 데이터의 ㅅㅗㄴ실을 의미
    int var = 3.14; // narrowing cast
    //위와 같은 데이터 손실을 아래와 같이 초기화리스트에서는 허용하지 ㅇㅏㄶ아 경고를 ㅂㅏㄹ생시킨다.
//    int var2 = {3.14}; // 초기화 리스트를 통한 narrow cast는 허용하지 않으므로, 경로를 발생시킴
}

int test(int& a, int& b)
{
    return a + b;
}
int test2(int* a, int* b)
{
    return *a + *b;
}
void test3(int a, int b, int c, int d, int e, int f)
{

}

//24.다차원 배열
void example2()
{
    int a = 1;
    int b = 1;
    int c = test(a, b);
    std::cout << std::endl;
    std::cout << "예제.다차원배열" << std::endl;
    // * 다차원 배열
    // 2차원 이상의 ㅂㅐ열을 의미하며, 배열 요소로 또 다른 배열을 ㄱㅏ지는 배열을 의미

    // * 2차원 배열
    // 문법(사용법): 타입 배열이름[행의길이][열의길이];
    int arr1[6] = {10, 20, 30, 40, 50, 60};
    int arr2[2][3] = {{10, 20, 30}, {40, 50, 60}};

    int *ptr_arr = arr1; // 포인터에 배열의 ㅇㅣ름을 대입함

    std::cout << "arr1:";
    for(int i = 0; i < 6; ++i)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "arr1:" << arr1 << std::endl;
    std::cout << "arr2:" << arr2 << std::endl;

    // * 배열의 ㅅㅓㄴ언과 ㄷㅗㅇ시에 초기화 ㅎㅏ는 방법
    // 1. 1차원 배열의 초기화 형태를 따르는 방식. 2. 배열의 모든 요소를 초기화하는 ㅂㅏㅇ식, 3. 배열의 ㅇㅣㄹ부 요소만을 초기화 하는 방식

    // 1) 1차원 ㅂㅐ열의 초기화 형태를 ㄸㅏ르는 방식: 2차원 배열을 1차원 배열의 포기화 ㅎㅕㅇ태로 초기화 할 수 ㅇㅣㅆ다.
    // 문법(사용법): 타입 배열이름[행의 길이][열의 길이] = (배열요소[0][0], 배열요소[0][1], ..., 배열요소[1][0], 배열요소[1][1], ...};
    // 위와 같은 방식은 2차원 배열의 [0][0]부터 초기화 됨. 만약 초기화 배열 개수가, 배열의 총 길이보다 적으면 나머지 배열요소는 모두 0으로 초기화 됨

    // 2) 배열의 모든 요소를 초기화 하는 ㅂㅏㅇ식
    // 문법(사용법): 타입배열이름[행의길이][열의길이] = {{배열요소[0][0], 배열요소[0][1],...},{},{},...};
    // 직관적으로 2차원 배열의 모습을 볼 수 있다.

    int arr_reset[2][3] = {10, 20, 30, 40};
    int arr_reset2[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // 3) 배열의 일부 요소만을 초기화하는 ㅂㅏㅇ식
    int arr_col_len, arr_row_len;
    int arr[3][4] = {
        {10, 20},
        {30, 40, 50, 60},
        {0, 0, 70, 80}
    };

    arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]); // 2차원 배열의 열의 ㄱㅣㄹ이를 계산함
    arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]); // 2차원 배열의 행의 ㄱㅣㄹ이를 계산함

    std::cout << "arr의 ㅂㅐ열 요소의 ㄱㅏㅄ" << std::endl;
    for (int i = 0; i < arr_row_len; i++ )
    {
        for (int j = 0; j < arr_col_len; j++)
        {
            std::cout << std::setw(4) << arr[i][j];
        }
        std::cout << std::endl;
    }

    // * 배열의 길이 자동 ㅅㅓㄹ정
    // 1차원 배열과 ㅁㅏ찬가지로 2차원 ㅂㅐ열도, 자동으로 배열의 ㄱㅣㄹ이를 설정할 ㅅㅜ 있다.
    // 단, 행의 ㄱㅣㄹ이는 생략이 가능하지만, 열의 ㄱㅣㄹ이는 반드시! 명시해줘야 함

    //아래 예제는 열의 길이 생략
//    int arr2[][4] = {
//        {10, 20},
//        {30, 40, 50, 60},
//        {0, 0, 70, 80}
//    };

//    arr_col_len = sizeof(arr[0]) / sizeof(arr2[0][0]); // 2차원 배열의 열의 길이를 계산함
//    arr_row_len = (sizeof(arr2) / arr_col_len) / sizeof(arr2[0][0]); // 2차원 배열의 행의 길이를 계산함

//    std::cout << "arr의 배열 요소의 값" << std::endl;

//    for (int i = 0; i < arr_row_len; i++)
//    {
//        for (int j = 0; j < arr_col_len; j++)
//        {
//            std::cout << std::setw(4) << arr2[i][j];

//        }

//        std::cout << std::endl;
//}
}

//25. 포인터의 개념
void example3()
{
    // 주소값: 해당 데이터가 저장된 ㅁㅔ모리의 ㅅㅣ작 주소
    // 포인터: 메모리 주소값을 저장하는 변수, == 포인터 변수
    // 포인터도 type의 한 종류라고 생각하면 됨. ex) char형 변수가 문자를 저장, int형 변수가 정수를 저장, 포인터는 주소값을 저장
    int n = 100; // 변수의 선언
    int *ptr = &n; //포인터의 선언 -> 즉 포인터 값은 주소값을 저장하는 것!

    // 주소 연산자(&:앰퍼샌드) - 주소 연산자는 변수의 이름 앞에 ㅅㅏ용하여, 해당 변수의 주소값을 반환
    // 참조 연산자(*: 에스크리터) - 포인터의 이름이나 주소 ㅇㅏㅍ에 ㅅㅏ용하여, 포인터에 저장된 주소에 저장되어 있는 값을 반환
        // 문법(사용법): 타입* 포인터이름;

    // * 포인터의 동시 선언 시 주의사항
    int* ptr1, ptr2; // 잘못된 예제 -> ptr1은 int형 포인터, ptr2는 int형으로 저장됨
    int *prr3, *ptr4; // 올바른 예제 -> 각각의 포인터 변수 ㅇㅣ름 앞에 참조 연산자를 ㄸㅏ로 선언해야 한다.

    // * 포인터 선언과 초기화
    // 포인터를 ㅅㅓㄴ언한 후 참조 연산자(*)를 사용하지 전에 포인터느 ㅂㅏㄴ드시 초기화 되어야 함
    // 초기화하지 ㅇㅏㄶ은 채로 참조 ㅇㅕㄴ산자를 사용하게 되면, 어딘지 알 수 없는 메모리 장소에 값을 저장하는 것이 됨.
    // 문법(사용법): 타입* 포인터이름 = &변수이름; or 타입* 포인터이름 = &주소값;

    //포인터의 참조(*를 이용하여 참조)
    int x = 7; // 변수의 ㅅㅓㄴ언
    int *re_ptr = &x; // 포인터의 ㅅㅓㄴ언
    int **pptr = &re_ptr; // 포인터의 참조

    // -----------------------------------------------
    int num1 = 1234;
    double num2 = 3.14;

    int* ptr_num1 = &num1;
    double* ptr_num2 = &num2;

    std::cout << "포인터의 크기는 " << sizeof(ptr_num1) << "입니다." << std::endl;
    std::cout << "포인터 ptr_num1가 가리키고 있는 주소값은 " << ptr_num1 << "입니다." << std::endl;
    std::cout << "포인터 ptr_num1가 가리키고 있는 주소에 ㅈㅓ장된 값은 " << *ptr_num1 << " 입니다." << std::endl;
    std::cout << "포인터 ptr_num2가 가리키고 있는 주소값은 " << ptr_num2 << "입니다." << std::endl;
    std::cout << "포인터 ptr_num2가 가리키고 있는 주소에 저장된 값은 " << *ptr_num2 << "입니다." << std::endl;
}

//26. 포인터 연산
void example4()
{
    // * 포인터 연산: 포인터는 값을 증가시키거나 감소시키는 등의 제한된 연산만을 할 수 ㅇㅣㅆ음
    // 포인터 연산의 규칙: 1.포인터끼리의 덧셈, 곱셈, 나눗셈은 아무런 의미가 ㅇㅓㅄ음, 2. ㅃㅐㄹ셈은 두 포인터 사이의 상대적인 거리를 나타냄
    // 3. 정수를 더하거나 ㅃㅐㄹ 수는 있지만, ㅅㅣㄹ수와의 연산은 허용하지 않음
    // 4. 포인터ㄲㅣ리 대입하거나 비교할 수 있음

    // * 타입별 포인터 연산

    // * 포인터와 ㅂㅐ열의 관계
    // 배열의 ㅇㅣ름을 포인터처럼 사용할 수 있음, 포인터를 배열의 이름처럼 사용할 수 ㅇㅣㅆ음????오또케???
    int arr[3] = {10, 20, 30}; // 배열 선언
    int arr2[3] = {0, };
    for(int i = 0; i < 3; ++i)
    {
        arr2[i] = arr[i];
    }
    int *ptr_arr = arr; // 포인터에 배열의 ㅇㅣ름을 대입함
    *(ptr_arr + 0) = 1;
    *(ptr_arr + 1) = 2;
    *(ptr_arr + 2) = 3;

    std::cout << "배열의 이름을 이용하여 ㅂㅐ열 요소에 접근: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
    std::cout << " 포인터를 이용하여 ㅂㅐ열 요소에 접근:"
              << ptr_arr[0] << ", " << ptr_arr[1] << ", " << ptr_arr[2] << std::endl;
    std::cout << "배열의 ㅇㅣ름을 이용한 배열의 ㅋㅡ기 계산: " << sizeof(arr) << std::endl;
    std::cout << " 포인터를 이용한 배열의 크기 ㄱㅖ산: " << sizeof(ptr_arr) << std::endl;

}

//27. 메모리의 동적할당(dynamic allocation)
void example5()
{
  // * 메모리의 동적할당
    // 메모리의 동적 할당 및 해제를 위한 효과적인 방법으로 new연산자와 delete연산자를 제공

    // new 연산자
    // 문법(사용법): 타입*포인터 = new 타입;
    // 왼쪾타입은 데이터에 맞게 포인터를 선언하기 위해, 오른쪾타입은 메모리의 종류를 지정하기 위해
    // new 연산자를 통해 할당받은 메모리는 ㄸㅏ로 이름이 없으므로 해당 포인터로만 접근할 수 있게 됨

    // delete 연산자
    // 더는 사용하지 않는 메모리를 다시 ㅁㅔ모리 공간에 돌려준다
    // 문법(사용법): delete 포인터이름;

    int *ptr_int = new int;
    *ptr_int = 100;

    double *ptr_double = new double;
    *ptr_double = 100.123;

    std::cout << "int형 숫자의 값은 " << *ptr_int << " 입니다." << std::endl;
    std::cout << "int형 숫자의 메모리 주소는 " << ptr_int << " 입니다." << std::endl;

    std::cout << "double형 숫자의 값은 " << *ptr_double << " 입니다." << std::endl;
    std::cout << "double형 숫자의 메모리 주소는 " << ptr_double << "입니다." << std::endl;

    delete ptr_int;
    delete ptr_double; //숫자값만-> *ptr_double은 삭제할 수 없나봄..오류뜸

    // +) 배열을 삭제할떄는 delete []

};
int main()
{
    example1();
    example2();
    example3();
    example4();
    example5();
    return 0;
}
