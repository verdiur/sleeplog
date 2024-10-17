#pragma once
#include <cstdint>
#include <string>
#include <vector>

/// @brief Implementation of the piece table buffer class, using strings.
/// Mode info: https://www.cs.unm.edu/~crowley/papers/sds.pdf
class PieceTableBuf
{
    /// @brief Piece type
    enum ptype
    {
        file,
        add
    };

    /// @brief Piece descriptor alias for convenience
    /// (index, length, ptype)
    typedef std::tuple<uint64_t, uint64_t, ptype> pdesc;

    const std::string *m_file;   // file buffer
    std::string m_add;           // add buffer
    std::vector<pdesc> m_ptable; // piece table

public:
    /// @brief Class constructor
    /// @param s File contents or string to edit
    PieceTableBuf(std::string *s);

    /// @brief Insert text at specified index
    /// @param index Where to insert
    /// @param s Text to add
    void insert(uint64_t index, std::string text);

    /// @brief Remove text at specified index
    /// @note "delete" is a keyword so yeah...
    /// @param index Where to delete
    /// @param length Length of text deletion
    void remove(uint64_t index, uint64_t length = 1);

    /// @brief Typecast overload to extract text
    operator std::string() const;

    std::string at() const;
};