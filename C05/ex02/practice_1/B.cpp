#include "B.hpp"
#include "Form.hpp"

B::B(void)
{
}

B::B(const std::string& name, int grade)
	: mName(name)
	, mGrade(grade)
{
	if (mGrade < 1 || mGrade > 150)
	{
		throw B::InvalidGradeException();
	}
}

B::B(const B& other)
{
	*this = other;
}

B::~B(void)
{
}

B& B::operator=(const B& other)
{
	mGrade = other.mGrade;
	return (*this);
}

const std::string& B::GetName(void) const
{
	return (mName);
}

int B::GetGrade(void) const
{
	return (mGrade);
}

void B::IncrementGrade(void)
{
	int tmp = mGrade - 1;
	if (tmp < 1)
	{
		throw B::GradeTooHighException();
	}
	else
	{
		mGrade = tmp;
	}
}

void B::DecrementGrade(void)
{
	int tmp = mGrade + 1;
	if (tmp > 150)
		throw B::GradeTooLowException();
	else
		mGrade = tmp;
}

void B::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout <, "<" << mName << "> signs the <" << form.GetName() << ">." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "<" << mName << "> cannot sign the <" << form.GetName() << "> becausee " << e.what() << std::endl;
	}
}

void B::executeForm(const Form& form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << mName << "> executes <" << form.GetName() << ">." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "<" << mName << "> cannot execute <" << form.GetName() << "> because " << e.what() << std::endl;
	}
}

const char* B::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

const char* B::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

const char* B::InvalidGradeException::what(void) const throw()
{
	return ("Grade must be among 1 ~ 150");
}

std::ostream& operator<<(std::ostream& os, const B& b)
{
	return (os << "Bureaucrat" << " <" << b.GetName() << ">'s grade is <" << b.GetGrade() << ">.");
}
