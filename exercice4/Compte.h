
#ifndef EXERCICE4_COMPTE_H_
#define EXERCICE4_COMPTE_H_

class Compte {
private:
	double solde;
public:
	 explicit Compte(double soldeInitial = 0);
	void deposer(int montant);
	void retirer(int montant);
	double getSolde() const;
	virtual ~Compte();
};

#endif /* EXERCICE4_COMPTE_H_ */
