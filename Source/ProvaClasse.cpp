#include "ProvaClasse.h"

ProvaClasse::ProvaClasse() {
	this->setNumerini(1 , 2 , 3);
}
ProvaClasse::ProvaClasse(int initX , int initY , int initZ) : x(initX) , y(initY) , z(initZ) {

}

int ProvaClasse::getX() {
	return this->x;
}
int ProvaClasse::getY() {
	return this->y;
}
int ProvaClasse::getZ() {
	return this->z;
}
void ProvaClasse::setX(int newX) {
	this->x = newX;
}
void ProvaClasse::setY(int newY) {
	this->y = newY;
}
void ProvaClasse::setZ(int newZ) {
	this->z = newZ;
}
void ProvaClasse::setNumerini(int newX , int newY , int newZ) {
	this->setX(newX);
	this->setY(newY);
	this->setZ(newZ);
}

std::string ProvaClasse::toString() {
	return "I numeri sono: " + std::to_string(x) + ", " + std::to_string(y) + " e " + std::to_string(z) + ".";
}
