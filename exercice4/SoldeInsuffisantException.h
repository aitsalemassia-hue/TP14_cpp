
#ifndef EXERCICE4_SOLDEINSUFFISANTEXCEPTION_H_
#define EXERCICE4_SOLDEINSUFFISANTEXCEPTION_H_



#include <exception>
#include <string>

class SoldeInsuffisantException : public std::exception {
private:
    std::string message;
public:
    explicit SoldeInsuffisantException(const std::string& msg
        = "Solde insuffisant pour effectuer le retrait.");
    const char* what() const noexcept override;
};


#endif /* EXERCICE4_SOLDEINSUFFISANTEXCEPTION_H_ */
