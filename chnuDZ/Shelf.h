#pragma once

class Shelf {
private:
	const int id;
	double maxWeight;
	double loadedWeight;
	int level;

	void showInfo(const char* info) const;

public:
	Shelf();
	Shelf(int _id);
	Shelf(int _id, double _maxWeight, double _loadedWeight, int _level);

	~Shelf();

	int getId() const;
	double getMaxWeight() const;
	double getLoadedWeight() const;
	int getLevel() const;

	void print() const;

	bool hasSameId(const Shelf& other) const;

	void setMaxWeight(double _maxWeight);
};