#pragma once
#ifndef PAYMENT
#define PAYMENT

#include <string>

class Payment {
public:
	std::string type;
	std::string number;
	std::string card_type;
	std::string expiration;
	std::string cvv;

	void make_payment(std::string a_type, std::string a_number, std::string a_card_type, std::string a_expiration, std::string a_cvv) {
		type = a_type;
		number = a_number;
		card_type = a_card_type;
		expiration = a_expiration;
		cvv = a_cvv;
	}

	std::string get_info() {
		std::string temp = this->number + "\n" + this->expiration + "\n" + this->cvv;
		return temp;
	}
};

#endif
