#pragma once
#ifndef ADDRESS
#define ADDRESS

#include <stdio.h>
#include <string>
#include <cstring>
#include <format>
#include "urls.h"

class Address {
public:
	std::string street;
	std::string city;
	std::string region;
	std::string zip;
	// change urls to class url. include urls header file after making it
	std::string urls;
	// country will be a variable declared in another header file
	std::string country;

	void make_address(std::string a_street, std::string a_city, std::string a_region, std::string a_zip, std::string COUNTRY_USA) {
		street = a_street;
		city = a_city;
		region = a_region;
		zip = a_zip;
		/*
		urls = Urls();
		*/
		country = COUNTRY_USA;
	}

	std::string get_address_line_1() {
		return this->street;
	}

	std::string get_address_line_2() {
		std::string temp = this->city + ", " + this->region + ", " + this->zip;
		return temp;
	}
};

#endif