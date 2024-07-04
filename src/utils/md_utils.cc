#include <string>
#include <imgui.h>
#include <imgui_markdown/imgui_markdown.h>

// IMPLEMENTS MD_UTILS.HH
#include <utils/md_utils.hh>


void MarkdownUtils::link_callback(ImGui::MarkdownLinkCallbackData data) {
    std::string url(data.link, data.linkLength);
    if (!data.isImage) {
        // placeholder
    }
}


ImGui::MarkdownImageData MarkdownUtils::img_callback(ImGui::MarkdownLinkCallbackData data) {
    // placeholder
    ImTextureID img = ImGui::GetIO().Fonts->TexID;
    ImGui::MarkdownImageData imageData {
        true,
        false,
        img,
        ImVec2()
    };
    return imageData;
}


void MarkdownUtils::format_callback(const ImGui::MarkdownFormatInfo& md_format_info, bool start) {
    // call default fmt callback (fallback)
    ImGui::defaultMarkdownFormatCallback(md_format_info, start);
    // formatting rules
    switch (md_format_info.type)
    {
        case ImGui::MarkdownFormatType::HEADING: {
            switch (md_format_info.level) {
                case 1: true;
            }
        }
    }
}
