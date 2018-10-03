#include <math.h>
using namespace std;

class Elo{
	public:
		void setK(int k);
		void setRA(int ra);
		void setRB(int rb);
		int getK();
		int getRA();
		int getRB();
		int calRA(float sa, int RA, int RB);
		int calRB(float sb, int RA, int RB);
	private:
		int K, RA, RB;
};

