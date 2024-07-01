#pragma once
#include <core/article.hh>


/// @brief Window that displays an article through a pointer.
class Viewer
{
public:
    
    Article* p_article;

public:

    Viewer(Article* article = nullptr, bool load = true);
    
    /// @brief Load window and logic
    void load();
};
