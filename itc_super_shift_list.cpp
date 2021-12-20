#include "easy_list.h"

void itc_super_shift_list(vector <int>& mass, int n)
{
    if (mass.size() != 0){
	if (n < 0)
	   n = mass.size()-1+(n%mass.size());
	else
            n = n % mass.size();
	if (n == 0)
            return ;
	for (int i = 0; i < n; i++)
            itc_rshift_list(mass);
    }
}
