#include <vector>
#include "fun.h"

using namespace std;

int itc_min(const vector <int>& mass) {
	int min, i;
	min = mass[0];
	for (i = 0; i < mass.size(); i++) {
		if (mass[i] <= min) {
		 min = mass[i];
		}
	}
		return min;
}

void itc_ra(vector <int>& mass){
		if (mass.size() <= 0) {
			return;
		}
		else {
			int b = mass[mass.size() - 1];
			for (int i = mass.size() - 1; i > 0; i--) {
				mass[i] = mass[i - 1];
			}
			mass[0] = b;
		}
}

void itc_pb(const vector <int>& mass, vector <int>& mass2) {
				mass2.push_back(mass[0]);
}

void itc_per(vector <int>& mass, vector <int>& mass2) {
	for (int i = 1; i < mass.size();i++) {
		mass2.push_back(mass[i]);
	}
	mass = mass2;
}

void itc_strmass(vector <int>& mass, string str) {
	int ch = 0;
	int k;
	for(int i = 0;str[i] != '/0';i++)
	k = ;
	ch = ch * 10 + k;
 }

