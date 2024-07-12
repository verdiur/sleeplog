#pragma once
#include <imgui.h>
#include <imgui_markdown/imgui_markdown.h>


namespace MarkdownUtils
{
    /// @brief Link callback used for markdown fmt
    /// @param data Callback data
    void link_callback(const ImGui::MarkdownLinkCallbackData data);

    /// @brief Image callback used for markdown fmt
    /// @param data Callback data
    /// @return Image data
    ImGui::MarkdownImageData img_callback(const ImGui::MarkdownLinkCallbackData data);

    /// @brief Markdown fmt callback
    /// @param md_format_info
    /// @param start
    void format_callback(const ImGui::MarkdownFormatInfo& md_format_info, bool start);   
}

namespace MdUtils = MarkdownUtils;