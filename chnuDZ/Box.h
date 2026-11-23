#ifndef BOX_H
#define BOX_H

class Box {
private:
	const int id;
	double weight;
	double volume;
	bool fragile;

	void showInfo(const char* info) const;

public:
	Box(int _id = 1, double _weight = 1.0, double _volume = 1.0, bool _fragile = false);

	~Box();

	int getId() const;
	double getWeight() const;
	double getVolume() const;
	bool isFragile() const;

	void print() const;

	bool hasSameId(const Box& other) const;

	void setWeight(double _weight);
};

#endif