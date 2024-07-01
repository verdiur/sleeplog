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

const Article::time_point& Article::get_created_time() const {
    return m_created_time;
}

const Article::time_point& Article::get_modified_time() const {
    return m_modified_time;
}

void Article::update_modified_time() {
    m_modified_time = std::chrono::system_clock::now();
}

unsigned int Article::calc_char_count() const {
    return m_body.length();
}

unsigned int Article::calc_word_count() const {
    std::stringstream stream(m_body);
    std::string word;
    unsigned int count = 0;
    while (stream >> word) {
        count++;
    }
    return count;
}