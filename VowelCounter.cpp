// Week 04 Programming Assignment.cpp : Vowel Counter

/* ********************************************************************************************************************************************************************************************************************

    Create a program that counts the number of vowels in a file.

        Requirements:

        * User must specify the name of the file (from the command line) to analyze when the program is run. If not an error should be generated.
        * Use I/O (stream) manipulators to format the output so that it is identical to the example below
        * Pass the name of the file to read in from the command line.

        * Add three more letters for the program to count


******************************************************************************************************************************************************************************************************************** */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;



int main(int argc, char* argv[])
{
    if (argc < 2)                                                           // If the user does not enter the executable and a file name, show error message and exit the program.
    {
        cout << "Error with input. Enter the executable name and a file name." << endl;
        return 1;
    }




    string fileName;                                                        // Store the user's entered file name as a string
    fileName = argv[1];

    ifstream inputFile;                                                     // Open the user's file
    inputFile.open(argv[1]);



    if (!inputFile)                                                        // If the file doesn't open, show an error message and exit the program.
    {
        cout << "Could not open the file" << endl;

        return 1;
    }
    else                                                                   // If the file is opened...  
    {

        cout << setfill('*');                                                           // Display the heading/welcome message   
        cout << setw(62) << left << "\n " << endl;
        cout << " ************ Welcome to My Letter Count Program ************" << endl;
        cout << setw(61) << left << " " << endl;


        cout << "\nAnalyzing file " << "\'" << fileName << "\'" << "..." << endl;       // Message that shows the user the name of the file which is being read




        char letter;            // Variable to store characters being read

        int aCounter = 0;       // Int variables to keep track of the number of times each character appears
        int eCounter = 0;
        int iCounter = 0;
        int oCounter = 0;
        int uCounter = 0;
        int xCounter = 0;
        int kCounter = 0;
        int cCounter = 0;
        int dCounter = 0;



        while (!inputFile.eof() && inputFile >> letter) // While the file is still being read, and while letters are being read into the char variable...
        {

            if (letter == 'a' || letter == 'A')             // Add 1 to the letter counter for each time that letter is read into the char variable
            {
                aCounter++;
            }
            if (letter == 'e' || letter == 'E')
            {
                eCounter++;
            }
            if (letter == 'i' || letter == 'I')
            {
                iCounter++;
            }
            if (letter == 'o' || letter == 'O')
            {
                oCounter++;
            }
            if (letter == 'u' || letter == 'U')
            {
                uCounter++;
            }
            if (letter == 'x' || letter == 'X')
            {
                xCounter++;
            }
            if (letter == 'k' || letter == 'K')
            {
                kCounter++;
            }
            if (letter == 'c' || letter == 'C')
            {
                cCounter++;
            }
            if (letter == 'd' || letter == 'D')
            {
                dCounter++;
            }
        }

        int totalVowels = aCounter + eCounter + iCounter + oCounter + uCounter;                             // Calculate the total times a vowel appears in the file


            // Display the output with all the numbers aligned to the right 
        cout << "\nThe number of A's: " << setw(42) << setfill('.') << right << " " << aCounter << endl;
        cout << "The number of E's: " << setw(42) << setfill('.') << right << " " << eCounter << endl;
        cout << "The number of I's: " << setw(42) << setfill('.') << right << " " << iCounter << endl;
        cout << "The number of O's: " << setw(42) << setfill('.') << right << " " << oCounter << endl;
        cout << "The number of U's: " << setw(42) << setfill('.') << right << " " << uCounter << endl;
        cout << "The number of X's: " << setw(42) << setfill('.') << right << " " << xCounter << endl;
        cout << "The number of K's: " << setw(42) << setfill('.') << right << " " << kCounter << endl;
        cout << "The number of C's: " << setw(42) << setfill('.') << right << " " << cCounter << endl;
        cout << "The number of D's: " << setw(42) << setfill('.') << right << " " << dCounter << endl;
        cout << "\nThe vowel count is:" << setw(42) << setfill('.') << right << " " << totalVowels << endl;



        inputFile.close();      // Close the file
    }




    system("pause");
    return 0;
}