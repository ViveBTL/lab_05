
#include "header.hpp"





std::vector<Group> Groups(const std::vector<Student>& v) {
    std::vector<Group> Groups;
    for (auto d : v) {
        bool flag = true;
        for (auto &group : Groups) {
            if (d.GroupId == group.Id) {
                group.Students.push_back(d);
                flag = false;
                break;
            }
        }
        if (flag) {
            Group group;
            group.Id = d.GroupId;
            group.Students.push_back(d);
            Groups.push_back(group);
        }
    }
    return Groups;
}
