/*
** EPITECH PROJECT, 2020
** OOP_indie_studio_2019
** File description:
** LookingView
*/

#include "LookingView.hpp"

using namespace ecs::component;

LookingView::LookingView(const irr::core::vector3df &direction) : direction(direction)
{
}

LookingView::LookingView(const LookingView &lookingView) = default;

LookingView::~LookingView() = default;
