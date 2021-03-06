//  -------------------------------------------------------------------------
//  Copyright (C) 2020 BMW AG
//  -------------------------------------------------------------------------
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at https://mozilla.org/MPL/2.0/.
//  -------------------------------------------------------------------------

#include "ramses-logic/RamsesBinding.h"

#include "impl/RamsesBindingImpl.h"
#include "impl/LogicNodeImpl.h"

namespace rlogic
{
    RamsesBinding::RamsesBinding(std::reference_wrapper<internal::RamsesBindingImpl> impl) noexcept
        : LogicNode(std::ref<internal::LogicNodeImpl>(impl)) // this extra std::ref is only needed for GCC 7
    {
    }
}
