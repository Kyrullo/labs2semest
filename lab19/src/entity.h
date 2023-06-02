#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
#include <fstream>
using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::istream;


class Package {

    private:
	string size;
	string sender;
	int data;

	class bow {
	    private:
		int bow_weight;
		string bow_cost;

	    public:
		string getBow_cost();
		void setBow_cost(string bow_cost);
		int getBow_weight();
		void setBow_weight(int bow_weight);
		friend class Package;
		friend class Node;
	} bow;
	string format;


    public:
	Packages(const string size, const string sender, const int data, const int bow_weight, const string bow_cost,
		const string format);
	Packages();
	

    void setSize(string size);
	
    string getSender();
	
    void setSender(string sender);
	
    int getData();
	
    void setData(int data);
	
    string getFormat();
	
    void setFormat(string format);
	
	string& toString();
	
    void operator = (const Packages &v);

	bool operator == (const Packages &v);
	
	bool operator > (const Packages &v);
	
	friend class Node;

};