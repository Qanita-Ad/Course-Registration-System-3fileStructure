#include "RSystem.h"
using namespace std;
int main()
{
	Student S[3] =
	{
		Student(1,"Qanita",2),
		Student(2,"Abdullah",6),
		Student(3,"Abtahi",4)
	};
	Instructor Object(100,"Tahir Frooq","AI");
	Course A("CS1002","Object Oriented Programming",2,Object),
		B("CS1001", "Programming Fundamental", 3, Object),
		C("S10013", "Islamiyat", 2, Object);
	A.AddStudents(&S[0]);
	B.AddStudents(&S[0]);
	B.AddStudents(&S[1]);
	A.display();
	B.display();
	Compare(A, B);
	AcademicAuditor auditor;
	auditor.audit(A);
	auditor.audit(B);
}