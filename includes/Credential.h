#include <string>

class Credential{

    public:
        Credential(std::string username, std::string password);
        ~Credential();
        void setUsername(std::string username);
        void setPassword(std::string password);
        std::string getUsername();
        std::string getPassword();
};