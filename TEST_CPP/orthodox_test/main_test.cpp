#include "Test.hpp"


int main()
{
    Test empty_object;
    Test addition_object;

    Test parameter_object(24,"Marvin");

    Test copy_object_base(42,"Arthur");
    Test copy_object(copy_object_base);

    Test assigmant_object;
    
    assigmant_object = parameter_object;

    addition_object = parameter_object + copy_object;

    
    empty_object.writeInfo();
        
    parameter_object.writeInfo();

    copy_object_base.writeInfo();
    copy_object.writeInfo();

    assigmant_object.writeInfo();

    addition_object.writeInfo();

}