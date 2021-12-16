#include "easy_list.h"

int itc_sl_list(const vector <int>& mass)
{
	int a=0;
	for (int i=1; i<mass.size(); i++){
            if (mass[i] > mass[i-1]){
                a++;
            }
	}
	return a;
}
