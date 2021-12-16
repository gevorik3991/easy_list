#include "easy_list.h"

void itc_even_parts_list(const vector <int>& mass, vector <int>& mass2)
{
	if (mass == vector<int>{ })
	      return ;
	for (int i=0; i < mass.size(); i++){    
        	if (mass[i]%2 == 0){
                	mass2.push_back(mass[i]);
        	}
	}
}
