#include "easy_list.h"

void itc_rev_list(vector <int>& mass)
{
	if (mass == vector<int>{ })
        	return ;
	int a = mass.size() - 1, b = 0, c;
	while (a >= mass.size() / 2){
		c = mass[b];
		mass[b] = mass[a];
		mass[a] = c;
		a--;
		b++;
	}
}
