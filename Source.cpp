#include <iostream>
#include <string>
using namespace std;

int main()//System registration of workers
{
    system("color 1A");
    int command, exit1 = 1;
    string password,name, surname,email, NumberOfPhone;
    int age, work, TypeSalary, otvet, forReal;
    cout << endl;
    cout << "\t We welcome you to our company #WATER TIME# " << endl;
    cout << "\t What do you want?" << endl;
    cout << "\t 1. Ask about salary.                   (write 1)" << endl;
    cout << "\t 2. Register for work.                  (write 2)" << endl;
    cout << "\t 3. Contact the director of the company.(write 3)" << endl;
    cout << "\t 4. See information about yourself.     (write 4)" << endl;
    cout << "\t 5. Exit.                               (write 5)" << endl << "   \t";
    cin >> command;
   

    while (command != 5) {
        system("CLS");
        while (exit1 != 0) {
            if (command == 1) {
                system("CLS");
                cout << endl;
                cout << "\t Cleaner:                  Waiter:\n     if 1 day --- 5$                  if 1 day --- 5,5$ \n     if 1 month --- 150$                  if 1 month --- 165$" << endl;
                cout << "\t Trainee cook:                  Cashier: \n     if 1 day --- 5,6$                  if 1 day --- 5,8$ \n     if 1 month --- 168$                  if 1 month --- 174$" << endl;
                cout << "\t Bartender:                  Accountant: \n     if 1 day --- 6$                  if 1 day --- 10$ \n     if 1 month --- 180                  $if 1 month --- 300$" << endl;               
                cout << "\t Procurer Chef: \n     if 1 day --- 13,5$ \n     if 1 month --- 405$" << endl;
                cout << "\t CHef:                  Pastry Chef: \n     if 1 day --- 15$                  if 1 day --- 16$ \n     if 1 month --- 450$                  if 1 month --- 480$" << endl;                
                cout << "\t Administrator:                  Senior Chef: \n     if 1 day --- 17$                  if 1 day --- 19$ \n     if 1 month --- 510$                  if 1 month --- 570$" << endl;             
                cout << endl;
                cout << "\t Write 0 to go back." << endl << "   \t";
                cin >> exit1;

            }
            else if (command == 2) {
                system("CLS");
                cout << endl;
                cout << "\t Welcome again!" << endl << "\t Write your name." << endl << "   \t";
                cin >> name;
                cout << "\t Write your surname." << endl << "   \t";
                cin >> surname;
                cout << "\t Write your number." << endl << "\t+998 ";
                cin >> NumberOfPhone;
                getline(cin,NumberOfPhone);
                cout << "\t Write your email(name of account)." << endl << "   \t";
                cin >> email;
                cout << "\t Create a password" << endl << "   \t";
                cin >> password;
                cout << "\t How old are you?" << endl << "   \t";
                cin >> age;
                system("CLS");

                if (age < 18)
                    cout << endl << "\t Sorry you are so young, come when you are 18. " << endl;
                else if (age > 40)
                    cout << endl <<"\t Sorry we can't accept you" << endl;
                else if (age < 40 && age >= 18) {
                    cout << endl;
                    cout << "\t What do you want to work?(1.Cleaner,2.Waiter,3.Trainee cook,4.Cashier)" << endl;
                    cout << "\t                          (5.Bartender,6.Accountant,7.Procurer Chef)" << endl;
                    cout << "\t                          (8.Chef,9.Pastry Chef,10.Senior Chef) " << endl <<"   \t";
                    cin >> work;
                    system("CLS");
                    if (work == 1) {
                        cout << endl << "\t Your salary if 1 day --- 5$      if 1 month --- 150$" << endl;
                        cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   ";
                        cin >> TypeSalary;
                        if (TypeSalary == 2 || TypeSalary == 1) {
                            cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time."<<endl;
                        }
                        else {
                            cout << "\t Please choose 1.day or 2.month" << endl;
                        }
                        cout << "\t And your badge is like this." << endl;
                        cout << "\t       ----------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Cleaner          " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ---------------------------------- " << endl << endl;

                    }
                    else if (work == 2) {
                        cout << endl << "\t Your salary if 1 day --- 5,5$      if 1 month --- 165$" << endl;
                        cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   ";
                        cin >> TypeSalary;
                        if (TypeSalary == 1 || TypeSalary == 2) {
                            cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                        }
                        else {
                            cout << "\t Please choose 1.day or 2.month" << endl;
                        }
                        cout << "\t And your badge is like this." << endl;
                        cout << "\t       ----------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Waiter           " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ---------------------------------- " << endl << endl;

                    }
                    else if (work == 3) {
                        cout << endl << "\t Your salary if 1 day --- 5,6$      if 1 month --- 168$" << endl;
                        cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   \t";
                        cin >> TypeSalary;
                        if (TypeSalary == 1 || TypeSalary == 2) {
                            cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                        }
                        else {
                            cout << "\t Please choose 1.day or 2.month" << endl;
                        }
                        cout << "\t And your badge is like this." << endl;
                        cout << "\t           -------------------------------------" << endl;
                        cout << "\t          | ########    " << name << "          " << endl;
                        cout << "\t          | #&@##@&#                     " << endl;
                        cout << "\t          | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t          | ########                     " << endl;
                        cout << "\t          | #@####@#    Trainee Cook     " << endl;
                        cout << "\t          | ##@@@@##                     " << endl;
                        cout << "\t           ------------------------------------- " << endl << endl;
                    }
                    else if (work == 4) {
                        cout << endl << "\t Your salary if 1 day --- 5,8$      if 1 month --- 174$" << endl;
                        cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   \t";
                        cin >> TypeSalary;
                        if (TypeSalary == 1 || TypeSalary == 2) {
                            cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                        }
                        else {
                            cout << "\t Please choose 1.day or 2.month" << endl;
                        }
                        cout << "\t And your badge is like this." << endl;
                        cout << "\t           -------------------------------------" << endl;
                        cout << "\t          | ########    " << name << "          " << endl;
                        cout << "\t          | #&@##@&#                     " << endl;
                        cout << "\t          | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t          | ########                     " << endl;
                        cout << "\t          | #@####@#    Cashier          " << endl;
                        cout << "\t          | ##@@@@##                     " << endl;
                        cout << "\t           ------------------------------------- " << endl << endl;
                    }
                    else if (work == 5) {
                        cout << endl << "\t Your salary if 1 day --- 6$      if 1 month --- 180$" << endl;
                        cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   \t";
                        cin >> TypeSalary;
                        if (TypeSalary == 1 || TypeSalary == 2) {
                            cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                        }
                        else {
                            cout << "\t Please choose 1.day or 2.month" << endl;
                        }
                        cout << "\t And your badge is like this." << endl;
                        cout << "\t           -------------------------------------" << endl;
                        cout << "\t          | ########    " << name << "          " << endl;
                        cout << "\t          | #&@##@&#                     " << endl;
                        cout << "\t          | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t          | ########                     " << endl;
                        cout << "\t          | #@####@#    Bartender        " << endl;
                        cout << "\t          | ##@@@@##                     " << endl;
                        cout << "\t           ------------------------------------- " << endl << endl;
                    }
                    else if (work == 6) {
                        cout << endl << "\t Do you have finance education?" << endl;
                        cout << "\t 1.Yes" << endl << "\t 2.No" << endl << "   \t";
                        cin >> otvet;
                        if (otvet == 1) {
                            cout << endl << "\t if 1 day --- 10$      if 1 month --- 300$" << endl;
                            cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   ";
                            cin >> TypeSalary;
                            if (TypeSalary == 1 || TypeSalary == 2) {
                                cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                            }
                            else {
                                cout << "\t Please choose 1.day or 2.month" << endl;
                            }
                            cout << "\t And your badge is like this." << endl;
                            cout << "\t       -------------------------------------" << endl;
                            cout << "\t      | ########    " << name << "          " << endl;
                            cout << "\t      | #&@##@&#                     " << endl;
                            cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                            cout << "\t      | ########                     " << endl;
                            cout << "\t      | #@####@#    Accountant       " << endl;
                            cout << "\t      | ##@@@@##                     " << endl;
                            cout << "\t       ------------------------------------- " << endl << endl;
                        }
                        else if (otvet == 2) {
                            cout << endl << "\t Sorry, we can't accept you, you need finance education ";
                        }
                    }
                    else if (work == 7) {
                        cout << endl <<"\t Do you have 1 month experience as a Trainee Ñook?" << endl;
                        cout << "\t 1.Yes" << endl << "\t 2.No" << endl << "   \t";
                        cin >> otvet;
                        if (otvet == 1) {
                            cout << endl << "\t Your salary if 1 day --- 13,5$      if 1 month --- 405$" << endl;
                            cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   \t";
                            cin >> TypeSalary;
                            if (TypeSalary == 1 || TypeSalary == 2) {
                                cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                            }
                            else {
                                cout << "\t Please choose 1.day or 2.month" << endl;
                            }
                            cout << "\t And your badge is like this." << endl;
                            cout << "\t       -------------------------------------" << endl;
                            cout << "\t      | ########    " << name << "          " << endl;
                            cout << "\t      | #&@##@&#                     " << endl;
                            cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                            cout << "\t      | ########                     " << endl;
                            cout << "\t      | #@####@#    Procurer Chef    " << endl;
                            cout << "\t      | ##@@@@##                     " << endl;
                            cout << "\t       ------------------------------------- " << endl << endl;
                        }
                        else if (otvet == 2) {
                            cout << endl << "\t Sorry, we can't accept you, you need 1 month experience as a Trainee Cook ";
                        }

                    }
                    else if (work == 8) {
                        cout << endl << "\t Do you have red diploma |COOK|" << endl;
                        cout << "\t 1.Yes" << endl << "\t 2.No" << endl << "   \t";
                        cin >> otvet;
                        if (otvet == 1) {
                            cout << endl << "\t Your salary if 1 day --- 5,6$      if 1 month --- 168$" << endl;
                            cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   \t";
                            cin >> TypeSalary;
                            if (TypeSalary == 1 || TypeSalary == 2) {
                                cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                            }
                            else {
                                cout << "\t Please choose 1.day or 2.month" << endl;
                            }
                            cout << "\t And your badge is like this." << endl;
                            cout << "\t       -------------------------------------" << endl;
                            cout << "\t      | ########    " << name << "          " << endl;
                            cout << "\t      | #&@##@&#                     " << endl;
                            cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                            cout << "\t      | ########                     " << endl;
                            cout << "\t      | #@####@#    Chef             " << endl;
                            cout << "\t      | ##@@@@##                     " << endl;
                            cout << "\t       ------------------------------------- " << endl << endl;
                        }
                        else if (otvet == 2) {
                            cout << endl << "\t Sorry, we can't accept you, you need red diploma |COOK| ";
                        }


                    }
                    else if (work == 9) {
                        cout << endl << "\t Do you have red diploma |COOK|" << endl;
                        cout << "\t 1.Yes" << endl << "\t 2.No" << endl << "   \t";
                        cin >> otvet;
                        if (otvet == 1) {
                            cout << endl << "\t Your salary if 1 day --- 16$      if 1 month --- 480$" << endl;
                            cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   \t";
                            cin >> TypeSalary;
                            if (TypeSalary == 1 || TypeSalary == 2) {
                                cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                            }
                            else {
                                cout << "\t Please choose 1.day or 2.month" << endl;
                            }
                            cout << "\t And your badge is like this." << endl;
                            cout << "\t       -------------------------------------" << endl;
                            cout << "\t      | ########    " << name << "          " << endl;
                            cout << "\t      | #&@##@&#                     " << endl;
                            cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                            cout << "\t      | ########                     " << endl;
                            cout << "\t      | #@####@#    Pastry Chef      " << endl;
                            cout << "\t      | ##@@@@##                     " << endl;
                            cout << "\t       ------------------------------------- " << endl << endl;
                        }
                        else if (otvet == 2) {
                            cout << endl << "\t Sorry, we can't accept you, you need red diploma |COOK| ";
                        }
                    }
                    else if (work == 10) {
                        cout << endl << "\t Do you have red diploma of higher culinary |senior cook|" << endl;
                        cout << "\t 1.Yes" << endl << "\t 2.No" << endl << "   \t";
                        cin >> otvet;
                        if (otvet == 1) {
                            cout << endl << "\t Your salary if 1 day --- 19$      if 1 month --- 570$" << endl;
                            cout << "\t Choose type of salary(1.day or 2.month)" << endl << "   \t";
                            cin >> TypeSalary;
                            if (TypeSalary == 1 || TypeSalary == 2) {
                                cout << "\t Allright!We are waiting for you tomorrow at 9:30. For the firs time." << endl;
                            }
                            else {
                                cout << "\t Please choose 1.day or 2.month" << endl;
                            }
                            cout << "\t And your badge is like this." << endl;
                            cout << "\t       -------------------------------------" << endl;
                            cout << "\t      | ########    " << name << "          " << endl;
                            cout << "\t      | #&@##@&#                     " << endl;
                            cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                            cout << "\t      | ########                     " << endl;
                            cout << "\t      | #@####@#    Senior Chef      " << endl;
                            cout << "\t      | ##@@@@##                     " << endl;
                            cout << "\t       ------------------------------------- " << endl << endl;
                        }
                        else if (otvet == 2) {
                            cout << endl << "\t Sorry, we can't accept you, you need red diploma of higher culinary |COOK| ";
                        }
                        
                    }
                    else {
                            system("CLS");
                            cout << endl;
                            cout << "\t What do you want to work?(1.Cleaner,2.Waiter,3.Trainee cook,4.Cashier)" << endl;
                            cout << "\t                          (5.Bartender,6.Accountant,7.Procurer Chef)" << endl;
                            cout << "\t                          (8.Chef,9.Pastry Chef,10.Senior Chef) " << "   \t";
                        }
                }
                cout << endl <<"\t Write 0 for go back." << endl << "   \t";
                cin >> exit1;
            }
            else if (command == 3) {
                system("CLS");
                int director;
                string complaint,PhoneNumber;
                cout << endl;
                cout << "\t What are you want?" << endl;
                cout << "\t 1.Connect the director for the partnership." << endl;
                cout << "\t 2.Connect the director for a complaint." << endl << "  \t";
                cin >> director;
                system("CLS");
                if (director == 1) {
                    cout << endl;
                    cout << "\t Call the secretary to schedule an appointment(+998 00 111 22 33)" << endl;
                }
                else if (director == 2) {
                    cout << endl;
                    cout << "\t Write your complaint. " << endl << "   \t";
                    cin >> complaint;
                    getline(cin, complaint);
                    cout << "\t We will consider your complaint within 3 days." << endl;
                    cout << "\t Leave your number." << endl << "   \t +998 ";
                    getline(cin, PhoneNumber);
                }
                else {
                    cout << "\t Choose 1 or 2";
                }
                cout << "\t Write 0 for go back." << endl << "   \t";
                cin >> exit1;
                system("CLS");
            }
            else if (command == 4) {
                string EnterPassword, EnterEmail;
                system("CLS");
                cout << endl <<"\t To login to your account you must write your email(name of account)." << endl << "   \t";
                cin >> EnterEmail;
                cout << "\t And now the password." << endl << "   \t";
                cin >> EnterPassword;
                system("CLS");

                if (EnterEmail == email && EnterPassword == password) {
                    if (work == 1) {
                        cout << "\t 1 day-- - 5$      if 1 month-- - 150$" << endl;
                        cout << "\t       ----------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Cleaner          " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ---------------------------------- " << endl << endl;
                    }
                    else if (work == 2) {
                        cout << "\t 1 day --- 5,5$      1 month --- 165$" << endl;
                        cout << "\t       ----------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Waiter           " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ---------------------------------- " << endl << endl;
                    }
                    else if (work == 3) {
                        cout << "\t 1 day --- 5,6$   1 month --- 168$" << endl;
                        cout << "\t       ----------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Trainee Cook           " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ---------------------------------- " << endl << endl;
                    }
                    else if (work == 4) {
                        cout << "\t 1 day --- 5,8$      1 month --- 174$" << endl;
                        cout << "\t       ----------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Cashier           " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ---------------------------------- " << endl << endl;
                    }
                    else if (work == 5) {
                        cout << "\t 1 day --- 6$     1 month --- 180$" << endl;
                        cout << "\t       ----------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Barthender           " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ---------------------------------- " << endl << endl;
                    }
                    else if (work == 6) {
                        cout << "\t 1 day --- 10$      1 month --- 300$" << endl;
                        cout << "\t       -------------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Accountant       " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ------------------------------------- " << endl << endl;
                    }
                    else if (work == 7) {
                        cout << "\t 1 day --- 13,5$       1 month --- 405$" << endl;
                        cout << "\t       -------------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Procurer Chef       " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ------------------------------------- " << endl << endl;
                    }
                    else if (work == 8) {
                        cout << "\t 1 day --- 15$      1 month --- 450$" << endl;
                        cout << "\t       -------------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    CHef       " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ------------------------------------- " << endl << endl;
                    }
                    else if (work == 9) {
                        cout << "\t 1 day --- 16$      1 month --- 480$" << endl;
                        cout << "\t       -------------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Pasrty Chef       " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ------------------------------------- " << endl << endl;
                    }
                    else if (work == 10) {
                        cout << "\t 1 day --- 19$        1 month --- 570$" << endl;
                        cout << "\t       -------------------------------------" << endl;
                        cout << "\t      | ########    " << name << "          " << endl;
                        cout << "\t      | #&@##@&#                     " << endl;
                        cout << "\t      | #@%##%@#    " << surname << "       " << endl;
                        cout << "\t      | ########                     " << endl;
                        cout << "\t      | #@####@#    Senior Chef       " << endl;
                        cout << "\t      | ##@@@@##                     " << endl;
                        cout << "\t       ------------------------------------- " << endl << endl;
                    }
                    system("CLS");
                    cout << endl << "\t" << NumberOfPhone << " it's still your number?" << endl ;
                    cout << "\t Write 1.Yes or 2.No" << endl << "   \t";
                    cin >> forReal;
                    if (forReal == 1)
                        cout << " Thanks " << endl;
                    else if (forReal == 2) {
                        cout << "\t Write your number." << endl << "\t+998 ";
                        cin >> NumberOfPhone;
                        getline(cin, NumberOfPhone);
                    }
                    else 
                        cout << "\t You should have choose 1.Yes or 2.No" << endl;
                        
                    cout << "\t Write 0 for go back." << endl << "   \t";
                    cin >> exit1;
                    


                }
                else if (EnterEmail != email && EnterPassword != password) {
                    system("CLS");
                    cout << endl << "\t You didn't registr or or you do not meet our criteria." << endl;
                    cout << "\t Write 0 for go back." << endl << "   \t";
                    cin >> exit1;
                }
                else {
                    system("CLS");
                    cout << endl << "\t You didn't registr" << endl;
                    cout << "\t Write 0 for go back." << endl << "   \t";
                    cin >> exit1;
                }
            }
            else if (command == 5)
                break;
            else {
                system("CLS");
                cout << endl;
                cout << "\t |Please choose from this | " << endl;
                cout << "\t |          down          | " << endl;
            }
            
        }
        system("CLS");
        cout << endl << "\t We welcome you to our company #WATER TIME# " << endl;
        cout << "\t What are you want?" << endl;
        cout << "\t 1. Ask about salary.                   (write 1)" << endl;
        cout << "\t 2. Register for work.                  (write 2)" << endl;
        cout << "\t 3. Contact the director of the company.(write 3)" << endl;
        cout << "\t 4. See information about yourself.     (write 4)" << endl;
        cout << "\t 5. Exit.                               (write 5)" << endl << "   \t";
        exit1 = 1;
        cin >> command;
    }


    return 0;
}