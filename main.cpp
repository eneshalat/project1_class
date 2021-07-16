#include <iostream>
#include "project1.h"

using namespace std;

int main(){
    ProjectStruct new_struct;
    new_struct.set_name("wiretakes");
    new_struct.set_id(1);
    new_struct.set_desc("coder of himself");
    new_struct.add_action("coding");
    new_struct.list_actions();
}

