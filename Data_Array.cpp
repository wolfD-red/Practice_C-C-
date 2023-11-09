#include <iostream>
using namespace std;

int User_record = 0;
const int Record = 61;
string storage_data[Record][6];

void Show_Menu();
void View_Data();
void Add_Data();

int main()
{
    int choice;

    do
    {

        Show_Menu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            View_Data();
            break;

        case 2:
            Add_Data();
            break;

        case 3:

            int exit;

            cout << "Are you Sure you want to Exit?\n";
            cout << "  1.YES\n  ";
            cout << "  2.NO\n  ";
            cin >> exit;

            if (exit == 1)
            {
                cout << "Thank you! Rest assured that your information is well kept.\n";
                return 0;
            }
            else if (exit == 2)
            {
                choice = 1;
            }
            break;

        default:
            cout << "Error: INVALID CHOICE\n";
            break;
        }

    } while (choice != 3);

    return 0;
}






void Show_Menu()
{

    cout << '\n';
    cout << "        INFORMATION SYSTEM" << '\n';
    cout << '\n';

    cout << "************************************\n";
    cout << "            SELECT MENU \n";
    cout << "************************************\n";

    cout << "1. View Data\n";
    cout << "2. Add Data\n";
    cout << "3. Exit\n";
}

void View_Data()
{

    if (User_record == 0)
    {
        cout << '\n';
        cout << "ERROR: Input Data First\n";
    }

    else
    { //          0       1       2       3        4         5
        cout << "Name / Age / Gender / Number / Address / Email /\n";

        // outer loop
        for (int i = 0; i < User_record; i++)
        {
            // inner loop
            for (int j = 0; j < 6; j++)
            {
                cout << storage_data[i][j] << " / ";
            }
            cout << '\n';
        }
    }
}

void Add_Data()
{
    string name, gender, contact, address, email;
    int age;

    cout << "Enter Full Name: ";
    cin.ignore();
    getline(std::cin, name);

    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Gender: ";
    cin >> gender;

    cout << "Contact Number: ";
    cin.ignore();
    getline(cin, contact);

    cout << "Address: ";
    getline(cin, address);

    cout << "Email Address: ";
    cin >> email;

    storage_data[User_record][0] = name;
    storage_data[User_record][1] = to_string(age);
    storage_data[User_record][2] = gender;
    storage_data[User_record][3] = contact;
    storage_data[User_record][4] = address;
    storage_data[User_record][5] = email;
    User_record++;
}
