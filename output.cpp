//Bimsillah-AbuabkarQ
// Output.cpp is a refernce file used to refernce how to write to output files 

//Begin with starting template:
#include <iostream> 
#include <fstream> // Crucial library to include when working with files
using namespace std;

int main() { // main program is here

    ofstream /* ofstream is the variable */ file /* file is the name given to the variable */ ("Test.txt");
    // ("Test.txt") is the name of the file we will be working with

    ofstream File2 ("File2_textfile.txt");
    // second variable file 2 created

    file << "This first line will write the first line onto the file\n";
    // We only used the name of the file instead of cout, this will write anything to Test.txt

    File2 << "This will write out to File2_textfile.txt on it's first line\n";
    // Again, writing to second file 

    file.close();
    File2.close();
    // good practice to close each file after opening them. 
                                                                            
    return 0; 
}