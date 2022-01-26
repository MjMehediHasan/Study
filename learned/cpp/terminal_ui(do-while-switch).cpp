// Copyright [2022] Meek_0
// Learning Started 26/01/22 | 10.00 a.m

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define vec std::vector
#define str std::string
#define cout std::cout
#define cin std::cin
#define endl std::endl
#define pb push_back

// template<class T>
// T displayVec(T vectr) {
//     cout << "[ ";
//     for (auto val : vectr) {
//         cout  << val << " ";
//     }
//     cout << "]";
// }

// template<class M>
// M mean(M vectr) {
//     int total{0}, meanOf{0};
//     for (auto val : vectr) {
//         total += val;
//     }
//     meanOf = total/vectr.size();
//     return meanOf;
// }


int main() {
    char selection{};
    bool selBool{true};
    vec<int> list {};
    //
    // Some Assets
    //
    displayVec:
        if (list.size() > 0) {
            cout << "[ ";
            for (auto val : list) {
                cout  << val << " ";
            }
            cout << "]";
        }
        goto start_again;
    Largest:
        if (list.size() > 0) {
            std::sort(list.begin(), list.end(), std::greater<int>());
            cout << "\n" << list[0] << " is Largest Number of the list\n";
        } else if (list.size() == 0) {
            cout << "\n\nUnable to determine largest value - list has no data !\n\n";
        }
        goto start_again;
    Smallest:
        if (list.size() > 0) {
            std::sort(list.begin(), list.end());
            cout << "\n" << list[0] << " is Smallest Number of the list\n";
        } else if (list.size() == 0) {
            cout << "\n\nUnable to determine smallest value - list has no data !\n\n";
        }
        goto start_again;
    //
    //
    //
    // Main loop section
    //
    start_again :
    do {
        cout << "\n\n" << str(35, '-')<< endl;      // This will display "-" 35 times ! Very handy !
        cout << "P - Print Numbers\n" << "A - Add numbers\n";
        cout << "M - Display Mean of the numbers\n" << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n" << "C - Clear list\n" << "Q - Quit\n\n>";
        cin >> selection;
        switch (selection) {
            // Printing List
            case 'p' :
            case 'P' : {if (list.size() == 0) {
                            cout << "\n[] - List is empty";
                        } else {
                            goto displayVec;
                        }
                        }
                        break;
            //
            // Adding to the list
            case 'a' :
            case 'A' :  {
                        int temp{0};
                        cout << "\nEnter an Integer : ";
                        cin >> temp;
                        for (auto val : list) {
                            if (val != temp) {
                                goto add;  // You can't iterate and push_back in the same vector both at the same time !
                                cout << temp << " Added to list !" << endl;
                            } else if (val == temp) {
                                cout << "\nNumber can't be added !\n" << temp << " Exists in the list" << endl;
                            }
                        }
                        add:
                            list.pb(temp);
                        }
                        break;
            case 'm' :
            case 'M' :  {
                        double total{0};
                        if (list.size() > 0) {
                            for (auto val : list) {
                                total += val;
                            }
                            cout << "\nMean of the list is " << static_cast<int>(total/list.size()) << endl;
                        } else if (list.size() == 0) {
                            cout << "\n\nUnable to calculate mean - list has no data !\n\n";
                        }
                        }
                        break;
            case 'l' :
            case 'L' : goto Largest;
                       break;
            case 's' :
            case 'S' : goto Smallest;
                       break;
            case 'c' :
            case 'C' : list.clear();
                       cout << "\nList is cleared\n";
                       break;
            case 'q' :
            case 'Q' : {cout << "'\nOk ! Good by ! 😥\n" << endl;
                        selBool = false;}
                        break;
            default : cout << "\n\nInvalid Option ! Use your glasses !🥴\n";
        }
    } while (selBool);
    //
    return 0;
}
