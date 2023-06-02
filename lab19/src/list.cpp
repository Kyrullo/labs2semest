#include "list.h"

void Node::printNode() {

	cout << "Your Packages" << endl;

	for (size_t i = 0; i < size; i++) {
		cout << this->package_node[i].getSize() << " " << this->package_node[i].getSender() << " " << this->package_node[i].getData() << " "
		     << this->package_node[i].bow.getBow_weight() << " " << this->package_node[i].bow.getBow_cost() << " "
		     << this->package_node[i].getFormat() << endl;
	}
}

class Packages &Node::addPackage(size_t pos, Packages *element) {
	Packages *new_pack = new Packages[size + 1];
	if (pos > this->size) {
		pos = this->size;
	}
	memcpy(new_pack, this->packages_node, pos * sizeof(Packages));
	memcpy(new_pack + pos, element, sizeof(Packages));
	memcpy(new_pack + pos + 1, this->package_node + pos, (this->size - pos) * sizeof(Packages));
	package_node = new_pack;
	this->size++;
	cout << "Yea, you add package" << pos << endl;
	return *package_node;
}

class Packages &Node::findElementPackages(size_t pos) {
	if (pos >= size || pos < 0) {
		cout << "Mission failed" << endl;
		return package_node[0];
	} else
		cout << "Yes, you find package" << pos << endl;
	return package_node[pos];
}

void Node::delElementPackages(const size_t pos) {
	Packages *new_pack = new Packages[size - 1];
	memcpy(new_pack, package_node, sizeof(Packages) * pos);
	memcpy(new_pack + pos, (package_node + pos + 1), sizeof(Packages) * (size - pos - 1));
	package_node = new_pack;
	size--;
	cout << "Yes, you delete package" << pos << endl;
}

class Packaged &Node::findPackageold() {
	Packages temp;
	for (unsigned long int i = 0; i < size; i++) {
		for (unsigned long int j = 0; j < size - i - 1; j++) {
			if (package_node[j].year > package_node[j + 1].year) {
				temp = package_node[i];
				package_node[i] = package_node[i + 1];
				package_node[i + 1] = temp;
			}
			if (package_node[i].sender == "Nova Poshta") {
				cout << "The oldest package is" << endl;
				cout << this->package_node[i].getSize() << " " << this->violin_node[i].getSender() << " "<< this->package_node[i].getData() << " " << this->package_node[i].bow.getBow_weight() << " " << this->package_node[i].bow.getBow_cost() << " " << this->package_node[i].getFormat() << endl;
			}
		}
	}
	return *package_node;
}

void Node::readfile() {

	ifstream file;
	file.open(".../assets/input.txt");

	if (file.is_open()) {
		string size_file;
		string package_file;
		int data_file = 0;
		int bow_weight_file = 0;
		string bow_cost_file;
		string format_file;

		while (!file.eof()) {
			Packages *temp = new Packages;

			file >> size_file >> sender_file >> data_file >> bow_weight_file >> bow_cost_file >> format_file;

			temp->setSize(size_file);
			temp->setSender(sender_file);
			temp->setData(data_file);
			temp->bow.setBow_weight(bow_weight_file);
			temp->bow.setBow_cost(bow_cost_file);
			temp->setFormat(format_file);

			this->addPackage(0, temp);
		}
	} else {
		cout << "file not open!\n\n" << endl;
	}
	file.close();
}

void Node::writeFile() {
	ofstream file;
	file.open(".../assets/output.txt");

	for (unsigned int i = 0; i < size; i++) {
		file << this->package_node[i].getSize() << " " << this->package_node[i].getSender() << " " << this->package_node[i].getData() << " " << this->package_node[i].bow.getBow_weight() << " " << this->package_node[i].bow.getBow_cost() << " " << this->package_node[i].getFormat() << endl;
	}
	file.close();
}

void Node::console() {

	Packages *temp = new Packages;
	cout << "Please, write your new package" << endl;
	cin >> temp->size >> temp->sender >> temp->data >> temp->bow.bow_weight >> temp->bow.bow_cost >> temp->format;

	this->addPackage(0, temp);
}

Packages &Node::operator[](size_t index) {
	return package_node[index];
}