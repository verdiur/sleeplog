#include <sstream>
#include <chrono>
#include <filesystem>
#include <date/date.h>
#include <json/json.hpp>

#include <core/dream_kind.hh>

// IMPLEMENTS ENTRY.HH
#include <core/entry.hh>


Entry::Entry(
    std::string body, 
    std::string title, 
    DreamKind kind, 
    ymd date,
    time_point created_time, 
    time_point modified_time
):
    m_body(body),
    m_title(title),
    m_kind(kind),
    m_date(date),
    m_created_time(created_time),
    m_modified_time(modified_time)
{}


Entry::Entry(std::filesystem::path path) {
    
}


const Entry::time_point& Entry::get_created_time() const {
    return m_created_time;
}


const Entry::time_point& Entry::get_modified_time() const {
    return m_modified_time;
}


void Entry::update_modified_time() {
    m_modified_time = std::chrono::system_clock::now();
}


unsigned int Entry::calc_char_count() const {
    return m_body.length();
}


unsigned int Entry::calc_word_count() const {
    std::stringstream stream(m_body);
    std::string word;
    unsigned int count = 0;
    while (stream >> word) {
        count++;
    }
    return count;
}