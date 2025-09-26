#include "../includes/Credential.h"
#include <fstream>

Credential::Credential(std::string username, std::string password)
{
    std::ofstream file;
    file.open("credentials.txt");
    file << username << std::endl;
    file << password << std::endl;
    file.close();
}
Credential::~Credential()
{
}