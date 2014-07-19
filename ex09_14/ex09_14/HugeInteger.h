#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H
class HugeInteger {
public:
	HugeInteger(int = 0); // ת����Ҳ��Ĭ�Ϲ��캯��
	HugeInteger(const char *); // ����char����Ĺ��캯��
	// ��HugeInteger operator; HugeInteger + HugeInteger
	HugeInteger add(const HugeInteger &);
	// ��int operator; HugeInteger + int
	HugeInteger add(int);
	// ��char���� operator;
	// HugeInteger + string that represents large integer value
	HugeInteger add(const char *);
	
	// ��HugeInteger operator; HugeInteger - HugeInteger
	HugeInteger subtract(const HugeInteger &);
	// ��int operator; HugeInteger - int
	HugeInteger subtract(int);
	// ��char���� operator;
	// HugeInteger - string that represents large integer value
	HugeInteger subtract(const char *);
	
	bool isEqualTo(HugeInteger &); // is equal to
	bool isNotEqualTo(HugeInteger &); // not equal to
	bool isGreaterThan(HugeInteger &); // greater than
	bool isLessThan(HugeInteger &); // less than
	bool isGreaterThanOrEqualTo(HugeInteger &); // greater than
	// or equal to
	bool isLessThanOrEqualTo(HugeInteger &); // less than or equal
	bool isZero(); // is zero
	void input(const char *); // input
	void output(); // output
private:
	int integer[40]; // 40 element array
}; // end class HugeInteger

#endif
