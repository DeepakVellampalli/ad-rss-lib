/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <limits>
#include <memory>
#include "ad_rss/physics/Distance.hpp"
/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

/*!
 * \brief DataType MetricRange
 *
 * A metric range described by its borders: [minimum, maximum].
 */
struct MetricRange
{
  /*!
   * \brief standard constructor
   */
  MetricRange() = default;

  /*!
   * \brief standard destructor
   */
  ~MetricRange() = default;

  /*!
   * \brief standard copy constructor
   */
  MetricRange(const MetricRange &other) = default;

  /*!
   * \brief standard move constructor
   */
  MetricRange(MetricRange &&other) = default;

  /**
   * \brief standard assignment operator
   *
   * \param[in] other Other MetricRange
   *
   * \returns Reference to this MetricRange.
   */
  MetricRange &operator=(const MetricRange &other) = default;

  /**
   * \brief standard move operator
   *
   * \param[in] other Other MetricRange
   *
   * \returns Reference to this MetricRange.
   */
  MetricRange &operator=(MetricRange &&other) = default;

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other MetricRange
   *
   * \returns \c true if both MetricRange are equal
   */
  bool operator==(const MetricRange &other) const
  {
    return (minimum == other.minimum) && (maximum == other.maximum);
  }

  /**
   * \brief standard comparison operator
   *
   * \param[in] other Other MetricRange.
   *
   * \returns \c true if both MetricRange are different
   */
  bool operator!=(const MetricRange &other) const
  {
    return !operator==(other);
  }

  /*!
   * The minimum value of the metric range.
   */
  ::ad_rss::physics::Distance minimum{std::numeric_limits<Distance>::lowest()};

  /*!
   * The maximum value of the metric range.
   */
  ::ad_rss::physics::Distance maximum{std::numeric_limits<Distance>::max()};
};

} // namespace physics
} // namespace ad_rss
