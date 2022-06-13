# Library-Management-System
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
    cout << "***********************LIBRARY MANAGEMENT SYSTEM***********************" << endl;
    cout << "Option 1: New User" << endl;
    cout << "Option 2: Existence User" << endl;
    cout << "Option 3: Adding Books" << endl;
    cout << "Option 4: Books in library" << endl;
    cout << "Option 5: Adding Defaulter Name" << endl;
    cout << "Option 6: Existence Defaulter" << endl;
    int option;
    cout << "Enter the option: ";
    cin >> option;
    if(option==1)
    {
        char name_of_student[100];
        int class_of_student,roll_number_of_student;
        cout << "Enter the class: " << endl;
        cin >> class_of_student;
        cout << "Enter the roll number: " << endl;
        cin >> roll_number_of_student;
        cout << "Enter the name: " << endl;
        cin >> name_of_student;
        fstream recordFile;
        recordFile.open("StudentRecord.txt",ios::app);
        if(recordFile.is_open())
        {
            recordFile << name_of_student << "      " << class_of_student << "      " << roll_number_of_student << endl;
            recordFile.close();
        }
    }
    else if(option==2)
    {
        cout << "Name" << "     " << "Class" << "     " << "Roll Number" << endl;
        fstream recordFile;
        recordFile.open("StudentRecord.txt",ios::in);
        if(recordFile.is_open())
        {
            string line;
            while(getline(recordFile,line))
            {
                cout << line << endl;
            }
            recordFile.close();
        }
    }
    else if(option==3)
    {
        char books_name[100],author[100];
        int book_quantity;
        cout << "Enter the name of the book: " << endl;
        cin >> books_name;
        cout << "Enter the author name: " << endl;
        cin >> author;
        cout << "Enter the quantity of book: " << endl;
        cin >> book_quantity;
        fstream BooksList;
        BooksList.open("BooksRecord.txt",ios::app);
        if(BooksList.is_open())
        {
            BooksList << books_name << "        " << author << "        " << book_quantity << endl;
            BooksList.close();
        }
    }
    else if(option==4)
    {
        cout << "Book Name" << "     " << "Author" << "     " << "Quantity" << endl;
        fstream BooksList;
        BooksList.open("BooksRecord.txt",ios::in);
        if(BooksList.is_open())
        {
            string line;
            while(getline(BooksList,line))
            {
                cout << line << endl;
            }
            BooksList.close();
        }
    }
    else if(option==5)
    {
        char name_of_student[100];
        int class_of_student,roll_number_of_student;
        cout << "Enter the class: " << endl;
        cin >> class_of_student;
        cout << "Enter the roll number: " << endl;
        cin >> roll_number_of_student;
        cout << "Enter the name: " << endl;
        cin >> name_of_student;
        fstream recordFile;
        recordFile.open("defaulterRecord.txt",ios::app);
        if(recordFile.is_open())
        {
            recordFile << name_of_student << "      " << class_of_student << "      " << roll_number_of_student << endl;
            recordFile.close();
        }
    }
    else if(option==6)
    {
        cout << "Name" << "     " << "Class" << "     " << "Roll Number" << endl;
        fstream recordFile;
        recordFile.open("defaulterRecord.txt",ios::in);
        if(recordFile.is_open())
        {
            string line;
            while(getline(recordFile,line))
            {
                cout << line << endl;
            }
            recordFile.close();
        }
    }
    return 0;
}