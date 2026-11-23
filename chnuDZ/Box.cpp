#include "Box.h"
#include <iostream>

using namespace std;

Box::Box(int _id, double _weight, double _volume, bool _fragile)
	: id(_id > 0 ? _id : 1),
	weight(_weight > 0 ? _weight : 1.0),
	volume(_volume > 0 ? _volume : 1.0),
	fragile(_fragile) {

	showInfo("Constructor with parameters");
}

Box::~Box() {
	cout << "Box destructor | id: " << id << endl;
}

void Box::showInfo(const char* info) const {
	cout << "Box: " << info << " | ";
	print();
}

int Box::getId() const {
	return id;
}

double Box::getWeight() const {
	return weight;
}

double Box::getVolume() const {
	return volume;
}

bool Box::isFragile() const {
	return fragile;
}

void Box::print() const {
	cout << "id: " << getId()
		<< " | weight: " << getWeight()
		<< " | volume: " << getVolume()
		<< " | fragile: " << (isFragile() ? "true" : "false") << endl;
}

bool Box::hasSameId(const Box& other) const {
	return id == other.id;
}

void Box::setWeight(double _weight) {
	if (_weight > 0) {
		weight = _weight;
	}
}