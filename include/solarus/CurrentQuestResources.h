/*
 * Copyright (C) 2006-2014 Christopho, Solarus - http://www.solarus-games.org
 *
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_CURRENT_QUEST_RESOURCE_H
#define SOLARUS_CURRENT_QUEST_RESOURCE_H

#include "solarus/Common.h"
#include "solarus/ResourceType.h"
#include <map>
#include <string>

namespace Solarus {

/**
 * \brief Provides access to the resources of the current quest.
 * TODO rename to CurrentQuest and also store global things like strings and dialogs
 */
class CurrentQuestResources {

  public:

    static void initialize();
    static void quit();

    static bool exists(ResourceType resource_type, const std::string& id);
    static const std::map<std::string, std::string>& get_elements(ResourceType resource_type);

  private:

    CurrentQuestResources() = delete;

};

}

#endif
