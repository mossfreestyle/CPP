/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moss <moss@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:54:33 by moss              #+#    #+#             */
/*   Updated: 2025/09/19 09:54:40 by moss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main(void) {
    std::srand(std::time(0));
    std::cout << "\n=== Intern — valid form creation ===\n";

    Intern someIntern;
    AForm* form = someIntern.makeForm("robotomy request", "Bender");
    if (form) {
        std::cout << *form << std::endl;
        Bureaucrat admin("Admin", 1);
        std::cout << admin << std::endl;
        admin.signForm(*form);
        admin.executeForm(*form);
        delete form;
    }

    std::cout << "\n=== Intern — unknown form ===\n";

    AForm* invalidForm = someIntern.makeForm("pardon me please", "Nobody");
    if (!invalidForm) {
        std::cout << "Form creation failed as expected.\n";
    } else {
        std::cout << "Unexpectedly created form: " << *invalidForm << std::endl;
        delete invalidForm;
    }

    return 0;
}