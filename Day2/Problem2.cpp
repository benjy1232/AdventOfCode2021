// Down - Increases aim by X units
// Up - Decreases aim by X units
// Forward - Move horizontally X units and vertically by X * aim units
#include<iostream>
#include<fstream>
using namespace std;

int main(void){
	int aim = 0, xPos = 0, yPos = 0;
	char direction[10] = {};
	int movement;
	ifstream ifs;
	ofstream ofs;
	ifs.open("input.txt");
	while(!ifs.eof()){
		ifs >> direction;
		ifs >> movement;

		if(ifs.eof())
			break;

		if(direction[0] == 'd'){
			aim = aim + movement;
		}else if(direction[0] == 'u'){
			aim = aim - movement;
		}else{
			xPos = xPos + movement;
			yPos = yPos + (movement * aim);
		}
	}
	cout << xPos * yPos << endl;
	return 0;
}
