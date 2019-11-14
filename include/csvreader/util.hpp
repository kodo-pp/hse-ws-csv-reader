#ifndef CSVREADER_UTIL_HPP_INCLUDED
#define CSVREADER_UTIL_HPP_INCLUDED

#include <string>
#include <vector>


namespace csv::util
{

/**
 * Split a string by a delimiter. "a.bc.d.." -> {"a", "bc", "d", "", ""}
 */
std::vector<std::string> split(const std::string& str, char delimiter);


/**
 * Join a string with a specified delimiter. {"a", "bc", "d", "", ""} -> "a.bc.d.."
 */
std::string join(const std::vector<std::string>& tokens, char delimiter);


/**
 * Convert a string to an integer reliably, throwning an exception on failure
 */
int stringToInt(const std::string& str);

}

#endif // CSVREADER_UTIL_HPP_INCLUDED
