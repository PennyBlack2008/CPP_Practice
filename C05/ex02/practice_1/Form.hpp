#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iomanip>

class Form;
# include "B.hpp"

class Form
{
public:
	Form(const std::string& name, const int signGrade, const int executeGrade);
	Form(const Form& other);
	virtual ~Form(void);

	Form& operator=(const Form& other);

	const std::string& GetName(void) const;
	bool GetSigned(void) const;
	int GetSignGrade(void) const;
	int GetExecuteGrade(void) const;

	void beSigned(const B& b);
	virtual void execute(const B& b) const = 0;

	class GradeTooHighException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class SignedException : public std::exception
	{
		virtual const char* what(void) const throw():
	};

	class NotSignedException : public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class OpenFailedException : public std::exception
	{
		virtual const char* what(void) const throw();
	};
protected:
	Form(void);
private:
	const std::string mName;
	bool mSigned;
	const int mSignGrade;
	const int mExecuteGrade;
};

std::ostream& operator<<(std::ostream& os, const Form& form);
#endif
