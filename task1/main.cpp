// Task 1: The Stairway 
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {
	int steps = 0;
	int K = atoi(argv[2]);

	if(K != 0) {
		for(int i = 0; i < atoi(argv[1]); i++)
			if(0 == (i % (K + 1)))
				steps++;
	}
	else
		steps = atoi(argv[1]);

	cout << steps;
	return 0;
}
