#include "Loader.h"
#include <iostream>

using namespace std;

Loader::Loader()
	: id(1), strength(1), boxesCarried(0), tired(false), note(new int(0)) {

	showInfo("Default constructor");
}

Loader::Loader(int _id)
	: id(_id > 0 ? _id : 1), strength(1), boxesCarried(0), tired(false), note(new int(0)) {

	showInfo("Constructor with parameters (except: strength, boxesCarried, tired)");
}

Loader::Loader(int _id, int _strength, int _boxesCarried, bool _tired)
	: id(_id > 0 ? _id : 1),
	strength(_strength > 0 && _strength <= 10 ? _strength : 1),
	boxesCarried(_boxesCarried >= 0 && _boxesCarried <= 20 ? _boxesCarried : 0),
	tired(_tired),
	note(new int(0)) {

	showInfo("Constructor with parameters (all)");
}

Loader::Loader(const Loader& other)
	: id(other.id),
	strength(other.strength),
	boxesCarried(other.boxesCarried),
	tired(other.tired),
	note(new int(*other.note)) {

	showInfo("Copy constructor");
}

Loader::~Loader() {
	cout << "Loader destructor | id: " << id << endl;
	delete note;
}

void Loader::showInfo(const char* info) const {
	cout << "Loader: " << info << " | ";
	print();
}

int Loader::getId() const {
	return id;
}

int Loader::getStrength() const {
	return strength;
}

int Loader::getBoxesCarried() const {
	return boxesCarried;
}

bool Loader::isTired() const {
	return tired;
}

int Loader::getNote() const {
	return *note;
}

void Loader::print() const {
	cout << "id: " << getId()
		<< " | strength: " << getStrength()
		<< " | boxesCarried: " << getBoxesCarried()
		<< " | tired: " << (isTired() ? "true" : "false")
		<< " | note: " << getNote() << endl;
}

bool Loader::hasSameId(const Loader& other) const {
	return id == other.id;
}

void Loader::setStrength(int _strength) {
	if (_strength > 0 && _strength <= 10) {
		strength = _strength;
	}
}

void Loader::setNote(int _note) {
	*note = _note;
}