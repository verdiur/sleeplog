#pragma once
#include <core/article.hh>


/// @brief Window that displays an article through a pointer.
class Viewer
{
public:
    
    Entry* p_entry;

public:

    Viewer(Entry* entry = nullptr);
    
    /// @brief Show window. Also contains UI logic
    void show();

private:

    // controllers...
};
