#include <imgui.h>
#include <imgui_markdown/imgui_markdown.h>

#include <core/entry.hh>

// IMPLEMENTS VIEWER_WINDOW.HH
#include <gui/viewer_window.hh>


ViewerWindow::ViewerWindow(Entry* entry, std::shared_ptr<ImGui::MarkdownConfig> md_config):
    p_entry(entry),
    p_md_config(md_config),
    m_mode(false)
{}


// placeholder
void ViewerWindow::show() {
    ImGui::Begin("Entry Viewer", nullptr, ImGuiWindowFlags_NoTitleBar);

    // title
    ImGui::Text(p_entry->m_title.c_str());
    
    // body
    if (p_entry != nullptr) {
        if (m_mode) { ImGui::Text("Edit mode (lol)"); }
        else {
            // ImGui::Markdown(
            //     p_entry->m_body.c_str(), 
            //     p_entry->m_body.length(),
            //     *p_md_config
            // );
            ImGui::TextWrapped(p_entry->m_body.c_str());
        }
    }
    ImGui::End();
}
