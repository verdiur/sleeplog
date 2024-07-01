#include <imgui.h>

#include <core/article.hh>
#include <gui/viewer.hh>


Viewer::Viewer(Article* article, bool load):
    p_article(article)
{
    if (load) { Viewer::load(); }
}


const Article* Viewer::get_article() const {
    return p_article;
}


Article *Viewer::get_article() {
    return p_article;
}


void Viewer::set_article(Article* article) {
    p_article = article;
}


// placeholder
float f[3];
void Viewer::load() {
    ImGui::Begin("Viewer (test)");
    ImGui::ColorEdit3("", f);
    ImGui::End();
}
