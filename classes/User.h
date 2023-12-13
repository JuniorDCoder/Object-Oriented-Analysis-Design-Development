#ifndef USER_H
#define USER_H
#include<string>

class User
{
    public:
        User(string n, string e, string pass): name(n), email(e), password(pass) {}

        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setEmail(string email){
            this->email = email;
        }
        string getEmail(){
            return this->email;
        }
        void setPassword(string password){
            this->password = password;
        }
        string getPassword(){
            return this->password;
        }

    protected:
        string name, email, password;

    private:
};

#endif // USER_H
