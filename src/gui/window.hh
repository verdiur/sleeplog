#pragma once

/// @brief Abstract interface representing a widget.
struct Window
{
    /// @brief Show window. Also contains UI logic
    virtual void show() = 0;
};