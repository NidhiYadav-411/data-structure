#include <iostream>
using namespace std;

int main() {
    int num_servers;
    cout<<”B24CE1072-Nidhi Yadav;
    cout << "Enter number of servers: ";
    cin >> num_servers;

    string answer;
    while (true) {
        cout << "Do you want to send a request? (yes/no): ";
        cin >> answer;

        if (answer == "no" ) {
            break;
        } else if (answer == "yes" ) {
            int client_id;
            cout << "Enter request ID : ";
            cin >> client_id;

           int server = client_id % num_servers;
           cout << "Server " << server << " is assigned to request ID " << client_id << endl;

        } else {
            cout << "Please enter 'yes' or 'no'." << endl;
        }
    }

    cout << "Load balancing finished." << endl;
    return 0;
}
