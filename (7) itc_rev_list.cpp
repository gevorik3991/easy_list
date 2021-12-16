#include "easy_list.h"

void itc_rev_par_list(vector <int>& mass)
{
	if (mass == vector<int>{ })
	   return;
	int a;
	for (int i = 0; i < mass.size(); i++) {
		if (i%2 == 1) {
			a = mass[i];
			mass[i] = mass[i-1];
			mass[i-1] = a;
		}
	}
}
