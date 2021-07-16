#ifndef _PROJECT1
#define _PROJECT1

#include <vector>

class ProjectStruct {
private:
    int id;
    std::string name;
    std::string desc;
    std::vector<std::string> actions;
public:
    int get_id();
    void set_id(int _new_id);
    std::string get_name();
    void set_name(std::string _new_name);
    std::string get_desc();
    void set_desc(std::string _new_desc);
    std::vector<std::string> get_actions();
    void add_action(std::string _new_action);
    void list_actions();
};

int ProjectStruct::get_id() {
    return id;
}

void ProjectStruct::set_id(int _new_id){
    id = _new_id;
}

std::string ProjectStruct::get_name(){
    return name;
}

void ProjectStruct::set_name(std::string _new_name){
    name = _new_name;
}

std::string ProjectStruct::get_desc() {
    return desc;
}

void ProjectStruct::set_desc(std::string _new_desc){
    desc = _new_desc;
}

std::vector<std::string> ProjectStruct::get_actions(){
    return actions;
}

void ProjectStruct::add_action(std::string _new_action){
    actions.push_back(_new_action);
}

void ProjectStruct::list_actions(){
    for (int _i=0; _i<actions.size();_i++){
        std::cout << actions[_i] << "\n";
    }
}

#endif
