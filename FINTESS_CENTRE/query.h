#ifndef QUERY_H
#define QUERY_H
#include <string>

struct query
{
    static std::string insert_user(const std::string& name,const std::string& surname ,
                                   const std::string& number, const std::string& hash_password);

    static std::string get_user(const std::string&number , const std::string&hash_password);
};



#endif // QUERY_H
