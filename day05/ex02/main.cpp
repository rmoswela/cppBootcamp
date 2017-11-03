#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Bureaucrat b1("B1", 136);

    try
    {

        ShrubberyCreationForm	 	test01("SCII_Tree");
        //RobotomyRequestForm	 		test02("RRF_1");
        //PresidentialPardonForm	 	test03("PDF_1");

        std::cout << b1 << std::endl;
        std::cout << test01 << std::endl;
        //std::cout << test02 << std::endl;
        //std::cout << test03 << std::endl;

        b1.signForm(test01);
        //b1.signForm(test02);
        //b1.signForm(test03);

        b1.executeForm(test01);
        //b1.executeForm(test02);
        //b1.executeForm(test03);

    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}