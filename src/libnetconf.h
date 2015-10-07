/**
 * \file libnetconf.h
 * \author Radek Krejci <rkrejci@cesnet.cz>
 * \brief libnetconf2 main internal header.
 *
 * Copyright (c) 2015 CESNET, z.s.p.o.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of the Company nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 */

#ifndef NC_LIBNETCONF_H_
#define NC_LIBNETCONF_H_

#include "config.h"
#include "netconf.h"
#include "log_p.h"

/**
 * @brief Enumeration of NETCONF message types.
 */
typedef enum NC_MSG_TYPE {
    NC_MSG_ERROR,       /**< error return value */
    NC_MSG_WOULDBLOCK,  /**< timeout return value */
    NC_MSG_NONE,        /**< no message at input or message was processed internally */
    NC_MSG_HELLO,       /**< \<hello\> message */
    NC_MSG_RPC,         /**< \<rpc\> message */
    NC_MSG_REPLY,       /**< \<rpc-reply\> message */
    NC_MSG_NOTIFICATION /**< \<notification\> message */
} NC_MSG_TYPE;

#endif /* NC_LIBNETCONF_H_ */
