#include "Shelf.h"
#include <iostream>

using namespace std;

Shelf::Shelf(int _id, double _maxWeight, double _loadedWeight, int _level)
	: id(_id > 0 ? _id : 1),
	maxWeight(_maxWeight > 0 ? _maxWeight : 1.0),
	loadedWeight(_loadedWeight >= 0 && _loadedWeight <= (_maxWeight > 0 ? _maxWeight : 1.0) ? _loadedWeight : 0.0),
	level(_level >= 1 && _level <= 5 ? _level : 1) {

	showInfo("Constructor with parameters (all)");
}

Shelf::Shelf(int _id)
	: Shelf(_id, 1.0, 0.0, 1) {

	showInfo("Constructor with parameters (except: maxWeight, loadedWeight, level)");
}

Shelf::Shelf()
	: Shelf(1, 1.0, 0.0, 1) {

	showInfo("Default constructor");
}

Shelf::~Shelf() {
	cout << "Shelf destructor | id: " << id << endl;
}

void Shelf::showInfo(const char* info) const {
	cout << "Shelf: " << info << " | ";
	print();
}

int Shelf::getId() const {
	return id;
}

double Shelf::getMaxWeight() const {
	return maxWeight;
}

double Shelf::getLoadedWeight() const {
	return loadedWeight;
}

int Shelf::getLevel() const {
	return level;
}

void Shelf::print() const {
	cout << "id: " << getId()
		<< " | maxWeight: " << getMaxWeight()
		<< " | loadedWeight: " << getLoadedWeight()
		<< " | level: " << getLevel() << endl;
}

bool Shelf::hasSameId(const Shelf& other) const {
	return id == other.id;
}

void Shelf::setMaxWeight(double _maxWeight) {
	if (_maxWeight > 0 && _maxWeight >= loadedWeight) {
		maxWeight = _maxWeight;
	}
}