#pragma once
#include <memory>
#include <imgui_markdown/imgui_markdown.h>

#include <core/entry.hh>


/// @brief Window that displays an entry through a pointer.
class Viewer
{
public:
    
    std::string m_label;
    Entry* p_entry;
    std::shared_ptr<ImGui::MarkdownConfig> p_md_config;

public:

    Viewer(
        std::string label,
        Entry* entry = nullptr,
        std::shared_ptr<ImGui::MarkdownConfig> md_config
            = std::make_shared<ImGui::MarkdownConfig>()
    );
    
    /// @brief Show window. Also contains UI logic
    void show();

private:

    // controllers...
};
