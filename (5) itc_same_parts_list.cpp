#include "easy_list.h"

bool itc_same_parts_list(const vector <int> &mass){
    int a = mass.size();
    int b = 0;
    if(a != 0){
        for(int i = 0; i < a; i++){
            if(mass[i] < 0 && mass[i + 1] < 0)
                b++;
            if(mass[i] >= 0 && mass[i + 1] >= 0 && i + 1 < a)
                b++;
        }
    }
    if(b > 0)
        return true;
    return false;
}
