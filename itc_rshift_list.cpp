#include "easy_list.h"
void itc_rshift_list(vector <int> &mass)
{
    int len = mass.size();
    if (len != 0){
        vector <int> res(mass);
        res[0] = mass[len - 1];
        for (int i = 1; i < len; i++)
            res[i] = mass[i - 1];
        mass = res;
    }
}
