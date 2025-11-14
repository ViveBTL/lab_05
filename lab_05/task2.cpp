#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include "header.hpp"



void SortByRating(std::vector<Student>& v) {
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = 0; i < (v.size() - 1); i++) {
            float avg1 = float(std::accumulate(v[i].Ratings.begin(), v[i].Ratings.end(), 0)) / v[i].Ratings.size();
            float avg2 = float(std::accumulate(v[i + 1].Ratings.begin(), v[i + 1].Ratings.end(), 0)) / v[i + 1].Ratings.size();
            if (avg1 < avg2) {
                std::swap(v[i], v[i + 1]);
                flag = true;
            }
        }
    }
}