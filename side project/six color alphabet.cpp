#include "include/color.hpp"
#include <iostream>
#include <cstring>
using namespace std;
#define MAXSPACE 25
struct colorL {
    string letter;
    string color;
    int length;
};
int list(){
// "M"
    colorL myColorL1;
    myColorL1.letter = "M";
    myColorL1.color = "green";
    myColorL1.length = 1;

// "B"
    colorL myColorL2;
    myColorL2.letter = "B";
    myColorL2.color = "green";
    myColorL2.length = 2;    
  
// "P"
    colorL myColorL3;
    myColorL3.letter = "P";
    myColorL3.color = "green";
    myColorL3.length = 3;

// "I"
    colorL myColorL4;
    myColorL4.letter = "I";
    myColorL4.color = "green";
    myColorL4.length = 4;

// "W"
    colorL myColorL5;
    myColorL5.letter = "W";
    myColorL5.color = "cyan";
    myColorL5.length = 1;

// "V"
    colorL myColorL6;
    myColorL6.letter = "V";
    myColorL6.color = "cyan";
    myColorL6.length = 2;    
  
// "F"
    colorL myColorL7;
    myColorL7.letter = "F";
    myColorL7.color = "cyan";
    myColorL7.length = 3;

// "E"
    colorL myColorL8;
    myColorL8.letter = "E";
    myColorL8.color = "cyan";
    myColorL8.length = 4;      

// "L"
    colorL myColorL9;
    myColorL9.letter = "L";
    myColorL9.color = "blue";
    myColorL9.length = 1;

// "D"
    colorL myColorL10;
    myColorL10.letter = "D";
    myColorL10.color = "blue";
    myColorL10.length = 2;    
  
// "T"
    colorL myColorL11;
    myColorL11.letter = "T";
    myColorL11.color = "blue";
    myColorL11.length = 3;

// "A"
    colorL myColorL12;
    myColorL12.letter = "A";
    myColorL12.color = "blue";
    myColorL12.length = 4; 

// "R"
    colorL myColorL13;
    myColorL13.letter = "R";
    myColorL13.color = "purple";
    myColorL13.length = 1;

// "Z"
    colorL myColorL14;
    myColorL14.letter = "Z";
    myColorL14.color = "purple";
    myColorL14.length = 2;    
  
// "S"
    colorL myColorL15;
    myColorL15.letter = "T";
    myColorL15.color = "purple";
    myColorL15.length = 3;

// "O"
    colorL myColorL16;
    myColorL16.letter = "O";
    myColorL16.color = "purple";
    myColorL16.length = 4;
    
// "Y"
    colorL myColorL17;
    myColorL17.letter = "Y";
    myColorL17.color = "red";
    myColorL17.length = 1;

// "J"
    colorL myColorL18;
    myColorL18.letter = "J";
    myColorL18.color = "red";
    myColorL18.length = 2;    
  
// "C"
    colorL myColorL19;
    myColorL19.letter = "C";
    myColorL19.color = "red";
    myColorL19.length = 3;

// "U"
    colorL myColorL20;
    myColorL20.letter = "U";
    myColorL20.color = "red";
    myColorL20.length = 4;

// "N"
    colorL myColorL21;
    myColorL21.letter = "N";
    myColorL21.color = "yellow";
    myColorL21.length = 1;

// "G"
    colorL myColorL22;
    myColorL22.letter = "G";
    myColorL22.color = "yellow";
    myColorL22.length = 2;    
  
// "K"
    colorL myColorL23;
    myColorL23.letter = "K";
    myColorL23.color = "yellow";
    myColorL23.length = 3;

// "H"
    colorL myColorL24;
    myColorL24.letter = "H";
    myColorL24.color = "yellow";
    myColorL24.length = 4;

// "Q"
    colorL myColorL25;
    myColorL25.letter = "Q";
    myColorL25.color = "gray";
    myColorL25.length = 3;

// "X"
    colorL myColorL26;
    myColorL26.letter = "X";
    myColorL26.color = "gray";
    myColorL26.length = 3;                  

}
int main(){

// input message 
string s;
	cout << "Message to encrypt";
	cin >> s;

//TOKENIZE THE MESSAGE
	// assigning value to string s
	//TEST CASE 1
	int n = s.length();
	// declaring character array
	char char_array[n + 1];
	// copying the contents of the
	// string to char array
	strcpy(char_array, s.c_str());

	for (int i = 0; i < n; i++)
		cout << char_array[i];
        cout<< endl;
    for (int i = 0; i < n; i++)
		cout << dye::aqua(char_array[i]);
        cout<< endl;

    //TEST CASE 2
    string s2 = "geeksforgeeks";
    int n2 = s2.length();
	// declaring character array
	char char_array2[n + 1];
	// copying the contents of the
	// string to char array
	strcpy(char_array2, s2.c_str());

	for (int i = 0; i < n2; i++)
		cout << char_array2[i];
        cout<< endl;
    for (int i = 0; i < n2; i++)
		cout << dye::yellow(char_array2[i]);
        cout<< endl;



//encode message

//output message

    //cout << dye::aqua("Hello, World!") << endl;
    return 0;

}

