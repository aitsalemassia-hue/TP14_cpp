/*
 * montantInvalideException.h
 *
 *  Created on: 11 nov. 2026
 *      Author: Admin
 */

#ifndef EXERCICE4_MONTANTINVALIDEEXCEPTION_H_
#define EXERCICE4_MONTANTINVALIDEEXCEPTION_H_
#include<exception>
#include<string>
#include<iostream>

class MontantInvalideException :public std::exception {
private:
	std::string message;
public:
    explicit MontantInvalideException(const std::string& msg
        = "Montant invalide (doit etre strictement positif).");
    const char* what() const noexcept override;
};

#endif /* EXERCICE4_MONTANTINVALIDEEXCEPTION_H_ */
