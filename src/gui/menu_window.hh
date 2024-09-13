#pragma once
#include <imgui.h>

#include <core/journal.hh>
#include <gui/window.hh>


/// @brief Window that displays the entries of a Journal, with a search bar.
class MenuWindow: Window
{
public:

    Journal* p_journal;

public:

    MenuWindow(
        Journal* journal = nullptr
    );

    void show() override;
};
