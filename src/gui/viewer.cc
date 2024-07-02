#include <imgui.h>

#include <core/article.hh>
#include <gui/viewer.hh>


Viewer::Viewer(Entry* entry):
    p_entry(entry)
{}


// placeholder
float f[3];
void Viewer::show() {
    ImGui::Begin("Viewer (test)");
    ImGui::ColorEdit3("", f);
    ImGui::End();
}
