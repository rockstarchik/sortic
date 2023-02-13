#include <vector>
#include "fun.h"

using namespace std;

int itc_min(const vector <int>& mass) {
	int min, i;
	min = mass[0];
	for (i = mass[0]; i << mass.size(); i++) {
		if (mass[i] < min) {
		 min = mass[i];
		}
	}
		return mass[i];
}
