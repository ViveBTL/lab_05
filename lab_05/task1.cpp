
#include <vector>
#include <string>
#include "header.hpp"



void SortByName(std::vector<Student>& v) {
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = 0; i < (v.size() - 1); i++) {
            if (v[i].Name > v[i + 1].Name) {
                std::swap(v[i], v[i + 1]);
                flag = true;
            }
        }
    }
}