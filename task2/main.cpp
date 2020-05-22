// Task 2: The Bridge
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	int N = atoi(argv[1]); 			 // amount of spans
	int d = atoi(argv[2]); 			 // distance between
	cout << (N*N + N)/2 * d << endl; // total length
	// arythmetic progression

	return 0;
}
