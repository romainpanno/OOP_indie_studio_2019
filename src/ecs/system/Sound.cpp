/*
** EPITECH PROJECT, 2020
** IndieStudio
** File description:
** Sound.cpp
*/

#include "Sound.hpp"

#include "../../scene/Settings.hpp"
#include "../component/Sound.hpp"

using namespace ecs::system;

Sound::Sound(ecs::WorldManager* worldManager) : System(worldManager)
{
}

Sound::~Sound() = default;

void Sound::update()
{
    for (const auto& entity : entities) {
        auto& sounds = worldManager->getComponent<ecs::component::Sound>(entity);
        for (auto& sound : sounds.soundsToPlay) {
            sounds.sounds[sound]->setPlayingOffset(sf::Time::Zero);
            sounds.sounds[sound]->play();
            sounds.sounds[sound]->setVolume(scene::Settings::soundVolume);
            sounds.soundsToPlay.erase(std::find(sounds.soundsToPlay.begin(), sounds.soundsToPlay.end(), sound));
        }
    }
}
