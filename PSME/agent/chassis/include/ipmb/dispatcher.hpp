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
 *
 * @file ipmb/dispatcher.hpp
 * @brief IPMI message dispatcher.
 * */

#ifndef AGENT_CHASSIS_IPMB_DISPATCHER
#define AGENT_CHASSIS_IPMB_DISPATCHER

#include <ipmb/ipmi_message.hpp>
#include <ipmb/command/command.hpp>

/*! Agent namespace */
namespace agent {
/*! Chassis namespace */
namespace chassis {
/*! IPMB namespace */
namespace ipmb {

/*! Dispatches IPMI message */
class Dispatcher {
    using CommandUniquePtr = agent::chassis::ipmb::command::CommandUniquePtr;
public:

    /*! Dispataches IPMI message
     * @param msg IPMI Message
     * @return Commnad
     * */
    CommandUniquePtr dispatch(const IpmiMessage& msg);
};

}
}
}
#endif /* AGENT_CHASSIS_IPMB_DISPATCHER */
