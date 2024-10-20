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

std::string query::input_trainer(const std::string & TrainerName , const std::string& rating)
{
    return "INSERT INTO coachs (fullname, phonenumber, rating) VALUES ('"
           +TrainerName+"', "
           +""+", '"
           +rating+ "');";
}

std::string query::find_trainer_id(const std::string& TrainerName)
{
    return "SELECT id FROM coachs WHERE fullname = '"+TrainerName+"';";
}

std::string query::input_comment(const std::string& coach_id , const std::string& review , const std::string& rate)
{
    return "INSERT INTO reviews (coach_id, reviews , rate) VALUES('"
            +coach_id+ "', '"
            +review+ "', '"
            +rate+ "');";
}




