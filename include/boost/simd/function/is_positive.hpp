//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_POSITIVE_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_POSITIVE_HPP_INCLUDED

  /*!
    @ingroup group-predicates
    @defgroup real-is_positive is_positive (function object)

    This function object returns  [True](@ref constant-True) if x is positive else  [False](@ref constant-False).

    This function differs from  [is_gtz](@ref real-is_gtz) for floating point arguments,
    because  [Zero](@ref constant-Zero) is positive but not greater than 0, and  [Mzero](@ref constant-Mzero) is
    not positive and not greater than 0, It's probably  [is_gtz](@ref real-is_gtz) that
    you want.

    @headerref{<boost/simd/function/is_positive.hpp>}

    @par Description

      @code
      as_logical_t<Value> is_positive(Value const& x);
      @endcode

    @par Note

     Using `is_positive(x)` is similar to `bitofsign(x) == 0`
     for signed types and is always true for unsigned ones.

    @par Example:

      @snippet is_positive.cpp is_positive

    @par Possible output:

      @snippet is_positive.txt is_positive

  **/

#include <boost/simd/function/scalar/is_positive.hpp>
#include <boost/simd/function/simd/is_positive.hpp>

#endif
