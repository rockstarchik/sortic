#include <vector>
#include "fun.h"

using namespace std;

void itc_pa(const vector <int>& mass, vector <int>& mass2){
	for(int i = 0; mass2.size() < mass.size(); i++)
	mass2.push_back(mass[i]);
}