#ifndef __DATA_H__
#define __DATA_H__ 

#include <assert.h>
#include <iostream>
#include <bitset>
#include <algorithm>
#include <iterator>
#include <boost/dynamic_bitset.hpp>

enum data_t
{
	DATA_TOTAL = 0,
	DATA_SEGMENT,
	DATA_PAQUET,
	DATA_TRAME
};	

class Data {
private:
	boost::dynamic_bitset<unsigned char>* seq;
	data_t type;

	std::string strtobinary(std::string msg);


public:
	Data(std::string message);
	Data(boost::dynamic_bitset<unsigned char>* seq, data_t type = DATA_SEGMENT);
	Data(const Data& d);
	~Data();


    data_t getType(void) const {return this->type;}
    boost::dynamic_bitset<unsigned char>* getSeq(void) const {return this->seq;}

	void setType (data_t _type);
	void setSeq (boost::dynamic_bitset<unsigned char>* _seq);

	int operator[](int index);
	friend std::ostream& operator<<(std::ostream &os, Data& d);
};


#endif