#ifndef CSVREADER_COLUMNS_HPP_INCLUDED
#define CSVREADER_COLUMNS_HPP_INCLUDED

#include <vector>
#include <string>


namespace csv
{

/**
 * Select columns given indices
 *
 * @throws std::runtime_error if at least one of the specified indices is out of range of CSV columns
 */
std::vector<std::string> selectColumns(
    const std::vector<int>& indices,
    const std::vector<std::string>& columns
);

}

#endif // CSVREADER_COLUMNS_HPP_INCLUDED
