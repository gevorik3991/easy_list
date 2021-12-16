#include "easy_list.h"

void itc_rshift_list(vector <int>& mass)
{
	if (mass == vector<int>{ })
	   return ;
	int a, b = mass[mass.size()-1];
	for (int i = 0; i < mass.size(); i++) {
		a = mass[i];
		mass[i] = b;
		b = a;
	}
}
