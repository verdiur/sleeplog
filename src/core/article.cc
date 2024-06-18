#include <sstream>

#include <core/dream_kind.hh>
#include <core/article.hh>
#include "article.hh"


Article::Article(std::string body_, std::string title, DreamKind kind, TimePoint created_time, TimePoint modified_time):
    body_(),
    title_(),
    kind_(),
    created_time_(),
    modified_time_()
{}


const std::string Article::get_title() const {
    return title_;
}


void Article::set_title(std::string title) {
    title_ = title;
}


const DreamKind Article::get_kind() const {
    return kind_;
}


void Article::set_kind(DreamKind kind) {
    kind = kind_;
}


const std::string Article::get_body() const {
    return body_;
}


void Article::set_body(std::string body) {
    body_ = body;
}


unsigned int Article::get_char_count() const {
    return body_.length();
}


unsigned int Article::get_word_count() const {
    std::stringstream stream(body_);
    std::string word;
    unsigned int count = 0;
    while (stream >> word) {
        count++;
    }
    return count;
}
