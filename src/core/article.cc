#include <sstream>
#include <chrono>
#include <date/date.h>

#include <core/dream_kind.hh>
#include <core/article.hh>


Article::Article(
    std::string body, 
    std::string title, 
    DreamKind kind, 
    date::year_month_day date, 
    TimePoint created_time, 
    TimePoint modified_time
):
    m_body(body),
    m_title(title),
    m_kind(kind),
    m_date(date),
    m_created_time(created_time),
    m_modified_time(modified_time)
{}


const std::string Article::get_title() const {
    return m_title;
}


void Article::set_title(std::string title) {
    m_title = title;
}


const DreamKind Article::get_kind() const {
    return m_kind;
}


void Article::set_kind(DreamKind kind) {
    kind = m_kind;
}


const std::string Article::get_body() const {
    return m_body;
}


void Article::set_body(std::string body) {
    m_body = body;
}


unsigned int Article::get_char_count() const {
    return m_body.length();
}


unsigned int Article::get_word_count() const {
    std::stringstream stream(m_body);
    std::string word;
    unsigned int count = 0;
    while (stream >> word) {
        count++;
    }
    return count;
}


void Article::update_modified_time() {
    m_modified_time = std::chrono::system_clock::now();
}
