// Forward - Increases Horizontal by X units
// Down - Increases Vertical depth by X units
// Up - Decreases Vertical depth by X units
#include<iostream>
#include<fstream>
using namespace std;

int main(void){
	int xPos = 0, yPos = 0;
	char direction[10] = {};
	int movement;
	cout << xPos << ", " << yPos << endl;
	ifstream ifs;
	ofstream ofs;
	ifs.open("input.txt");
	ofs.open("output.txt");
	do{
		ifs >> direction;
		ifs >> movement;
		if(ifs.eof())
			break;
	        ofs << direction << " " << movement << endl;
		if(direction[0] == 'u'){
			yPos = yPos - movement;
		}else if(direction[0] == 'd'){
			yPos = yPos + movement;
		}else{
			xPos = xPos + movement;
		}
		int Mult = xPos * yPos;
		cout << Mult << endl;
	}while(!ifs.eof());

	ofs.close();
	ifs.close();
	cout << yPos * xPos << endl;
	return 0;
}
