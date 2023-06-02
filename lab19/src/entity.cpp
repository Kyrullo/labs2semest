#include "entity.h"

string Package::bow::getBow_cost() {
	return bow_cost;
}

void Packages::bow::setBow_cost(string Bow_cost) {
	this->bow_cost = Bow_cost;
}

int Packages::bow::getBow_weight() {
	return bow_weight;
}

void Packages::bow::setBow_weight(int Bow_weight) {
	this->bow_weight = Bow_weight;
}

Packages::Packages(const string size, const string sender, const int data, const int bow_weight, const string bow_cost,
		 const string format) {
	this->size = size;
	this->sender = sender;
	this->data = data;
	this->bow.bow_weight = bow_weight;
	this->bow.bow_cost = bow_cost;
	this->format = format;
}

string& Packages::toString() {
    stringstream a;
    string *b = new string;
    a <<getSize()<<" "<<getSender()<<" "<<getData()<<" "<<bow.getBow_weight()<<" "<<bow.getBow_cost()<<" "<<getFormat();
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

void Packages::operator = (const Packages &v) {
    this->size = v.size;
    this->sender = v.sender;
    this->data = v.data;
    this->bow.bow_weight = v.bow.bow_weight;
    this->bow.bow_cost = v.bow.bow_cost;
    this->format = v.format;
}

bool Packages::operator == (const Packages &v) {
    bool Size = (this->size == v.size);
        if(!Size) return false;
    bool Sender = (this->sender == v.sender);
        if(!Sender) return false;
    bool Data = (this->data == v.data);
        if(!Data) return false;
    bool Bow_weight = (this->bow.bow_weight == v.bow.bow_weight);
        if(!Bow_weight) return false;
    bool Bow_cost = (this->bow.bow_cost == v.bow.bow_cost);
        if(!Bow_cost) return false;
    bool Format = (this->format == v.format);
        if(!Format) return false;
    return true;
}

bool Violins::operator > (const Packages &v) {
	    bool Size = (this->size > v.size);
        if(!Size) return true;
    bool Sender = (this->sender < v.sender);
        if(!Sender) return false;
    bool Data = (this->data > v.data);
        if(!Data) return true;
    bool Bow_weight = (this->bow.bow_weight < v.bow.bow_weight);
        if(!Bow_weight) return false;
    bool Bow_cost = (this->bow.bow_cost > v.bow.bow_cost);
        if(!Bow_cost) return true;
    bool Format = (this->format < v.format);
        if(!Format) return false;
    return true;
}