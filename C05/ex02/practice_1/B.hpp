#ifndef B_HPP
# define B_HPP

# include <iostream>

class B;
#include "Form.hpp"

class B
{
public:
	B(const std::string& name, int grade);
	B(const B& other);
	~B(void);

	B& operator=(const B& other);

	const std::string& GetName(void) const;
	int GetGrade(void) const;
	void IncrementGrade(void);
	void DecrementGrade(void);
	void signForm(Form& form) const;
	void executeForm(const Form& form);

	class GradeTooHightException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class InvalidGradeException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
private:
	B(void);
	const std::string mName;
	int mGrade;
};

std::ostream& operator<<(std::ostream& os, const B& b);

#endif
