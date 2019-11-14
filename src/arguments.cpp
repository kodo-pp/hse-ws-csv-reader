#include <csvreader/arguments.hpp>
#include <csvreader/util.hpp>

#include <cstdlib>
#include <iostream>


namespace csv::args
{

ParsedArguments parseArguments(int argc, const char** argv)
{
    if (argc < 3) {
        std::cerr << "Usage: csv-reader <input> <output>   <index> [<index> ...]" << std::endl;
        std::cerr << "Arguments:" << std::endl;
        std::cerr << "    <input>       - Input file name" << std::endl;
        std::cerr << "    <output>      - Output file name" << std::endl;
        std::cerr << "    <index>       - Index of a column to select (starting from 0)" << std::endl;
        exit(1);
    }

    ParsedArguments args;
    args.inputFileName = argv[1];
    args.outputFileName = argv[2];
    args.columnIndices.reserve(argc - 3);
    for (int i = 3; i < argc; ++i)
    {
        args.columnIndices.emplace_back(csv::util::stringToInt(argv[i]));
    }
    return args;
}

}
