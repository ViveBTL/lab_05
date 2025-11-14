
#include "header.hpp"



void showStudentsVector(std::vector<Student>& v) {
    for (auto st : v) {
        std::cout << st.Name << ' ' << st.GroupId << " { ";
        for (auto grade : st.Ratings)
            std::cout << grade << ' ';
        std::cout << "}, { ";
        for (auto subject : st.Subjects)
            std::cout << subject << ' ';
        std::cout << "}\n";
    }
    std::cout << "=================\n";
}

int main()
{
    std::vector<Student> students = {
        {"Ivan", "11234", {2, 2, 2, 2}, {"math", "english", "informatics", "physics"}},
        {"Anna", "11234", {4, 4, 5, 3}, {"math", "informatics","informatics", "physics" }},
        {"Ana", "2222", {5, 5, 5, 5}, {"math","english", "informatics","physics"}},
        {"Olga", "11111", {5, 2, 4, 4}, {"math", "english", "informatics","physics"}}
};

    showStudentsVector(students);
    SortByName(students);
    showStudentsVector(students);
    SortByRating(students);
    showStudentsVector(students);

    std::cout << "Twoness: " << CountTwoness(students) << std::endl;
    std::cout << "Exelent: " << CountExcellent(students) << '\n';
    std::vector<Student> me = VectorMathExcellent(students);
    showStudentsVector(me);
    std::vector<std::string> UniqueGroupID = GroupsId(students);
    for (auto ID : UniqueGroupID) {
        std::cout << ID << " ";
    }
    std::cout << '\n';

    std::vector<Group> groups = Groups(students);
    std::cout << "\nGroup list.\n";
    for (auto group : groups) {
        std::cout << "Group ID: " << group.Id << "\n";
        showStudentsVector(group.Students);
    }

    
}
