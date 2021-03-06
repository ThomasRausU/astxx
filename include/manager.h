/* vim: set et sw=3 tw=0 fo=croqlaw cino=t0:
 *
 * Astxx, the Asterisk C++ API and Utility Library.
 * Copyright (C) 2005-2007  Matthew A. Nicholson
 * Copyright (C) 2005-2007  Digium, Inc.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/** @file
 *
 * Include this file to use the astxx Asterisk Manager API.
 * 
 * This file includes all other files needed to use the manager as well as all 
 * of the manager actions/commands.
 */

#ifndef ASTXX_MANAGER_H
#define ASTXX_MANAGER_H

#include "manager/connection.h"
#include "manager/error.h"
#include "manager/message.h"

#include "manager/action/queue_status.h"
#include "manager/action/queue_pause.h"
#include "manager/action/absolute_timeout.h"
#include "manager/action/command.h"
#include "manager/action/extension_state.h"
#include "manager/action/getvar.h"
#include "manager/action/hangup.h"
#include "manager/action/list_commands.h"
#include "manager/action/login.h"
#include "manager/action/logoff.h"
#include "manager/action/mailbox_count.h"
#include "manager/action/mailbox_status.h"
#include "manager/action/originate.h"
#include "manager/action/ping.h"
#include "manager/action/redirect.h"
#include "manager/action/setvar.h"
#include "manager/action/status.h"
#include "manager/action/user_event.h"


#endif
