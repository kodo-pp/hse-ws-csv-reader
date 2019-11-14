#include <csvreader/arguments.hpp>
#include <csvreader/columns.hpp>
#include <csvreader/io.hpp>
#include <csvreader/util.hpp>

#include <exception>
#include <iostream>
#include <string>


int main(int argc, char** argv)
{
    try
    {
        auto args = csv::args::parseArguments(argc, const_cast<const char**>(argv));

        csv::io::FileReader reader(args.inputFileName);
        csv::io::FileWriter writer(args.outputFileName);

        while (true)
        {
            std::string inputLine = reader.readLine();
            if (reader.eof())
            {
                break;
            }

            auto inputColumns = csv::util::split(inputLine, ',');
            auto outputColumns = csv::selectColumns(args.columnIndices, inputColumns);

            std::string outputLine = csv::util::join(outputColumns, ',');
            writer.writeLine(outputLine);
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}
