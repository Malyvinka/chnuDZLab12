#ifndef LOADER_H
#define LOADER_H

class Loader {
private:
	const int id;
	int strength;
	int boxesCarried;
	bool tired;
	int* note;

	void showInfo(const char* info) const;

public:
	Loader();
	Loader(int _id);
	Loader(int _id, int _strength, int _boxesCarried, bool _tired);
	Loader(const Loader& other);

	~Loader();

	int getId() const;
	int getStrength() const;
	int getBoxesCarried() const;
	bool isTired() const;
	int getNote() const;

	void print() const;

	bool hasSameId(const Loader& other) const;

	void setStrength(int _strength);
	void setNote(int _note);
};

#endif