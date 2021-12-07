// Count the number of times the sum of measurements in the sliding window increases.
// The size of the sliding windows is 3 measurements
#include<iostream>
#include<fstream>
using namespace std;

int main(void){
	ifstream ifs;
	ifs.open("input1.txt");
	int input1, input2, input3;
	int currentSum = 0;
	int prevSum = 0;
	int count = 0;
	ifs >> input3;
	ifs >> input2;
	ifs >> input1;
	prevSum = input1 + input2 + input3;
	input3 = input2;
	input2 = input1;
	ifs >> input1;
	currentSum = input1 + input2 + input3;
	cout << prevSum << endl;
	cout << currentSum << endl;
	if(currentSum > prevSum)
		count++;
	while(!ifs.eof()){
		prevSum = currentSum;
		input3 = input2;
		input2 = input1;
		ifs >> input1;
		currentSum = input1 + input2 + input3;
		cout << currentSum << endl;
		if(currentSum > prevSum)
			count++;
	}
	cout << currentSum << endl;
	cout << count << endl;
}
