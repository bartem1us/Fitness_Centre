#ifndef QUERY_H
#define QUERY_H
#include <string>

struct query
{
    static std::string insert_user(const std::string& name,const std::string& surname ,
                                   const std::string& number, const std::string& hash_password);

    static std::string get_user(const std::string&number , const std::string& hash_password);

    static std::string input_trainer(const std::string& TrainerName , const std::string& rating);
    static std::string find_trainer_id(const std::string& TrainerName);

    static std::string input_comment(const std::string& coach_id , const std::string& review , const std::string& rate);
};



#endif // QUERY_H
