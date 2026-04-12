// #include <iostream>
// #include <limits>
// #include "LinkedList.h"

// using namespace std;

// int main()
// {
//     LinkedList list;

//     int choice, id, year;
//     string name;

//     do
//     {
//         cout << "\n===== MENU =====\n";
//         cout << "1. Add Student\n";
//         cout << "2. Display Students\n";
//         cout << "3. Search Student\n";
//         cout << "4. Delete Student\n";
//         cout << "5. Update Student\n";
//         cout << "0. Exit\n";

//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             cin.ignore(numeric_limits<streamsize>::max(), '\n');

//             cout << "Enter Name: ";
//             getline(cin, name);

//             cout << "Enter ID: ";
//             cin >> id;

//             cout << "Enter Year: ";
//             cin >> year;

//             list.addStudent(id, name, year);
//             break;

//         case 2:
//             list.display();
//             break;

//         case 3:
//             cout << "Enter ID: ";
//             cin >> id;
//             list.search(id);
//             break;

//         case 4:
//             cout << "Enter ID: ";
//             cin >> id;
//             list.deleteStudent(id);
//             break;

//         case 5:
//             cout << "Enter ID: ";
//             cin >> id;
//             list.update(id);
//             break;
//         }

//     } while (choice != 0);

//     return 0;
// }