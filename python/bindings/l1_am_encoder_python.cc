/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(l1_am_encoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(abd9b28201d6b1e13eaa2ebe1d06646c)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <nrsc5/l1_am_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <l1_am_encoder_pydoc.h>

void bind_l1_am_encoder(py::module& m)
{

    using l1_am_encoder    = ::gr::nrsc5::l1_am_encoder;


    py::class_<l1_am_encoder, gr::block, gr::basic_block,
        std::shared_ptr<l1_am_encoder>>(m, "l1_am_encoder", D(l1_am_encoder))

        .def(py::init(&l1_am_encoder::make),
           py::arg("sm"),
           D(l1_am_encoder,make)
        )




        ;




}








