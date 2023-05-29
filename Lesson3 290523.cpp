// Lesson3 290523.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <string>

class Client {
private:
    std::string _name;
    int _id;
   // static std::vector<Client*>_clients;

    void ShowClient() {
        std::cout << "Name: " << _name << std::endl;
        std::cout << "Id: " << _id << std::endl;
    }
public:
    Client(std::string name, int id,std::vector<Client*>&client) :_name(name),_id(id) {
        //_clients.push_back(this);
        client.push_back(this);

    }

    void ShowClients(std::vector<Client*>&clients)
    {
        for (const auto& it : clients)
            it->ShowClient();
    }
    
    
   


};

//std::vector<Client*>Client::_clients;


int main()
{

    std::vector<Client*>clients;

    Client* client = new Client("John", 20, clients);
    Client* client2 = new Client("Alex", 40, clients);
    Client* client3 = new Client("Bob", 60, clients);

    client->ShowClients(clients);
    




    return 0;
}


