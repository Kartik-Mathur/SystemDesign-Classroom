#include <iostream>
using namespace std;
/*
class Math {
public:
	string subject() {
		return "Maths Subject";
	}
};

class English {
public:
	string subject() {
		return "English Subject";
	}
};

class Student {
public:
	Math subject;
	English subject1;
	School school;
	Student(School s, Math m, English e, bool isMaths, bool isEnglish) {
		this->subject = m;
		this->school = s;
	}
};
*/

class School {
public:
	virtual string schoolName() = 0;
};

class NCJindal: public School {
public:
	string schoolName() {
		return "NC Jindal School";
	}
};

class Tyagi: public School {
public:
	string schoolName() {
		return "Tyagi School";
	}
};

class SanatanDharamSchool: public School {
public:
	string schoolName() {
		return "SanatanDharamSchool School";
	}
};

class Subject {
public:
	virtual string subject() = 0;
};

class Math: public Subject {
public:
	string subject() {
		return "Maths Subject";
	}
};

class English: public Subject {
public:
	string subject() {
		return "English Subject";
	}
};

class Student {
public:
	Subject* subject;
	School* school;
	string name;
	Student(string n, School *s, Subject* sub) {
		this->name = n;
		this->subject = sub;
		this->school = s;
	}

	string schoolName() {
		return school->schoolName();
	}
	string subjectName() {
		return subject->subject();
	}
};



int main() {
	School * NCJindal =  new NCJindal();
	Student* s = new Student("Abhishek", NCJindal, new Math());
	Student* s1 = new Student("Kanika", new Tyagi(), new English());
	Student* s2 = new Student("Yogita", new SanatanDharamSchool(), new English());

	cout << s->name << ", " << s->schoolName() << ", " << s->subjectName() << endl;
	cout << s1->name << ", " << s1->schoolName() << ", " << s1->subjectName() << endl;
	cout << s2->name << ", " << s2->schoolName() << ", " << s2->subjectName() << endl;

	delete NCJindal;

	return 0;
}
















