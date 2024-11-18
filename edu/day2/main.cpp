/***************************************************
연산자(operator)
 1.산술연산자(+, -, *, /, %)
 ㄴ + : 두 값을 더한다. a+b
 ㄴ - : 두 값에서 하나의 값을 뺀다. a-b
 ㄴ * : 두 값을 곱한다. a*b (나눗셈보다 곱하기가 빠르나 속도적인 면에서 무의미함)
 ㄴ / : 첫번째 값을 두번째 값으로 나눈다. a/b
 ㄴ % : 나머지 연산. 첫번째 값을 두번째 값으로 나눈 후, 나머지를 반환. a%b

 2.증감연산자(++, --)
 ㄴ 증감연산자는 ++, --기호를 이용하는 연산자로 피연산자의 값을 1증가 또는 1감소 시킨다.
 ㄴ ++a : 선 증가 후 연산(먼저 증가 후, 그 다음 연산)
 ㄴ a++ : 선 연산 후 증가(먼저 연산 후, 그 다음 증가)
 ㄴ --a : 선 감소 후 연산(먼저 감소 후, 그 다음 연산)
 ㄴ a-- : 선 연산 후 감소(먼저 연산 후, 그 다음 감소)
  - 전위 연산과 후위 연산
   ㄴ증감연산자의 위치가 변수의 앞에 위치하면 전위방식, 뒤에 위치하면 후위방식
  
  - 증감연산자를 잘 이용하면 코드를 간결하게 만들 수 있다.
  
  ex)
  num++ : 연산자 한 개 호출
  num = num + 1 : 연산자 두 개 호출

 3.관계연산자(>, <, >=, <=, ==, !=)
 ㄴ a > b =====> 피연산자 a가 피연산자 b보다 크다.
 ㄴ a < b =====> 피연산자 a가 피연산자 b보다 작다.
 ㄴ a >= b ====> 피연산자 a가 피연산자 b와 같거나 크다.
 ㄴ a <= b ====> 피연산자 a가 피연산자 b와 같거나 작다.
 ㄴ a == b ====> 피연산자 a가 피연산자 b와 같다.
 ㄴ a != b ====> 피연산자 a가 피연산자 b와 같지 않다.

 4.논리연산자(&&, ||, !)
 ㄴ &&(and) : 연산자의 결과는 피연산자가 모두 참일 경우 참(true)

 피연산자			연산자			피연산자		결과
    0				  &&			    0			 0
	0				  &&				1			 0
	1				  &&				0			 0
	1				  &&				1			 1


 ㄴ ||(or)  : 연산자의 결과는 피연산자 둘 중 하나가 참이면 참(true)
  
  피연산자			연산자			피연산자		결과
    0				  ||			    0			 0
	0				  ||				1			 1
	1				  ||				0			 1
	1				  ||				1			 1
 

 ㄴ ! : 연산자의 결과는 피연산자가 참이면 거짓이고, 거짓이면 참

 5.비트연산자(&, |, ^, ~, <<, >>)
  - 비트연산자는 데이터를 비트 단위로 처리하는 연산자. 하드웨어랑 밀접하게 관련된 각종 처리를 쉽게 해준다.
  - 메모리 공간을 줄여서 성능을 높여준다.
  - 컴퓨터는 0, 1로 처리한다.

 **비트는 2진수 값 하나(0 또는 1)를 저장할 수 있는 최소 메모리 공간을 의미.
  - 1bit로 표현할 수 있는 데이터 수는 1과 0이다.
  - 2bit는 00, 01, 10, 11로 4가지.. 3bit는 8개
  - 1byte는 8bit 256개의 경우를 표현할 수 있는 저장용량을 가진다.

 **2진수, 10진수, 16진수, 8진수
  - 2진수  : 0, 1을 사용
  - 10진수 : 0 ~ 9까지의 숫자를 사용
  - 16진수 : 0 ~ 9까지의 숫자와 9이후부터 a, b, c, d, e, f문자를 사용
  ㄴ16진수에서 a는 정수 10, b는 11...f는 15를 의미
  - 8진수 : 0 ~ 7까지의 숫자를 사용


  종류				연산식
   &				a & b		//비트단위 AND 연산		     -> 두 개의 비트가 모두 1일 때 1을 반환
   |				a | b		//비트단위 OR 연산		     -> 두 개의 비트 중의 하나가 1일 때 1을 반환
   ^				a ^ b		//비트단위 XOR 연산		     -> 두 개의 비트가 서로 같지 않을 경우 1을 반환
   ~				 ~a			//비트단위 NOT 연산		     -> 보수연산이라고도 하며, 비트를 반전시킴
   <<				a << 3		//왼쪽으로 비트를 3칸 이동   -> 비트를 이동시킴
   >>				a >> 1		//오른쪽으로 비트를 1칸 이동 -> 비트를 이동시킴
   
   **비트를 왼쪽으로 1칸 이동시 2배 증가, 오른쪽으로 1칸 이동시 1/2로 감소


 6.복합대입연산자
 +=					a += b				//a = a + b
 -=					a -= b				//a = a - b
 *=
 /=
 %=
 &=
 |=
 ^=
 <<=
 >>=


 7.조건연산자(삼항연산자)
  - 연산자가 두 개(?, :)와 피연산자 세 개로 이루어지는 삼항연산자. //엑셀 if()와 똑같은 방식
  - 가독성을 위해 중첩 사용은 지양.
  
  조건식 ? 식1 : 식2

***************************************************/

#include<iostream>

int main(void)
{
	//void : 공란과 같은 의미
	//여기에 작성할 코드가 들어감
	std::cout << "오늘은 연산자를 해볼꺼야~" << std::endl;
	
	//산술연산자
	int a = 10;
	int b = 3;
	std::cout << "====== 산술연산자 ======" << std::endl;
	std::cout << 1 + 2 << std::endl;
	std::cout << a + b << std::endl; //13
	std::cout << a - b << std::endl; //7
	std::cout << a * b << std::endl; //30
	std::cout << a / b << std::endl; //3
	std::cout << a % b << std::endl; //1

	std::cout << std::endl;

	//증감연산자
	std::cout << "====== 증감연산자 ======" << std::endl;
	int num = 10;

	std::cout << "변수 num에 저장되어 있는 값 : " << num << std::endl; //10
	num++; //num = num + 1
	std::cout << "num++ 후 num에 저장되어 있는 값 : " << num << std::endl; //11
	++num;
	std::cout << "++num 후 num에 저장되어 있는 값 : " << num << std::endl; //12
	num--;
	std::cout << "num-- 후 num에 저장되어 있는 값 : " << num << std::endl; //11
	--num;
	std::cout << "--num 후 num에 저장되어 있는 값 : " << num << std::endl; //10

	int num1 = 10;
	int num2 = 20;

	int c;
	int d;

	c = ++num1; //전위 방식, 선 증가 후 연산

	std::cout << "변수 c의 값 : " << c << " , " << "변수 num1의 값 : " << num1 << std::endl; //11, 11

	d = num2++; //후위 방식, 선 연산 후 증가(num2에 저장되어 있는 20을 먼저 대입하고 증가)

	std::cout << "변수 d의 값 : " << d << " , " << "변수 num2의 값 : " << num2 << std::endl; //20, 21

	//관계연산자

	int num3 = 1;
	int num4 = 2;
	std::cout << "====== 관계연산자 ======" << std::endl;

	int result;
	int result1;
	int result2;
	int result3;

	result = (num3 > num4); //num3이 num4보다 크냐? (1 > 2)
	result1 = (num3 <= num4); //num3이 num4보다 같거나 작냐?
	result2 = (num3 == num4); //num3이 num4와 같냐?
	result3 = (num3 != num4); //num3이 num4와 다르냐?

	std::cout << "result변수에 저장된 값 : " << result << std::endl; //0(거짓)
	std::cout << "result1변수에 저장된 값 : " << result1 << std::endl; //1(참)
	std::cout << "result2변수에 저장된 값 : " << result2 << std::endl; //0
	std::cout << "result3변수에 저장된 값 : " << result3 << std::endl; //1


	//논리연산자

	int num5 = 3;
	int num6 = 5;
	std::cout << "====== 논리연산자 ======" << std::endl;

	int result4;
	int result5;
	int result6;

	//1. (num5 > 0) true, (num6 < 10) true
	result4 = (num5 > 0) && (num6 < 10);


	//2. (num5 <= 2) false, (num6 > 5) false
	result5 = (num5 <= 2) || (num6 > 5);
	

	//3 0이외의 숫자는 참이므로..
	result6 = !num6;

	std::cout << "result4에 저장된 값 : " << result4 << std::endl; //1
	std::cout << "result5에 저장된 값 : " << result5 << std::endl; //2
	std::cout << "result6에 저장된 값 : " << result6 << std::endl; //0


	std::cout << "====== 비트연산자 ======" << std::endl;

	int bitNum1 = 20;
	int bitNum2 = 16;

	int bitRes = bitNum1 & bitNum2;
	int bitRes1 = bitNum1 | bitNum2;


	std::cout << "& 결과 : " << bitRes << std::endl; //16
	std::cout << "| 결과 : " << bitRes1 << std::endl; //20

	
	int shiftNum = 10;
	int shiftRes = shiftNum << 2;
	std::cout << " << 결과 : " << shiftRes << std::endl; //40

	shiftRes = shiftRes >> 1;
	std::cout << " >> 결과 : " << shiftRes << std::endl; //20

	shiftRes = ~shiftRes;
	std::cout << " ~ 결과 : " << shiftRes << std::endl; //-21


	int x;
	int y;

	x = 5;
	y = 3;

	x += y; //x = x + y;
	std::cout << x << std::endl;




	int number = 2;
	int number1 = 3;

	int numberResult;

	numberResult = (number > number1) ? number : number1;

	std::cout << "numberResult의 결과 : " << numberResult;



	return 0;


}


//void main() { //표준이 아님

