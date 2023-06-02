#include "entity.h"

string Package::bow::getBow_cost() {
	return bow_cost;
}

void Package::bow::setBow_cost(string Bow_cost) {
	this->bow_cost = Bow_cost;
}

int Package::bow::getBow_weight() {
	return bow_weight;
}

void Package::bow::setBow_weight(int Bow_weight) {
	this->bow_weight = Bow_weight;
}

Package::Package(const string size, const string sender, const int data, const int bow_weight, const string bow_cost,
		 const string format) {
	this->size = size;
	this->sender = sender;
	this->data = data;
	this->bow.bow_weight = bow_weight;
	this->bow.bow_cost = bow_cost;
	this->format = format;
}

string& Package::toString() {
    stringstream a;
    string *b = new string;
    a <<getSize()<<" "<<getSendet()<<" "<<getData()<<" "<<bow.getBow_weight()<<" "<<this->bow.getBow_cost()<<" "<<this->getFormat();
    *b = a.str();
    cout<< *b;
    delete b;
    return *b;
}

Package::Package() {
}

string Package::getSize() {
	return size;
}

void Package::setSize(string Size) {
	this->size = Size;
}

string Package::getSender() {
	return sender;
}

void Package::setSendet(string Sender) {
	this->sender = Sender;
}

int Package::getData() {
	return data;
}

void Package::setData(int Data) {
	this->data = Data;
}

string Package::getFormat() {
	return format;
}

void Package::setFormat(string Format) {
	this->format = Format;
}