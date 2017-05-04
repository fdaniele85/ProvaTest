/*
 * blabla.cpp
 *
 *  Created on: 04 mag 2017
 *      Author: daniele
 */

#include "blabla.h"

#include <iostream>

blabla::blabla(int x) : x_(x) {
	std::cout << "blabla" << x_ << "\n";
}

blabla::~blabla() {
	// TODO Auto-generated destructor stub
}

int blabla::getX() const {
	return x_;
}
