#include <imgui.h>
#include <imgui_markdown/imgui_markdown.h>

#include <core/entry.hh>

// IMPLEMENTS VIEWER.HH
#include <gui/viewer.hh>


Viewer::Viewer(Entry* entry, std::shared_ptr<ImGui::MarkdownConfig> md_config):
    p_entry(entry),
    p_md_config(md_config)
{}


// TODO wip
void Viewer::show() {
    ImGui::Begin("placeholder", nullptr, ImGuiWindowFlags_NoTitleBar);

    // show title
    ImGui::Text(p_entry->m_title.c_str());
    
    // show markdown
    if (p_entry != nullptr) {
        ImGui::Markdown(
            p_entry->m_body.c_str(), 
            p_entry->m_body.length(),
            *p_md_config
        );
    }
    
    ImGui::End();
}
