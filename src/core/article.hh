#pragma once
#include <string>
#include <chrono>
#include <date/date.h>

#include <core/dream_kind.hh>


class Article
{
private:

    typedef std::chrono::time_point<std::chrono::system_clock> TimePoint;

    std::string body_;
    std::string title_;
    DreamKind kind_;
    TimePoint created_time_;
    TimePoint modified_time_;

public:

    Article(
        std::string body_ = "", 
        std::string title = "", 
        DreamKind kind = none, 
        TimePoint created_time = std::chrono::system_clock::now(),
        TimePoint modified_time = std::chrono::system_clock::now()  
    );

    const std::string get_title() const;
    void set_title(std::string title);

    const DreamKind get_kind() const;
    void set_kind(DreamKind kind);

    const std::string get_body() const;
    void set_body(std::string body);
    void write_to_body(std::string s);

    /// @brief Get number of bytes that the character is taking. This function does not
    /// @brief actually count characters, but instead provides a rough estimate of
    /// @brief the character count.
    /// @return Byte length of the body.
    unsigned int get_char_count() const;
    
    /// @brief Calculate number of words that the article has.
    /// @return Word count.
    unsigned int get_word_count() const;
};
