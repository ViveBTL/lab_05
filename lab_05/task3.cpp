#include <iostream>
#include <vector>
#include <string>
#include "header.hpp"



size_t CountTwoness(const std::vector<Student>& v) {
    size_t count = 0;
    for (auto d : v) {
        if (std::find(d.Ratings.begin(), d.Ratings.end(), 2) != d.Ratings.end()) {
            count++;
        }
    }
    return count;
}