#include "Elo.h"

void Elo::setK(int k){
	K=k;
}
void Elo::setRA(int ra){
	RA=ra;
}
void Elo::setRB(int rb){
	RB=rb;
}
int Elo::getK(){
	return K;
}
int Elo::getRA(){
	return RA;
}
int Elo::getRB(){
	return RB;
}
int Elo::calRA(float sa, int RA, int RB){
	double EA=1/(pow(10,(RB-RA)/400.0)+1);
	int ratingRA=round(RA+K*(sa-EA));
	return ratingRA;
}
int Elo::calRB(float sb, int RA, int RB){
	double EB=1/(pow(10,(RA-RB)/400.0)+1);
	int ratingRB=round(RB+K*(sb-EB));
	return ratingRB;
}
