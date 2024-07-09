#pragma once
#include <string>
#include <unordered_map>

#include <core/entry.hh>


/// @brief Journal class. Represents a journal.
/// @par A journal is implemented as a collection of entries. This class provides methods
/// to search through the journal.
class Journal
{
private:

    typedef std::unordered_map<std::string, Entry> entry_map;

public:

    std::string m_title;
    std::string m_author;

private:

    entry_map m_contents;

public:
    
    Journal(
        std::string title = "",
        std::string author = ""
    );
};