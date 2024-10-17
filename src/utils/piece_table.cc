#include <cstdint>
#include <string>
#include <vector>

// implements piece_table.hh
#include <utils/piece_table.hh>

PieceTableBuf::PieceTableBuf(std::string *s)
    : m_file(s),
      m_add(),
      m_ptable()
{
    m_ptable.emplace_back(pdesc{0, s->length(), ptype::file});
}

void PieceTableBuf::insert(uint64_t index, std::string text)
{  
}
