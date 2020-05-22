// Task 1: The Stairway 
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {
	int steps = 0;
	int N = atoi(argv[1]); 		 // distance
	int K = atoi(argv[2]);		 

	// if(0 != K) {
	// 	for(int i = 0; i < N; i++)
	// 		if(0 == i % (1 + K)) // dist is multiple of the step
	// 			steps++;
	// }
	// else
	// 	steps = N;				 // should go each stair
	// cout << steps << endl;

	steps = N / (1 + K); // step == 1 + K
	if (N % (K + 1))   // distance left < step
		steps += 1;	   // finish her! in one step

	cout << steps << endl;


	return 0;
}
