/*  =========================================================================
    zebra - ZEBRA wrapper

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of ZWEBRAP.                                      
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef ZEBRA_LIBRARY_H_INCLUDED
#define ZEBRA_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <microhttpd.h>

//  ZEBRA version macros for compile-time API detection

#define ZEBRA_VERSION_MAJOR 0
#define ZEBRA_VERSION_MINOR 2
#define ZEBRA_VERSION_PATCH 0

#define ZEBRA_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define ZEBRA_VERSION \
    ZEBRA_MAKE_VERSION(ZEBRA_VERSION_MAJOR, ZEBRA_VERSION_MINOR, ZEBRA_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBZEBRA_STATIC
#       define ZEBRA_EXPORT
#   elif defined LIBZEBRA_EXPORTS
#       define ZEBRA_EXPORT __declspec(dllexport)
#   else
#       define ZEBRA_EXPORT __declspec(dllimport)
#   endif
#else
#   define ZEBRA_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _zeb_handler_t zeb_handler_t;
#define ZEB_HANDLER_T_DEFINED
typedef struct _zeb_microhttpd_t zeb_microhttpd_t;
#define ZEB_MICROHTTPD_T_DEFINED
typedef struct _xrap_msg_t xrap_msg_t;
#define XRAP_MSG_T_DEFINED
typedef struct _xrap_traffic_t xrap_traffic_t;
#define XRAP_TRAFFIC_T_DEFINED
typedef struct _zeb_server_t zeb_server_t;
#define ZEB_SERVER_T_DEFINED
typedef struct _zeb_client_t zeb_client_t;
#define ZEB_CLIENT_T_DEFINED


//  Public API classes
#include "zeb_handler.h"
#include "zeb_microhttpd.h"
#include "xrap_msg.h"
#include "xrap_traffic.h"
#include "zeb_server.h"
#include "zeb_client.h"

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/