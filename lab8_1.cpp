#include <iostream>
using namespace std;

int main()
{
    char rank;
    cout << "Input your rank: ";
    cin >> rank;
    
    switch(rank) {
        case 'S': 
            cout << "You have received Super Ultra Rare Unit!!!\n";
            break;
        case 'A': 
            cout << "You have received 5 gems.\n";
            break;
        case 'B': 
            cout << "You have received 1 gems.\n";
            break;
        case 'C': 
            cout << "You have received 2000 coins.\n";
            break;
        case 'D': 
            cout << "You have received very KAK items.\n";
            break;
        default:
            cout << "Invalid rank!\n";
            break;
    }
    
    return 0;
}
