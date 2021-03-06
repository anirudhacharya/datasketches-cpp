/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef _COMPOSITEINTERPOLATIONXTABLE_HPP_
#define _COMPOSITEINTERPOLATIONXTABLE_HPP_

#include <memory>

namespace datasketches {

template<typename A = std::allocator<uint8_t>>
class CompositeInterpolationXTable {
  public:
    static int get_y_stride(int logK);

    static const double* get_x_arr(int logK);
    static int get_x_arr_length();
};

}

#include "CompositeInterpolationXTable-internal.hpp"

#endif /* _COMPOSITEINTERPOLATIONXTABLE_HPP_ */
