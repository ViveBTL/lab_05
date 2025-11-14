#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "header.hpp"


size_t CountExcellent(const std::vector<Student>& v) {
    size_t count = 0;
    std::vector<int> unex{ 1, 2, 3, 4 };

    for (auto d : v) {
        bool isExcellent = true;

        while (std::find_first_of(d.Ratings.begin(), d.Ratings.end(), unex.begin(), unex.end()) != d.Ratings.end()) {
            isExcellent = false;
            break;
        }

        if (isExcellent) {
            count++;
        }
    }
    return count;
}