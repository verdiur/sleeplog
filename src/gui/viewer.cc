#include <imgui.h>

#include <core/article.hh>
#include <gui/viewer.hh>


Viewer::Viewer(Article* article, bool load):
    p_article(article)
{
    if (load) { Viewer::load(); }
}


// placeholder
float f[3];
void Viewer::load() {
    ImGui::Begin("Viewer (test)");
    ImGui::ColorEdit3("", f);
    ImGui::End();
}
