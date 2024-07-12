#pragma once
#include <string>
#include <unordered_map>

#include <core/entry.hh>


/// @brief Journal class. Represents a journal.
/// @par A journal is implemented as a collection of entries. This class provides methods
/// to search through the journal.
class Journal
{
public:

    typedef std::unordered_map<std::string, Entry> entry_map;

public:

    std::string m_title;
    std::string m_author;

private:

    entry_map m_content;

public:
    
    Journal(
        std::string title = "",
        std::string author = ""
    );

    /// @brief Search for entries using a `std::string` query.
    /// @param query
    /// @return Iterator in the range `[first, last)` satisfying the query.
    entry_map::iterator search(const std::string query);
};
