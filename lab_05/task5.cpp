#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "header.hpp"


std::vector<Student> VectorMathExcellent(const std::vector<Student>& v) {
    std::vector<Student> MathExcellent;

    for (auto d : v) {
        for (int index = 0; index < d.Subjects.size(); index++) {
            if (d.Subjects[index] == "math")
            {
                if (d.Ratings[index] == 5)
                    MathExcellent.push_back(d);
                break;
            }
        }
    }
    return MathExcellent;
}