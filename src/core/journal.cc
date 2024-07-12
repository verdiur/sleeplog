#include <algorithm>
#include <string>

#include <core/entry.hh>

// IMPLEMENTS JOURNAL.HH
#include <core/journal.hh>


Journal::Journal(std::string title, std::string author):
    m_title(title),
    m_author(author),
    m_content()
{}


/// @note Current implementation only deals with exact title matching.
/// @todo Implement a more lenient search
Journal::entry_map::iterator Journal::search(std::string query) {
    auto it = std::find(
        m_content.begin(), 
        m_content.end(), 
        [query](Entry e) { return e.m_title == query; }
    );
    return it;
}
