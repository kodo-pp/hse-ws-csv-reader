#ifndef CSVREADER_ARGUMENTS_HPP_INCLUDED
#define CSVREADER_ARGUMENTS_HPP_INCLUDED

#include <string>
#include <vector>


namespace csv::args
{

/**
 * The result of parsing command-line arguments
 */
struct ParsedArguments
{
    std::string inputFileName;
    std::string outputFileName;
    std::vector<int> columnIndices;
};


/**
 * Parse command line arguments or exit with an error message if arguments are invalid
 */
ParsedArguments parseArguments(int argc, const char** argv);

}

#endif // CSVREADER_ARGUMENTS_HPP_INCLUDED
