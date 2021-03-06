/*!
 * @section LICENSE
 *
 * @copyright
 * Copyright (c) 2015-2016 Intel Corporation
 *
 * @copyright
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * @copyright
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * @copyright
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @section DESCRIPTION
 * */

#include "agent-framework/command/network/initialization.hpp"
#include "agent-framework/logger_ext.hpp"

using namespace agent_framework;
using namespace agent_framework::command;

/*! Initialization command */
class Initialization : public command::network::Initialization {
public:
    /*! Initialization */
    Initialization();

    /*! Deinitialization */
    ~Initialization();
};

Initialization::Initialization() {
    log_debug(GET_LOGGER("rpc"), "Initialization");
}

Initialization::~Initialization() {
    log_debug(GET_LOGGER("rpc"), "Deinitialization");
}

static Command::Register<Initialization> g("Stubs");
