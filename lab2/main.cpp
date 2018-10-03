#include <iostream>
#include <fstream>
#include "Elo.h"
using namespace std;

int main(){
	int k,ra[7],rb[7],RA,RB,K;
	float sa[6],sb[6];
	Elo elo;
	ifstream inFile("file.in", ios::in);
	ofstream outFile("file.out", ios::out);
	inFile >> k >> ra[0] >> rb[0];
	outFile << ra[0] << "\t" << rb[0] << endl;
	elo.setK(k);
	K=elo.getK();
	for(int i=1; i<=6; i++){
		inFile >> sa[i-1];
		sb[i-1]=1-sa[i-1];
	}
	for(int i=1; i<=6; i++){
		elo.setRA(ra[i-1]);
		elo.setRB(rb[i-1]);
		RA=elo.getRA();
		RB=elo.getRB();
		ra[i]=elo.calRA(sa[i-1], RA, RB);
		rb[i]=elo.calRB(sb[i-1], RA, RB);
		outFile << ra[i] << "\t" << rb[i] << endl;
	}
	return 0;
}
