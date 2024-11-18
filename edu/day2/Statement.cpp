/********************************************
분기
[if]
 - 조건문이라고도 하며, 프로그램의 실행흐름을 제어하는데 사용
 - 주어진 조건이 참인지 거짓인지에 따라 코드블록을 실행하게 한다.
 - if문의 작성의 제한은 없지만 이왕이면...줄일 수 있도록...
 
 if(조건)
 {
	- 위 조건이 참일 때, 실행되는 코드
	- 조건이 참이면 {}안에 있는 코드가 실행되고, 조건이 거짓이면 해당 블록은 건너뛴다.
 }

 [else]
 else
  - 위에 있는 if가 거짓이면 실행
  - 단독으로 올 수 없다.

 [else if]	
 if(조건1)
 {
	//조건1이 참이면 여기 실행
 }
 else if(조건2)
 {
	//조건2가 참이면 여기 실행
 }
 else
 {
	//모든 조건이 거짓이면 여기 실행
 }

********************************************/


#include<iostream>


int main()
{
	//만약에 소괄호 안에 있는 무언가가 참이라면
	/*if (false)
	{
		//여기를 실행해라.
		std::cout << "여긴 if문 블록 안!" << std::endl;
	}

	std::cout << "if문이 실행안되면 여기가 실행된다." << std::endl;


	//else
	if (false)
	{
		std::cout << "두 번째 if문" << std::endl;
	}
	if (true)
	{
		std::cout << "세 번째 if문" << std::endl;
	}

	else
	{
		//바로 위에 있는 if문이 거짓이면 여기가 실행된다.
		std::cout << "두 번째 if문이 거짓이면 여기가 실행된다." << std::endl;
	}

	else if (true)
	{
		//위에 있는 if문의 조건이 거짓이고 해당 조건을 만족한다면...
	}


	if (true) //첫번째 조건이 참이면
	{
		//여기가 실행
		if (true) //조건이 참이면 실행되는거는 알겠어...
		{
			//여기가 실행이 된다라는건...
			//위에 있는 if문이 동작한다라는 것.
		}
	}
	*/

	
	/*int number;
	std::cout << "=======정수를 입력해볼래?======" << std::endl;

	
	std::cout << "정수를 입력해라 : ";
	std::cin >> number; //내가 입력받고...

	//내가 입력받은 정수가 0보다 크다면
	if (number > 0)
	{
		//여기를 실행해라...
		std::cout << "입력한 수는 양수입니다." << number << std::endl;

	}
	if (number < 0)
	{
		std::cout << "입력한 수는 음수입니다." << std::endl;
	}
	

	std::cout << "=====점수를 입력해보아라=====" << std::endl;

	//점수 입력용
	int score;

	std::cin >> score;
	
	//입력받은 점수가 90점과 같거나 크다면..
	if (score >= 90)
	{
		std::cout << "A학점" << std::endl;
	}
	else if (score >= 80)
	{
		std::cout << "B학점" << std::endl;
	}
	else if (score >= 70)
	{
		std::cout << "C학점" << std::endl;
	}
	else
	{
		std::cout << "F학점! 다시 학교 다녀" << std::endl;
	}
	*/

	//지금 해볼 것.
	//입력을 받는다.(정수를 입력받는다.)

	//3~5 : 봄 출력
	//6~8 : 여름 출력
	//9~11 : 가을 출력
	//그외 : 겨울
	
	//당연히 뭐야? 1~12 이외에 값이 입력되면 잘못된 입력을 했다.

	int month;

	std::cout << "계절을 알려드립니다!" << std::endl;


	std::cin >> month;

	if(month>=1 && month<=12)
	{
		if (month < 3)
		{
			std::cout << "겨울";
		}
		else if (month < 6)
		{
			std::cout << "봄";
		}
		else if (month < 9)
		{
			std::cout << "여름";
		}
		else if (month < 12)
		{
			std::cout << "가을";
		}
		else
		{
			std::cout << "겨울";
		}
	}
	else
	{
		std::cout << "잘못 입력했습니다.";
	}

	//내가 입력한 점수가 유효하고 유효한 점수 내에서 합격이라는 기준이 60점 이상이다.
	//60점 이상에서 학점을 구분한다면...

	int input;

	std::cout << "점수를 입력해라 : ";
	std::cin >> input;

	//유효한 점수냐?

	if (input >= 0 && input <= 100)
	{
		if (input >= 60) //합격을 했구만...
		{
			std::cout << "합격이다!" << std::endl;

			//학점
			if (input >= 90)
			{
				std::cout << "학점 A" << std::endl;
			}
		}
	}


	int inputNum;
	std::cin >> inputNum;

	//입력한 값을 2로 나눈 나머지가 0이라면
	if ((inputNum % 2) == 0) //짝수
	{

	}
	else
	{

	}




}