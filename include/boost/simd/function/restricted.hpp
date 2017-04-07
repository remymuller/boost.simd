//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_RESTRICTED_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_RESTRICTED_HPP_INCLUDED

#include <boost/simd/config.hpp>
#include <boost/simd/detail/decorator.hpp>
#include <boost/simd/detail/dispatch.hpp>

  /*!
    @ingroup group-decorator
    @defgroup real-restricted restricted (function object)

    restricts the range of validity of some functors
      (thus avoiding tests and branching), but ensures an as accurate though
      speedier version on the limited range.

    @headerref{<boost/simd/function/restricted.hpp>}

    @par Description

      @code
      template<typename T> auto restricted_(T const& x) {}
      @endcode

    @par Notes

      For example if you are sure that all input angles are between
      \f$-\pi/4\f$ and \f$\pi/4\f$, then
      this may be used be used with  [cos](@ref real-cos) : restricted_(cos)
      (or with the other direct trigonometric functions).

       - the simd gain will be at least 5 for floats on an sse4.2 sytem
       - the result will be  [Nan](@ref constant-Nan) outside the limited interval...

  **/

namespace boost { namespace simd
{
  struct restricted_tag : decorator_<restricted_tag>
  {
    using parent = decorator_<restricted_tag>;
  };

  const detail::decorator<restricted_tag> restricted_ = {};
} }

#endif
