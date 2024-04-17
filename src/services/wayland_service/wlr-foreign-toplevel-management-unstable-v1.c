/* Generated by wayland-scanner 1.22.0 */

/*
 * Copyright © 2018 Ilia Bozhinov
 *
 * Permission to use, copy, modify, distribute, and sell this
 * software and its documentation for any purpose is hereby granted
 * without fee, provided that the above copyright notice appear in
 * all copies and that both that copyright notice and this permission
 * notice appear in supporting documentation, and that the name of
 * the copyright holders not be used in advertising or publicity
 * pertaining to distribution of the software without specific,
 * written prior permission.  The copyright holders make no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied
 * warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
 * ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
 * THIS SOFTWARE.
 */

#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif

extern const struct wl_interface wl_output_interface;
extern const struct wl_interface wl_seat_interface;
extern const struct wl_interface wl_surface_interface;
extern const struct wl_interface zwlr_foreign_toplevel_handle_v1_interface;

static const struct wl_interface *wlr_foreign_toplevel_management_unstable_v1_types[] = {
	NULL,
	&zwlr_foreign_toplevel_handle_v1_interface,
	&wl_seat_interface,
	&wl_surface_interface,
	NULL,
	NULL,
	NULL,
	NULL,
	&wl_output_interface,
	&wl_output_interface,
	&wl_output_interface,
	&zwlr_foreign_toplevel_handle_v1_interface,
};

static const struct wl_message zwlr_foreign_toplevel_manager_v1_requests[] = {
	{ "stop", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
};

static const struct wl_message zwlr_foreign_toplevel_manager_v1_events[] = {
	{ "toplevel", "n", wlr_foreign_toplevel_management_unstable_v1_types + 1 },
	{ "finished", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
};

WL_PRIVATE const struct wl_interface zwlr_foreign_toplevel_manager_v1_interface = {
	"zwlr_foreign_toplevel_manager_v1", 3,
	1, zwlr_foreign_toplevel_manager_v1_requests,
	2, zwlr_foreign_toplevel_manager_v1_events,
};

static const struct wl_message zwlr_foreign_toplevel_handle_v1_requests[] = {
	{ "set_maximized", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "unset_maximized", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "set_minimized", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "unset_minimized", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "activate", "o", wlr_foreign_toplevel_management_unstable_v1_types + 2 },
	{ "close", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "set_rectangle", "oiiii", wlr_foreign_toplevel_management_unstable_v1_types + 3 },
	{ "destroy", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "set_fullscreen", "2?o", wlr_foreign_toplevel_management_unstable_v1_types + 8 },
	{ "unset_fullscreen", "2", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
};

static const struct wl_message zwlr_foreign_toplevel_handle_v1_events[] = {
	{ "title", "s", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "app_id", "s", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "output_enter", "o", wlr_foreign_toplevel_management_unstable_v1_types + 9 },
	{ "output_leave", "o", wlr_foreign_toplevel_management_unstable_v1_types + 10 },
	{ "state", "a", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "done", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "closed", "", wlr_foreign_toplevel_management_unstable_v1_types + 0 },
	{ "parent", "3?o", wlr_foreign_toplevel_management_unstable_v1_types + 11 },
};

WL_PRIVATE const struct wl_interface zwlr_foreign_toplevel_handle_v1_interface = {
	"zwlr_foreign_toplevel_handle_v1", 3,
	10, zwlr_foreign_toplevel_handle_v1_requests,
	8, zwlr_foreign_toplevel_handle_v1_events,
};

