/*
** EPITECH PROJECT, 2020
** OOP_indie_studio_2019
** File description:
** Size
*/

#include "Size.hpp"

using namespace ecs::component;

Size::Size(const irr::core::vector3df &size) : size(size)
{
}

Size::Size(const Size &size) = default;

Size::~Size() = default;
