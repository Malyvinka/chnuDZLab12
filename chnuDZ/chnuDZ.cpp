#include <iostream>
#include "Box.h"
#include "Shelf.h"
#include "Loader.h"

using namespace std;

//class Box {
//private:
//	int id = 1;
//	double weight = 1.0;
//	double volume = 1.0;
//	bool fragile = false;
//
//	void showInfo(const char* info) {
//		cout << "Box: " << info 
//			 << " | id: " << id 
//			 << " | weight: " << weight 
//			 << " | volume: " << volume 
//			 << " | fragile: " << (fragile ? "true" : "false") << endl;
//	}
//
//	Box(int _id, double _weight, double _volume, bool _fragile, const char* info) {
//		if (_id > 0) {
//			id = _id;
//		}
//		if (_weight > 0) {
//			weight = _weight;
//		}
//		if (_volume > 0) {
//			volume = _volume;
//		}
//		fragile = _fragile;
//
//		showInfo(info);
//	}
//public:
//	Box(int _id, double _weight, double _volume, bool _fragile) : Box(_id, _weight, _volume, _fragile, "Constructor with parameters (all)") {}
//	Box(int _id, double _weight, double _volume) : Box(_id, _weight, _volume, false, "Constructor with parameters (except: fragile)") { }
//	Box(int _id, double _weight) : Box(_id, _weight, 1.0, false, "Constructor with parameters (except: volume, fragile)") { }
//	Box(int _id) : Box(_id, 1.0, 1.0, false, "Constructor with parameters (except: weight, volume, fragile)") { }
//	Box() : Box(1, 1.0, 1.0, false, "Default constructor") { }
//
//	~Box() { cout << "Box destructor | id: " << id << endl; }
//
//	int getId() const { return id; }
//	double getWeight() const { return weight; }
//	double getVolume() const { return volume; }
//	bool isFragile() const { return fragile; }
//
//	void printInfo() const {
//		cout << "Box: id: " << getId()
//			<< " | weight: " << getWeight()
//			<< " | volume: " << getVolume()
//			<< " | fragile: " << (isFragile() ? "true" : "false") << endl;
//	}
//
//	void setId(int _id) {
//		if (_id > 0) {
//			id = _id;
//		}
//	}
//	void setWeight(double _weight) {
//		if (_weight > 0) {
//			weight = _weight;
//		}
//	}
//	void setVolume(double _volume) {
//		if (_volume > 0) {
//			volume = _volume;
//		}
//	}
//	void setFragile(bool _fragile) {
//		fragile = _fragile;
//	}
//};

//class Shelf1 {
//private:
//	int id = 1;
//	double maxWeight = 1.0;
//	double loadedWeight = 0.0;
//	int level = 1;
//
//	void showInfo(const char* info) {
//		cout << "Shelf: " << info
//			<< " | id: " << id
//			<< " | maxWeight: " << maxWeight
//			<< " | loadedWeight: " << loadedWeight
//			<< " | level: " << level << endl;
//	}
//
//	Shelf(int _id, double _maxWeight, double _loadedWeight, int _level, const char* info) {
//		if (_id > 0) {
//			id = _id;
//		}
//		if (_maxWeight > 0) {
//			maxWeight = _maxWeight;
//		}
//		if (_loadedWeight >= 0 && _loadedWeight <= maxWeight) {
//			loadedWeight = _loadedWeight;
//		}
//		if (_level >= 1 && _level <= 5) {
//			level = _level;
//		}
//		showInfo(info);
//	}
//public:
//	Shelf(int _id, double _maxWeight, double _loadedWeight, int _level) : Shelf(_id, _maxWeight, _loadedWeight, _level, "Constructor with parameters (all)") {}
//	Shelf(int _id, double _maxWeight, double _loadedWeight) : Shelf(_id, _maxWeight, _loadedWeight, 1, "Constructor with parameters (except: level)") { }
//	Shelf(int _id, double _maxWeight) : Shelf(_id, _maxWeight, 0.0, 1, "Constructor with parameters (except: loadedWeight, level)") { }
//	Shelf(int _id) : Shelf(_id, 1.0, 0.0, 1, "Constructor with parameters (except: maxWeight, loadedWeight, level)") { }
//	Shelf() : Shelf(1, 1.0, 0.0, 1, "Default constructor") { }
//
//	~Shelf() { cout << "Shelf destructor | id: " << id << endl; }
//
//	int getId() const { return id; }
//	double getMaxWeight() const { return maxWeight; }
//	double getLoadedWeight() const { return loadedWeight; }
//	int getLevel() const { return level; }
//
//	void printInfo() const {
//		cout << "Shelf: id: " << getId()
//			<< " | maxWeight: " << getMaxWeight()
//			<< " | loadedWeight: " << getLoadedWeight()
//			<< " | level: " << getLevel() << endl;
//	}
//
//	void setId(int _id) {
//		if (_id > 0) {
//			id = _id;
//		}
//	}
//	void setMaxWeight(double _maxWeight) {
//		if (_maxWeight > 0 && _maxWeight >= loadedWeight) {
//			maxWeight = _maxWeight;
//		}
//	}
//	void setLoadedWeight(double _loadedWeight) {
//		if (_loadedWeight >= 0 && _loadedWeight <= maxWeight) {
//			loadedWeight = _loadedWeight;
//		}
//	}
//	void setLevel(int _level) {
//		if (_level >= 1 && _level <= 5) {
//			level = _level;
//		}
//	}
//};

//class Loader {
//private:
//	int id = 1;
//	int strength = 1;
//	int boxesCarried = 0;
//	bool tired = false;
//
//	void showInfo(const char* info) {
//		cout << "Loader: " << info
//			<< " | id: " << id
//			<< " | strength: " << strength
//			<< " | boxesCarried: " << boxesCarried
//			<< " | tired: " << (tired ? "true" : "false") << endl;
//	}
//
//	Loader(int _id, int _strength, int _boxesCarried, bool _tired, const char* info) {
//		if (_id > 0) {
//			id = _id;
//		}
//		if (_strength > 0 && _strength <= 10) {
//			strength = _strength;
//		}
//		if (_boxesCarried >= 0 && _boxesCarried <= 20) {
//			boxesCarried = _boxesCarried;
//		}
//		tired = _tired;
//
//		showInfo(info);
//	}
//public:
//	Loader(int _id, int _strength, int _boxesCarried, bool _tired) : Loader(_id, _strength, _boxesCarried, _tired, "Constructor with parameters (all)") {}
//	Loader(int _id, int _strength, int _boxesCarried) : Loader(_id, _strength, _boxesCarried, false, "Constructor with parameters (except: tired)") { }
//	Loader(int _id, int _strength) : Loader(_id, _strength, 0, false, "Constructor with parameters (except: boxesCarried, tired)") { }
//	Loader(int _id) : Loader(_id, 1, 0, false, "Constructor with parameters (except: strength, boxesCarried, tired)") { }
//	Loader() : Loader(1, 1, 0, false, "Default constructor") { }
//
//	~Loader() { cout << "Loader destructor | id: " << id << endl; }
//
//	int getId() const { return id; }
//	int getStrength() const { return strength; }
//	int getBoxesCarried() const { return boxesCarried; }
//	bool isTired() const { return tired; }
//
//	void printInfo() const {
//		cout << "Loader: id: " << getId()
//			<< " | strength: " << getStrength()
//			<< " | boxesCarried: " << getBoxesCarried()
//			<< " | tired: " << (isTired() ? "true" : "false") << endl;
//	}
//
//	void setId(int _id) {
//		if (_id > 0) {
//			id = _id;
//		}
//	}
//	void setStrength(int _strength) {
//		if (_strength > 0 && _strength <= 10) {
//			strength = _strength;
//		}
//	}
//	void setBoxesCarried(int _boxesCarried) {
//		if (_boxesCarried >= 0 && _boxesCarried <= 20) {
//			boxesCarried = _boxesCarried;
//		}
//	}
//	void setTired(bool _tired) {
//		tired = _tired;
//	}
//};

void showLoaderByValue(Loader loader) {
	loader.print();
}

void showLoaderByReference(const Loader& loader) {
	loader.print();
}

Loader createLoader() {
	Loader loader(30, 8, 12, true);
	return loader;
}

int main() {

	cout << "\n========== BOX ==========\n";

	Box box1;
	Box box2(2);
	Box box3(3, 2.5, 2.1);
	Box box4(4, 3.0, 2.5, true);
	Box box5(5, -3.0, -2.5, true);

	cout << "\n--- Getters and print ---\n";

	cout << box1.getId() << " | " << box1.getWeight() << " | " << box1.getVolume() << " | " << box1.isFragile() << endl;
	box1.print();

	cout << box2.getId() << " | " << box2.getWeight() << " | " << box2.getVolume() << " | " << box2.isFragile() << endl;
	box2.print();

	cout << box3.getId() << " | " << box3.getWeight() << " | " << box3.getVolume() << " | " << box3.isFragile() << endl;
	box3.print();

	cout << box4.getId() << " | " << box4.getWeight() << " | " << box4.getVolume() << " | " << box4.isFragile() << endl;
	box4.print();

	cout << box5.getId() << " | " << box5.getWeight() << " | " << box5.getVolume() << " | " << box5.isFragile() << endl;
	box5.print();


	cout << "\n========== SHELF ==========\n";

	Shelf shelf1;
	Shelf shelf2(2);
	Shelf shelf3(3, 10.0, 5.0, 2);
	Shelf shelf4(4, -15.0, 800.0, 3);

	cout << "\n--- Getters and print ---\n";

	cout << shelf1.getId() << " | " << shelf1.getMaxWeight() << " | " << shelf1.getLoadedWeight() << " | " << shelf1.getLevel() << endl;
	shelf1.print();

	cout << shelf2.getId() << " | " << shelf2.getMaxWeight() << " | " << shelf2.getLoadedWeight() << " | " << shelf2.getLevel() << endl;
	shelf2.print();

	cout << shelf3.getId() << " | " << shelf3.getMaxWeight() << " | " << shelf3.getLoadedWeight() << " | " << shelf3.getLevel() << endl;
	shelf3.print();

	cout << shelf4.getId() << " | " << shelf4.getMaxWeight() << " | " << shelf4.getLoadedWeight() << " | " << shelf4.getLevel() << endl;
	shelf4.print();


	cout << "\n========== LOADER ==========\n";

	Loader loader1;
	Loader loader2(2);
	Loader loader3(3, 5, 10, true);
	Loader loader4(4, -3, -25, true);

	cout << "\n--- Getters and print ---\n";

	cout << loader1.getId() << " | " << loader1.getStrength() << " | " << loader1.getBoxesCarried() << " | " << loader1.isTired() << " | " << loader1.getNote() << endl;
	loader1.print();

	cout << loader2.getId() << " | " << loader2.getStrength() << " | " << loader2.getBoxesCarried() << " | " << loader2.isTired() << " | " << loader2.getNote() << endl;
	loader2.print();

	cout << loader3.getId() << " | " << loader3.getStrength() << " | " << loader3.getBoxesCarried() << " | " << loader3.isTired() << " | " << loader3.getNote() << endl;
	loader3.print();

	cout << loader4.getId() << " | " << loader4.getStrength() << " | " << loader4.getBoxesCarried() << " | " << loader4.isTired() << " | " << loader4.getNote() << endl;
	loader4.print();


	cout << "\n========== CONST OBJECTS ==========\n";

	const Box constBox(10, 2.0, 3.0, true);

	cout << constBox.getId() << " | " << constBox.getWeight() << " | " << constBox.getVolume() << " | " << constBox.isFragile() << endl;
	constBox.print();
	cout << "Same ID: " << constBox.hasSameId(box1) << endl;

	const Shelf constShelf(10, 20.0, 10.0, 3);

	cout << constShelf.getId() << " | " << constShelf.getMaxWeight() << " | " << constShelf.getLoadedWeight() << " | " << constShelf.getLevel() << endl;
	constShelf.print();
	cout << "Same ID: " << constShelf.hasSameId(shelf1) << endl;


	const Loader constLoader(10, 5, 10, true);

	cout << constLoader.getId() << " | " << constLoader.getStrength() << " | " << constLoader.getBoxesCarried() << " | " << constLoader.isTired() << " | " << constLoader.getNote() << endl;
	constLoader.print();
	cout << "Same ID: " << constLoader.hasSameId(loader1) << endl;


	cout << "\n========== COPY CONSTRUCTOR ==========\n";

	loader3.setNote(50);

	Loader loaderCopy(loader3);

	loaderCopy.setNote(100);

	cout << "\nOriginal object:\n";
	loader3.print();

	cout << "Copied object:\n";
	loaderCopy.print();


	cout << "\n========== HEAP COPY ==========\n";

	Loader* loaderPtr = new Loader(20, 7, 15, false);

	Loader loaderHeapCopy{ *loaderPtr };

	delete loaderPtr;

	cout << "\nCopied object after deleting original:\n";
	loaderHeapCopy.print();


	cout << "\n========== PASS BY VALUE / REFERENCE ==========\n";

	cout << "\nPass by value:\n";
	showLoaderByValue(loader3);

	cout << "\nPass by const reference:\n";
	showLoaderByReference(loader3);


	cout << "\n========== RETURN OBJECT ==========\n";

	Loader loaderReturned = createLoader();

	loaderReturned.print();


	cout << "\n========== NESTED BLOCK ==========\n";

	cout << "Before block" << endl;

	{
		Box box6(6, 4.0, 3.0, true);
		Shelf shelf5(5, 20.0, 10.0, 3);

		cout << "Inside block" << endl;

		box6.print();
		shelf5.print();
	}

	cout << "After block" << endl;


	cout << "\n========== END ==========\n";

	return 0;
}
