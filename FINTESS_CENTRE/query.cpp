#include "query.h"

std::string query::insert_user(const std::string& name,const std::string& surname ,
                               const std::string& phone_number, const std::string& hash_password)
{
    std::string fullname = surname + " " + name;

    return "INSERT INTO clients (fullname, phonenumber, passwordhash, is_admin) VALUES ('"
                      + fullname + "', '"
                      + phone_number + "', '"
                      + hash_password + "', "
                      + "false" + ");";
}

std::string query::get_user(const std::string& phone_number , const std::string & hash_password)
{
    return "SELECT * FROM clients WHERE phonenumber = '" + phone_number +
           "' AND passwordhash = '" + hash_password + "';";
}

std::string input_comment(const std::string & TrainerName , const std::string& rating)
{
    return "INSERT INTO coachs (fullname, phonenumber, rating) VALUES ('"
           +TrainerName+"', "
           +""+", '"
           +rating+ "');";
}
