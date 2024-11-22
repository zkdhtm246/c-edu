/*************************************************************************************

string
- C++에서 제공하는 문자열을 다루기 위한 클래스
- C스타일의 문자배열보다 쉽고 안전하고 유용함
- 내부적으로 동적배열을 사용하고 크기를 자동으로 조절
- 문자열 비교, 연결, 부분 문자열 추출, 검색, 수정 등 다양한 연산을 지원
- 메모리를 동적으로 관리하기 때문에, 대규모 문자열 작업에서 메모리 오버헤드 될 수 있다
- 크기 변경이 자주 발생하는 경우, 재할당 비용으로 인해 성능저하가 있을 수 있다
- 문자열이 짧으면 동적 메모리 할당을 피하고 스택에 저장하여 최적화함(SSO -> Small String Optimization)

*************************************************************************************/

#include<iostream>

int main() {
	std::string str = "Hello";
	std::string name = "World";
	std::string result;

	//1. 문자열 길이 계산
	std::cout << "str의 길이: " << str.length() << std::endl;
	std::cout << "name의 길이 : " << name.size() << std::endl;
	
	//2. 문자열 연결
	result = str + ", " + name + "!";
	std::cout << "연결 : " << result << std::endl;

	//3. 부분 문자열 추출 : 특정 위치에서 지정된 길이만큼 부분 문자열을 추출
	std::string sub = result.substr(0, 5);
	std::cout << "부분 문자열 : " << sub << std::endl;

	//4. 문자열 바꾸기?
	//문자열의 특정 부분을 다른 문자열로...
	result.replace(0, 2, "Hi"); //0번째 위치에서 2개의 문자를 Hi로 바꿈
	std::cout << "수정된 문자열 : " << result << std::endl;

	//

	const char* cstr = result.c_str();
	std::cout << "C스타일로 : " << cstr << std::endl;

	//append : 문자열의 끝에 다른 문자열을 추가
	//insert : 지정한 위치에 문자열을 삽입(위치, 삽입할 문자열)
	//erase : 지정된 위치에서 특정 길이만큼 문자열 삭제(위치, 길이)


	//문자열 뒤집기
	std::string inptut;
	std::cin >> inptut;
	
	std::reverse(inptut.begin(), inptut.end());

	std::cout << inptut << std::endl;


	//문자열 내 특정 문자 개수
	int count = 0;
	char target;
	std::string input1;
	std::cout << "문자열을 입력해라";
	std::cin >> input1;
	std::cout << "찾을 문자를 입력해라";
	std::cin >> target;

	for (int i = 0; i < input1.length(); i++) {
		if (input1[i] == target) {
			count++;
		}
	}

}