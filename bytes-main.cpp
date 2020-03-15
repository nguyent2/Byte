/** L06: Bytes
(https://docs.google.com/document/d/1BvbnKcN1xBYoNIQrv0XQOFmafxjr9o1LsGloj9gAp-Q/edit#heading=h.c1x99npetnfu)

Thy H. Nguyen
Username: nguyent2
Purpose: To learning about bits, bytes, and binary
and to reinforce work with arrays and classes in C++.

Lab designed to learn about bits, bytes, and binary
and to reinforce working with C++ classes and arrays

Acknowledgements:
Modified from original stub code written by Dr. Jan Pearce
Resources: To be updated
*/

#include <iostream>
using namespace std;

class Bytes {
public:
	Bytes() {} //default constructor sets all member variables.


	Bytes(bool tempbyte[8]) {
		for (int i = 0; i < bytelen; i++) {
			byte[i] = tempbyte[i];
		}
	}


	void set_byte() { //mutator method sets byte from keyboard

		bool readbit;

		for (int i = 0; i < bytelen-1; i++) {
			cout << "Please enter bit " << i << ": ";
			cin >> readbit;
			byte[i] = readbit;
		}

		cout << endl;
		return;
	}


	bool is_odd() {
		count = 0;
		for (int i = 0; i < bytelen-1; i++) {
			if (byte[i] == 1) {
				count += 1;
			}
		}
		if ((count == 1) || (count == 3) || (count == 5) || (count == 7)) {
			return true;
		}
		else
		{
			return false;
		}
	}

	void set_even() {
		if (is_odd() == true) {
			byte[7] = 1;
		}
		
	}

	void set_odd() {
		if (is_odd() == false) {
			byte[7] = 0;
		}
	}

	bool array_value() {
	
		for (int i = 0; i < bytelen; i++) {
			byte[i] = byte[i];
		}

		return byte;
	}

	void flipping() {


		for (int i = 0; i < bytelen; i++) {
			if (byte[i] == true) {
				byte[i] = false;
			}
			else
				byte[i] = true;
		}
	}

	
	void apply_mask(bool mask[8]) {
		for (int i = 0; i < bytelen; i++) {
			if (mask[i] == true) {
				byte[i] = byte[i];
			}
			else {
				byte[i] = 0;
				}
				
			}
		
	}
	
	
	

		void show_byte() const{
			for (int i = 0; i < bytelen; i++) {
				cout << byte[i];
			}
			return;
		}

		friend ostream &operator<<(ostream &stream,const Bytes &mybytes); 

private:
	bool byte[8] = { false }; //This initializes all of the bits
	const int bytelen = 8;
	int count;
};

ostream &operator<<(ostream &stream, const Bytes &mybytes) { //get the operator reference into the stream, before that get the stream and reference into ostream. 
	mybytes.show_byte();
	return stream; // return the stream
}

int main() {

	bool truebyte[8] = { false, true, true, true, true, true, true, true }; // this style of initalization only works at compile time
	int readchar = 'Y';

	cout << "Welcome to the Bytes class!\n" << endl;

	Bytes testbyte;
	Bytes mybyte(truebyte);  // uses contructor that sets byte using parameter

	testbyte.set_byte();
	testbyte.set_even();
	testbyte.is_odd();
	testbyte.array_value();
	
	cout << "Here is the byte you entered: ";

	cout << testbyte<< endl;
	cout << "Here is the flipping ";
	testbyte.flipping();
	cout << testbyte << endl;


	cout << "Here is anthor byte: ";
	cout << mybyte<<endl;
	
	cout << "Here is after applying the mask ";
	testbyte.apply_mask(truebyte);
	cout << testbyte << endl;


	cin >> readchar; //This is to keep screen open in some situations.

	return 0;
}

