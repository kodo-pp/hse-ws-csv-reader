#include <csvreader/columns.hpp>

#include <stdexcept>


namespace csv
{

std::vector<std::string> selectColumns(
    const std::vector<int>& indices,
    const std::vector<std::string>& columns
)
{
    std::vector<std::string> result;
    result.reserve(indices.size());
    for (int index : indices)
    {
        if (index < 0 || index >= static_cast<int>(columns.size()))
        {
            throw std::runtime_error("Specified index " + std::to_string(index) + " is out of range");
        }
        result.emplace_back(columns[index]);
    }
    return result;
}

}
