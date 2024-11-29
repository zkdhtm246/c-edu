#include<iostream>
#include<unordered_map>
using namespace std;

class Student {
public:
	Student(int kor, int eng, int math)
		:m_kor(kor), m_eng(eng), m_math(math) {
		m_avg = (m_kor + m_eng + m_math) / 3;
	}
	bool operator==(const Student& other)const {
		return m_kor == other.m_kor && m_eng == other.m_eng && m_math == other.m_math;
	}
public:
	int m_kor;
	int m_eng;
	int m_math;
	int m_avg;
};

namespace std {
	template<>
	struct hash<Student> {
		size_t operator()(const Student& student)const {
			return hash<int>()(student.m_kor) ^ (hash<int>()(student.m_eng) << 1) ^ (hash<int>()(student.m_math) << 2);
		}
	};
}



int main() {
	std::unordered_map<Student, int>uMap2;

	std::pair<std::unordered_map<Student, int>::iterator, bool>iter3 =
		uMap2.insert(std::make_pair(Student(10, 20, 30), 10));

	return 0;
}