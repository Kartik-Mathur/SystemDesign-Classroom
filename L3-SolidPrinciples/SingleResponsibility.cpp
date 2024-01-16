#include <iostream>
using namespace std;

class Mentors {
public:

	string addMentor() {
		return "Mentor Added Success";
	}

	string updateMentor() {
		return "Mentor Updated Success";
	}

};

class BatchDetails: public Mentors {
public:
	string planBatch() {
		return "Batch is planned";
	}

	string batchDetails() {
		return "Batch details provided";
	}
};

int main() {

	BatchDetails* b = new BatchDetails();
	cout << b->updateMentor() << endl;
	cout << b->planBatch() << endl;

	return 0;
}
















