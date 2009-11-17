/*
 * ewmh.h - EWMH header
 *
 * Copyright © 2007-2009 Julien Danjou <julien@danjou.info>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifndef AWESOME_EWMH_H
#define AWESOME_EWMH_H

#include "objects/client.h"

void ewmh_init_screen(void);
void ewmh_init(void);
void ewmh_update_net_numbers_of_desktop(void);
void ewmh_update_net_desktop_names(void);
int ewmh_process_client_message(xcb_client_message_event_t *);
void ewmh_update_net_client_list_stacking(void);
void ewmh_client_check_hints(client_t *);
void ewmh_update_workarea(void);
void ewmh_process_client_strut(client_t *, xcb_get_property_reply_t *);
xcb_get_property_cookie_t ewmh_window_icon_get_unchecked(xcb_window_t);
int ewmh_window_icon_from_reply(xcb_get_property_reply_t *);
int ewmh_window_icon_get_reply(xcb_get_property_cookie_t);

#endif
// vim: filetype=c:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:encoding=utf-8:textwidth=80
