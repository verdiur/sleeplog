#include <imgui.h>

#include <core/journal.hh>

// IMPLEMENTS MENU_WINODW.HH
#include <gui/menu_window.hh>


MenuWindow::MenuWindow(Journal* journal):
    p_journal(journal)
{}


void MenuWindow::show() {
    const Journal::entry_map& content = p_journal->get_content();
    auto it = p_journal->search();
    while (it != content.end()) {
        ImGui::Text(
            it->second.m_body
                .substr(0, 5).c_str()
        );
        it++;
    }
}
