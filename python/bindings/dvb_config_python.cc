/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(dvb_config.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(cdea1da22cec8bc17682c8e793ab87ca)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <dvbs2rx/dvb_config.h>
// pydoc.h is automatically generated in the build directory
#include <dvb_config_pydoc.h>

void bind_dvb_config(py::module& m)
{


    py::enum_<::gr::dvbs2rx::dvb_standard_t>(m, "dvb_standard_t")
        .value("STANDARD_DVBS2", ::gr::dvbs2rx::STANDARD_DVBS2) // 0
        .value("STANDARD_DVBT2", ::gr::dvbs2rx::STANDARD_DVBT2) // 1
        .export_values();
    py::enum_<::gr::dvbs2rx::dvb_code_rate_t>(m, "dvb_code_rate_t")
        .value("C1_4", ::gr::dvbs2rx::C1_4)                         // 0
        .value("C1_3", ::gr::dvbs2rx::C1_3)                         // 1
        .value("C2_5", ::gr::dvbs2rx::C2_5)                         // 2
        .value("C1_2", ::gr::dvbs2rx::C1_2)                         // 3
        .value("C3_5", ::gr::dvbs2rx::C3_5)                         // 4
        .value("C2_3", ::gr::dvbs2rx::C2_3)                         // 5
        .value("C3_4", ::gr::dvbs2rx::C3_4)                         // 6
        .value("C4_5", ::gr::dvbs2rx::C4_5)                         // 7
        .value("C5_6", ::gr::dvbs2rx::C5_6)                         // 8
        .value("C7_8", ::gr::dvbs2rx::C7_8)                         // 9
        .value("C8_9", ::gr::dvbs2rx::C8_9)                         // 10
        .value("C9_10", ::gr::dvbs2rx::C9_10)                       // 11
        .value("C13_45", ::gr::dvbs2rx::C13_45)                     // 12
        .value("C9_20", ::gr::dvbs2rx::C9_20)                       // 13
        .value("C90_180", ::gr::dvbs2rx::C90_180)                   // 14
        .value("C96_180", ::gr::dvbs2rx::C96_180)                   // 15
        .value("C11_20", ::gr::dvbs2rx::C11_20)                     // 16
        .value("C100_180", ::gr::dvbs2rx::C100_180)                 // 17
        .value("C104_180", ::gr::dvbs2rx::C104_180)                 // 18
        .value("C26_45", ::gr::dvbs2rx::C26_45)                     // 19
        .value("C18_30", ::gr::dvbs2rx::C18_30)                     // 20
        .value("C28_45", ::gr::dvbs2rx::C28_45)                     // 21
        .value("C23_36", ::gr::dvbs2rx::C23_36)                     // 22
        .value("C116_180", ::gr::dvbs2rx::C116_180)                 // 23
        .value("C20_30", ::gr::dvbs2rx::C20_30)                     // 24
        .value("C124_180", ::gr::dvbs2rx::C124_180)                 // 25
        .value("C25_36", ::gr::dvbs2rx::C25_36)                     // 26
        .value("C128_180", ::gr::dvbs2rx::C128_180)                 // 27
        .value("C13_18", ::gr::dvbs2rx::C13_18)                     // 28
        .value("C132_180", ::gr::dvbs2rx::C132_180)                 // 29
        .value("C22_30", ::gr::dvbs2rx::C22_30)                     // 30
        .value("C135_180", ::gr::dvbs2rx::C135_180)                 // 31
        .value("C140_180", ::gr::dvbs2rx::C140_180)                 // 32
        .value("C7_9", ::gr::dvbs2rx::C7_9)                         // 33
        .value("C154_180", ::gr::dvbs2rx::C154_180)                 // 34
        .value("C11_45", ::gr::dvbs2rx::C11_45)                     // 35
        .value("C4_15", ::gr::dvbs2rx::C4_15)                       // 36
        .value("C14_45", ::gr::dvbs2rx::C14_45)                     // 37
        .value("C7_15", ::gr::dvbs2rx::C7_15)                       // 38
        .value("C8_15", ::gr::dvbs2rx::C8_15)                       // 39
        .value("C32_45", ::gr::dvbs2rx::C32_45)                     // 40
        .value("C2_9_VLSNR", ::gr::dvbs2rx::C2_9_VLSNR)             // 41
        .value("C1_5_MEDIUM", ::gr::dvbs2rx::C1_5_MEDIUM)           // 42
        .value("C11_45_MEDIUM", ::gr::dvbs2rx::C11_45_MEDIUM)       // 43
        .value("C1_3_MEDIUM", ::gr::dvbs2rx::C1_3_MEDIUM)           // 44
        .value("C1_5_VLSNR_SF2", ::gr::dvbs2rx::C1_5_VLSNR_SF2)     // 45
        .value("C11_45_VLSNR_SF2", ::gr::dvbs2rx::C11_45_VLSNR_SF2) // 46
        .value("C1_5_VLSNR", ::gr::dvbs2rx::C1_5_VLSNR)             // 47
        .value("C4_15_VLSNR", ::gr::dvbs2rx::C4_15_VLSNR)           // 48
        .value("C1_3_VLSNR", ::gr::dvbs2rx::C1_3_VLSNR)             // 49
        .value("C_OTHER", ::gr::dvbs2rx::C_OTHER)                   // 50
        .export_values();
    py::enum_<::gr::dvbs2rx::dvb_framesize_t>(m, "dvb_framesize_t")
        .value("FECFRAME_SHORT", ::gr::dvbs2rx::FECFRAME_SHORT)   // 0
        .value("FECFRAME_NORMAL", ::gr::dvbs2rx::FECFRAME_NORMAL) // 1
        .value("FECFRAME_MEDIUM", ::gr::dvbs2rx::FECFRAME_MEDIUM) // 2
        .export_values();
    py::enum_<::gr::dvbs2rx::dvb_constellation_t>(m, "dvb_constellation_t")
        .value("MOD_QPSK", ::gr::dvbs2rx::MOD_QPSK)                     // 0
        .value("MOD_16QAM", ::gr::dvbs2rx::MOD_16QAM)                   // 1
        .value("MOD_64QAM", ::gr::dvbs2rx::MOD_64QAM)                   // 2
        .value("MOD_256QAM", ::gr::dvbs2rx::MOD_256QAM)                 // 3
        .value("MOD_8PSK", ::gr::dvbs2rx::MOD_8PSK)                     // 4
        .value("MOD_8APSK", ::gr::dvbs2rx::MOD_8APSK)                   // 5
        .value("MOD_16APSK", ::gr::dvbs2rx::MOD_16APSK)                 // 6
        .value("MOD_8_8APSK", ::gr::dvbs2rx::MOD_8_8APSK)               // 7
        .value("MOD_32APSK", ::gr::dvbs2rx::MOD_32APSK)                 // 8
        .value("MOD_4_12_16APSK", ::gr::dvbs2rx::MOD_4_12_16APSK)       // 9
        .value("MOD_4_8_4_16APSK", ::gr::dvbs2rx::MOD_4_8_4_16APSK)     // 10
        .value("MOD_64APSK", ::gr::dvbs2rx::MOD_64APSK)                 // 11
        .value("MOD_8_16_20_20APSK", ::gr::dvbs2rx::MOD_8_16_20_20APSK) // 12
        .value("MOD_4_12_20_28APSK", ::gr::dvbs2rx::MOD_4_12_20_28APSK) // 13
        .value("MOD_128APSK", ::gr::dvbs2rx::MOD_128APSK)               // 14
        .value("MOD_256APSK", ::gr::dvbs2rx::MOD_256APSK)               // 15
        .value("MOD_BPSK", ::gr::dvbs2rx::MOD_BPSK)                     // 16
        .value("MOD_BPSK_SF2", ::gr::dvbs2rx::MOD_BPSK_SF2)             // 17
        .value("MOD_8VSB", ::gr::dvbs2rx::MOD_8VSB)                     // 18
        .value("MOD_OTHER", ::gr::dvbs2rx::MOD_OTHER)                   // 19
        .export_values();
    py::enum_<::gr::dvbs2rx::dvb_guardinterval_t>(m, "dvb_guardinterval_t")
        .value("GI_1_32", ::gr::dvbs2rx::GI_1_32)     // 0
        .value("GI_1_16", ::gr::dvbs2rx::GI_1_16)     // 1
        .value("GI_1_8", ::gr::dvbs2rx::GI_1_8)       // 2
        .value("GI_1_4", ::gr::dvbs2rx::GI_1_4)       // 3
        .value("GI_1_128", ::gr::dvbs2rx::GI_1_128)   // 4
        .value("GI_19_128", ::gr::dvbs2rx::GI_19_128) // 5
        .value("GI_19_256", ::gr::dvbs2rx::GI_19_256) // 6
        .export_values();
    py::enum_<::gr::dvbs2rx::dvb_outputmode_t>(m, "dvb_outputmode_t")
        .value("OM_CODEWORD", ::gr::dvbs2rx::OM_CODEWORD) // 0
        .value("OM_MESSAGE", ::gr::dvbs2rx::OM_MESSAGE)   // 1
        .export_values();
    py::enum_<::gr::dvbs2rx::dvb_infomode_t>(m, "dvb_infomode_t")
        .value("INFO_OFF", ::gr::dvbs2rx::INFO_OFF) // 0
        .value("INFO_ON", ::gr::dvbs2rx::INFO_ON)   // 1
        .export_values();
}
