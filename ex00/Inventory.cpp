#include "Inventory.hpp"

void Inventory::add(const std::string& item) {
    m_items.push_back(item);
}

int Inventory::count() const {
    return static_cast<int>(m_items.size());
}

bool Inventory::has(const std::string& item) const {
    for (const auto& e : m_items)
        if ( e == item ) return true;
    return false;
}