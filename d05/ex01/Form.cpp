/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 11:55:35 by shulley           #+#    #+#             */
/*   Updated: 2017/05/30 12:03:55 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	setIsSigned(false);	
}

Form::Form(Form cont &copy)
{
	*this = copy;
}

Form::Form(const std::string n,
	const int toSign,
	const int toExec)
	: name(n),
	gradeToSign(toSign),
	gradeToExec(toExec)
{
	setIsSigned(false);
}

Form::~Form(void)
{
}

bool	Form::getIsSigned(void)
{
	return isSign;
}

void	Form::setIsSigned(bool sign)
{
	isSigned = sign;
}

bool	Form::getGradeToSign(void)
{
	return gradeToSign;
}

bool	Form::getGradeToExec(void)
{
	return gradeToExec;
}

void	Form::beSigned(Bureaucrat crat)
{
	if (crat.getGrade() < 1)
		throw GradeTooHighException();
	else if (crat.getGrade() > 150)
		throw GradeTooLowException();
	else
		crat.signForm();
}

const char* 	Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high");
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}


