#include <imgui.h>
#include <imgui_markdown/imgui_markdown.h>

#include <core/entry.hh>
#include <gui/viewer.hh>


Viewer::Viewer(std::string label, Entry* entry, std::shared_ptr<ImGui::MarkdownConfig> md_config):
    m_label(label),
    p_entry(entry),
    p_md_config(md_config)
{}


// TODO wip
void Viewer::show() {
    ImGui::Begin(m_label.c_str(), nullptr, ImGuiWindowFlags_NoTitleBar);
    
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
