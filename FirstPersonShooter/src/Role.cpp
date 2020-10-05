/*
 * Role.cpp
 *
 *  Created on: 5 Oct 2020
 *      Author: Thomas
 */

#include "Role.h"
#include <sstream>

Role::Role() {}

Role::Role(string nom) {
	this->nom = nom;
}

Role::Role(const Role &other) {

}

Role::~Role() {
}

string Role::exporter() {
	stringstream xml;

	xml << "<nom>" << this->nom << "</nom>" << endl;
	xml << "<vie>" << this->vie << "</vie>" << endl;
	xml << "<vitesse>" << this->vitesse << "</vitesse>" << endl;

	xml << "<Role>" << xml.str() << "</Role>";

	return xml.str();
}

const string& Role::getNom() const {
	return nom;
}

void Role::setNom(const string &nom) {
	this->nom = nom;
}

int Role::getVie() const {
	return vie;
}

void Role::setVie(int vie) {
	this->vie = vie;
}

float Role::getVitesse() const {
	return vitesse;
}

void Role::setVitesse(float vitesse) {
	this->vitesse = vitesse;
}
