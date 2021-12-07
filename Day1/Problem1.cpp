// Count the number of times a depth measurement increases
#include<iostream>
#include<fstream>
using namespace std;

int main(void){
	ifstream ifs;
	ifs.open("input1.txt");
	int count = 0;
	int prev, current;
	ifs >> prev;
	ifs >> current;
	if(prev < current){
		count++;
	}
	while(!ifs.eof()){
		prev = current;
		ifs >> current;
		if(current > prev){
			count++;
		}
	}
	cout << count << endl;
}
