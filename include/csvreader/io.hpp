#ifndef CSVREADER_IO_HPP_INCLUDED
#define CSVREADER_IO_HPP_INCLUDED

#include <fstream>
#include <utility>


namespace csv::io
{

/**
 * File reader which throws exceptions if any operation fails
 */
class FileReader
{
public:
    FileReader(const std::string& fileName);

    std::string readLine();
    bool eof() const;

private:
    std::ifstream stream;
};


/**
 * File writer which throws exceptions if any operation fails
 */
class FileWriter
{
public:
    FileWriter(const std::string& fileName);

    void writeLine(const std::string& line);

private:
    std::ofstream stream;
};

}

#endif // CSVREADER_IO_HPP_INCLUDED
