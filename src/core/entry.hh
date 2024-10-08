#pragma once
#include <string>
#include <chrono>
#include <filesystem>
#include <date/date.h>

#include <core/dream_kind.hh>


/// @brief Entry class
class Entry
{
private:

    typedef std::chrono::time_point<std::chrono::system_clock> time_point;
    typedef date::year_month_day ymd;

public:

    std::string m_body;
    std::string m_title;
    DreamKind m_kind;
    ymd m_date;
    
private:
    
    time_point m_created_time;
    time_point m_modified_time;

public:

    Entry(
        std::string body = "", 
        std::string title = "", 
        DreamKind kind = none,
        ymd date = date::year_month_day{},
        time_point created_time = std::chrono::system_clock::now(),
        time_point modified_time = std::chrono::system_clock::now()
    );

    /// @brief Constructor from a file
    /// @param path Path to JSON entry file
    /// @todo
    Entry(std::filesystem::path path);

    /// @brief Get time at which the instance was created.
    /// @return "Created" time point
    const time_point& get_created_time() const;

    /// @brief Get time at which the instance was last modified.
    /// @return "Last modified" time point
    const time_point& get_modified_time() const;

    /// @brief Update the time at which the instance was last modified.
    /// @par The "last modified" time point will be set to `std::chrono::system_clock::now()`.
    void update_modified_time();
    
    /// @brief Calculate number of bytes that the article is taking. This function does not
    /// @brief actually count characters, but instead provides a rough estimate of
    /// @brief the character count.
    /// @return Byte length of the body.
    unsigned int calc_char_count() const;
    
    /// @brief Calculate number of words that the article has.
    /// @return Word count.
    unsigned int calc_word_count() const;
};
