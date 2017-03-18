#include "headers/hacks.h"

using namespace std;

void hackDataTypes(){

	//cout << "Size of Int :"<< sizeof(int) << endl;
	printSizeOf("short int",((short)2));
	printSizeOf("int",12);
	printSizeOf("unsigned int",12u);
	printSizeOf("long",23l);
	printSizeOf("unsigned long",23ul);
	printSizeOf("octal",0213);
	printSizeOf("hexadecimal",0x4b);
	printSizeOf("float",3.14f);
	printSizeOf("double",2.0);
	printSizeOf("boolean",true);
	printSizeOf("char",'e');
	printSizeOf("wchar_t",L'x');

	cout<< "Limits of data types are . . ."<<endl;
	cout<< "short int maximum => "<<numeric_limits<short int>::max()<<" minimum => "<<numeric_limits<short int>::min()<<endl;
	cout<< "short unsigned int maximum => "<<numeric_limits<short unsigned int>::max()<<" minimum => "<<numeric_limits<short unsigned int>::min()<<endl;
	cout<< "int maximum => "<<numeric_limits<int>::max()<<" minimum => "<<numeric_limits<int>::min()<<endl;
	cout<< "unsigned int maximum => "<<numeric_limits<unsigned int>::max()<<" minimum => "<<numeric_limits<unsigned short int>::min()<<endl;
	cout<< "long maximum => "<<numeric_limits<long>::max()<<" minimum => "<<numeric_limits<long>::min()<<endl;
	cout<< "unsigned long maximum => "<<numeric_limits<unsigned long>::max()<<" minimum => "<<numeric_limits<unsigned long>::min()<<endl;
	cout<< "long maximum => "<<numeric_limits<long>::max()<<" minimum => "<<numeric_limits<long>::min()<<endl;
	cout<< "float => "<<numeric_limits<float>::max()<<" minimum => "<<numeric_limits<float>::min()<<endl;
	cout<< "double => "<<numeric_limits<double>::max()<<" minimum => "<<numeric_limits<double>::min()<<endl;
	cout<< "boolean => "<<numeric_limits<bool>::max()<<" minimum => "<<numeric_limits<bool>::min()<<endl;
	cout<< "char => "<<numeric_limits<char>::max()<<" minimum => "<<numeric_limits<char>::min()<<endl;
    cout<< "wchar_t => "<<numeric_limits<wchar_t>::max()<<" minimum => "<<numeric_limits<wchar_t>::min()<<endl;
}

template<typename T> void printSizeOf(string text,T t){
	cout<< "Size of "<< text<<":"<< sizeof(t)<<endl;
}
