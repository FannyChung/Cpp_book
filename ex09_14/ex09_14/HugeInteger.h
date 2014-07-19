#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H
class HugeInteger {
public:
	HugeInteger(int = 0); // 转换，也是默认构造函数
	HugeInteger(const char *); // 接受char数组的构造函数
	// 加HugeInteger operator; HugeInteger + HugeInteger
	HugeInteger add(const HugeInteger &);
	// 加int operator; HugeInteger + int
	HugeInteger add(int);
	// 加char数组 operator;
	// HugeInteger + string that represents large integer value
	HugeInteger add(const char *);
	
	// 减HugeInteger operator; HugeInteger - HugeInteger
	HugeInteger subtract(const HugeInteger &);
	// 减int operator; HugeInteger - int
	HugeInteger subtract(int);
	// 减char数组 operator;
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
