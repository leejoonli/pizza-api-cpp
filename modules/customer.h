#pragma once
#ifndef CUSTOMER
#define CUSTOMER

#include <string>
#include "address.h"

class Customer {
public:
	Address address;
	std::string first_name;
	std::string last_name;
	std::string phone;
	std::string email;

	void make_customer(Address a_address, std::string a_first_name, std::string a_last_name, std::string a_phone, std::string a_email) {
		address = a_address;
		first_name = a_first_name;
		last_name = a_last_name;
		phone = a_phone;
		email = a_email;
	}

	std::string get_info() {
		std::string temp = this->first_name + " " + this->last_name + "\n" + this->phone + "\n" + this->email;
		return temp;
	}
};

#endif