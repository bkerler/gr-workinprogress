/* -*- c++ -*- */
/*
 * Copyright 2019 Derek Kozel.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_EXAMPLE_BASIS_CHANGE_H
#define INCLUDED_EXAMPLE_BASIS_CHANGE_H

#include <example/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace example {

    /*!
     * \brief <+description of block+>
     * \ingroup example
     *
     */
    class EXAMPLE_API basis_change : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<basis_change> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of example::basis_change.
       *
       * To avoid accidental use of raw pointers, example::basis_change's
       * constructor is in a private implementation
       * class. example::basis_change::make is the public interface for
       * creating new instances.
       */
      static sptr make(int vlen, bool circ_to_lin);
    };

  } // namespace example
} // namespace gr

#endif /* INCLUDED_EXAMPLE_BASIS_CHANGE_H */

