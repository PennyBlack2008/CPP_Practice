#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : Form("RobotomyRequest", 72, 45)
    , mTarget("undefined")
{
	srand(clock());
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("RobotomyRequest", 72, 45)
    , mTarget(target)
{
	srand(clock());
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	srand(clock());
    *this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    mTarget = other.mTarget;
    return (*this);
}

void                    RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
    if (Form::GetSigned() == true)
    {
        if (bureaucrat.GetGrade() <= Form::GetExecuteGrade())
        {
			std::cout << "Ziiigg...." << std::endl;
			if (rand() % 2)
			{
				std::cout << "<" << mTarget << "> has been robotomized successfully." << std::endl;
			}
			else
				std::cout << mTarget << " robotomization has failed." << std::endl;
        }
        else
        {
            throw Form::GradeTooLowException();
        }
    }
    else
    {
        throw Form::NotSignedException();
    }
}