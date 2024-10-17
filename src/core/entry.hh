#pragma once
#include <string>
#include <chrono>
#include <date/date.h>

#include <core/dream_kind.hh>

/// @brief Entry struct
struct Entry
{
    std::string m_title;
    DreamKind m_kind;
    std::string m_body;
    date::year_month_day m_date;
};

/// @brief Namespace for Entry operations
namespace EntryOperations
{
    /// @brief Calculate number of bytes that the entry has, not counting
    /// title and metadata.
    /// @return Byte count.
    unsigned int calc_byte_count();

    /// @brief Calculate number of words that the entry has, not counting
    /// title and metadata.
    /// @return Word count.
    unsigned int calc_word_count();
}

/// @brief EntryOperations alias
namespace EntryOp = EntryOperations;
