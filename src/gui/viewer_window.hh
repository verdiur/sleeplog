#pragma once
#include <memory>
#include <imgui_markdown/imgui_markdown.h>

#include <core/entry.hh>
#include <gui/window.hh>


/// @brief Window that displays an entry through a pointer.
class ViewerWindow: Window
{
public:

    Entry* p_entry;
    std::shared_ptr<ImGui::MarkdownConfig> p_md_config;
    bool m_mode; // true => edit, false => read

public:

    ViewerWindow(
        Entry* entry = nullptr,
        std::shared_ptr<ImGui::MarkdownConfig> md_config
            = std::make_shared<ImGui::MarkdownConfig>()
    );
    
    /// @brief Show window. Also contains UI logic
    void show() override;
};
