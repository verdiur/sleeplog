#pragma once
#include <string>
#include <vector>

#include <core/entry.hh>

/// @brief Journal/Log struct
struct Journal
{
    std::string m_title;
    std::string m_author;
    std::vector<Entry> m_content;
};

/// @brief Namespace for operations on Journals
namespace JournalOperations
{
    // functions...
}

namespace JournalOp = JournalOperations;
