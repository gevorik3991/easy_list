#include "easy_list.h"

int itc_positive_list(const vector <int>& mass)
{
	int a=0;
        if (mass == vector<int>{ })
		return 0;
	for (int i=0; i < mass.size(); i++){
        	if (mass[i] > 0){
              	    a++;
		}
	}
	return a;
}
