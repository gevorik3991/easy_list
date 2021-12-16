#include "easy_list.h"

bool itc_same_parts_list(const vector <int>& mass)
{
	if (mass == vector<int>{ }){
		 return false;
	}
	for (int i = 1; i < mass.size(); i++){
		if (mass[i] == mass[i - 1]){
			return true;
		}
	}
	return false;
}