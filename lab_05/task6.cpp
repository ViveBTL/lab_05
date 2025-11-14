
#include <algorithm>
#include "header.hpp"



std::vector<std::string> GroupsId(const std::vector<Student>& v) {
    std::vector<std::string> UniqueGroupID;
    for (auto d : v) {
        bool flag = true;
        for (auto id : UniqueGroupID) {
            if (d.GroupId == id) {
                flag = false;
                break;
            }
        }
        if (flag) 
            UniqueGroupID.push_back(d.GroupId);
    }
    return UniqueGroupID;
}