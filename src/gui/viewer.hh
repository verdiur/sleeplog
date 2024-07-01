#pragma once
#include <core/article.hh>


/// @class Viewer
/// @brief Window that displays an article through a pointer.
class Viewer
{
private:
    
    Article* p_article;

public:

    Viewer(Article* article = nullptr);

    const Article* get_article() const;
    Article* get_article();
    void set_article(Article* article);
    
    /// @brief Load window and logic
    void load();
};
