#include"SLL.h"


int main() {



	SLL s;

	s.Insert(1);
	s.Insert(2);
	s.Insert(3);
	s.Insert(4);
	s.Insert(5);
	s.Insert(6);
	
	s.Delete(1);
	s.Delete(4);

	s.Print();
}
