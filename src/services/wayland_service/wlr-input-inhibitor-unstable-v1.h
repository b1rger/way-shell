/* Generated by wayland-scanner 1.22.0 */

#ifndef WLR_INPUT_INHIBIT_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define WLR_INPUT_INHIBIT_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_wlr_input_inhibit_unstable_v1 The wlr_input_inhibit_unstable_v1 protocol
 * @section page_ifaces_wlr_input_inhibit_unstable_v1 Interfaces
 * - @subpage page_iface_zwlr_input_inhibit_manager_v1 - inhibits input events to other clients
 * - @subpage page_iface_zwlr_input_inhibitor_v1 - inhibits input to other clients
 * @section page_copyright_wlr_input_inhibit_unstable_v1 Copyright
 * <pre>
 *
 * Copyright © 2018 Drew DeVault
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
 * </pre>
 */
struct zwlr_input_inhibit_manager_v1;
struct zwlr_input_inhibitor_v1;

#ifndef ZWLR_INPUT_INHIBIT_MANAGER_V1_INTERFACE
#define ZWLR_INPUT_INHIBIT_MANAGER_V1_INTERFACE
/**
 * @page page_iface_zwlr_input_inhibit_manager_v1 zwlr_input_inhibit_manager_v1
 * @section page_iface_zwlr_input_inhibit_manager_v1_desc Description
 *
 * Clients can use this interface to prevent input events from being sent to
 * any surfaces but its own, which is useful for example in lock screen
 * software. It is assumed that access to this interface will be locked down
 * to whitelisted clients by the compositor.
 *
 * Note! This protocol is deprecated and not intended for production use.
 * For screen lockers, use the ext-session-lock-v1 protocol.
 * @section page_iface_zwlr_input_inhibit_manager_v1_api API
 * See @ref iface_zwlr_input_inhibit_manager_v1.
 */
/**
 * @defgroup iface_zwlr_input_inhibit_manager_v1 The zwlr_input_inhibit_manager_v1 interface
 *
 * Clients can use this interface to prevent input events from being sent to
 * any surfaces but its own, which is useful for example in lock screen
 * software. It is assumed that access to this interface will be locked down
 * to whitelisted clients by the compositor.
 *
 * Note! This protocol is deprecated and not intended for production use.
 * For screen lockers, use the ext-session-lock-v1 protocol.
 */
extern const struct wl_interface zwlr_input_inhibit_manager_v1_interface;
#endif
#ifndef ZWLR_INPUT_INHIBITOR_V1_INTERFACE
#define ZWLR_INPUT_INHIBITOR_V1_INTERFACE
/**
 * @page page_iface_zwlr_input_inhibitor_v1 zwlr_input_inhibitor_v1
 * @section page_iface_zwlr_input_inhibitor_v1_desc Description
 *
 * While this resource exists, input to clients other than the owner of the
 * inhibitor resource will not receive input events. Any client which
 * previously had focus will receive a leave event and will not be given
 * focus again. The client that owns this resource will receive all input
 * events normally. The compositor will also disable all of its own input
 * processing (such as keyboard shortcuts) while the inhibitor is active.
 *
 * The compositor may continue to send input events to selected clients,
 * such as an on-screen keyboard (via the input-method protocol).
 * @section page_iface_zwlr_input_inhibitor_v1_api API
 * See @ref iface_zwlr_input_inhibitor_v1.
 */
/**
 * @defgroup iface_zwlr_input_inhibitor_v1 The zwlr_input_inhibitor_v1 interface
 *
 * While this resource exists, input to clients other than the owner of the
 * inhibitor resource will not receive input events. Any client which
 * previously had focus will receive a leave event and will not be given
 * focus again. The client that owns this resource will receive all input
 * events normally. The compositor will also disable all of its own input
 * processing (such as keyboard shortcuts) while the inhibitor is active.
 *
 * The compositor may continue to send input events to selected clients,
 * such as an on-screen keyboard (via the input-method protocol).
 */
extern const struct wl_interface zwlr_input_inhibitor_v1_interface;
#endif

#ifndef ZWLR_INPUT_INHIBIT_MANAGER_V1_ERROR_ENUM
#define ZWLR_INPUT_INHIBIT_MANAGER_V1_ERROR_ENUM
enum zwlr_input_inhibit_manager_v1_error {
	/**
	 * an input inhibitor is already in use on the compositor
	 */
	ZWLR_INPUT_INHIBIT_MANAGER_V1_ERROR_ALREADY_INHIBITED = 0,
};
#endif /* ZWLR_INPUT_INHIBIT_MANAGER_V1_ERROR_ENUM */

#define ZWLR_INPUT_INHIBIT_MANAGER_V1_GET_INHIBITOR 0


/**
 * @ingroup iface_zwlr_input_inhibit_manager_v1
 */
#define ZWLR_INPUT_INHIBIT_MANAGER_V1_GET_INHIBITOR_SINCE_VERSION 1

/** @ingroup iface_zwlr_input_inhibit_manager_v1 */
static inline void
zwlr_input_inhibit_manager_v1_set_user_data(struct zwlr_input_inhibit_manager_v1 *zwlr_input_inhibit_manager_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwlr_input_inhibit_manager_v1, user_data);
}

/** @ingroup iface_zwlr_input_inhibit_manager_v1 */
static inline void *
zwlr_input_inhibit_manager_v1_get_user_data(struct zwlr_input_inhibit_manager_v1 *zwlr_input_inhibit_manager_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwlr_input_inhibit_manager_v1);
}

static inline uint32_t
zwlr_input_inhibit_manager_v1_get_version(struct zwlr_input_inhibit_manager_v1 *zwlr_input_inhibit_manager_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwlr_input_inhibit_manager_v1);
}

/** @ingroup iface_zwlr_input_inhibit_manager_v1 */
static inline void
zwlr_input_inhibit_manager_v1_destroy(struct zwlr_input_inhibit_manager_v1 *zwlr_input_inhibit_manager_v1)
{
	wl_proxy_destroy((struct wl_proxy *) zwlr_input_inhibit_manager_v1);
}

/**
 * @ingroup iface_zwlr_input_inhibit_manager_v1
 *
 * Activates the input inhibitor. As long as the inhibitor is active, the
 * compositor will not send input events to other clients.
 */
static inline struct zwlr_input_inhibitor_v1 *
zwlr_input_inhibit_manager_v1_get_inhibitor(struct zwlr_input_inhibit_manager_v1 *zwlr_input_inhibit_manager_v1)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_flags((struct wl_proxy *) zwlr_input_inhibit_manager_v1,
			 ZWLR_INPUT_INHIBIT_MANAGER_V1_GET_INHIBITOR, &zwlr_input_inhibitor_v1_interface, wl_proxy_get_version((struct wl_proxy *) zwlr_input_inhibit_manager_v1), 0, NULL);

	return (struct zwlr_input_inhibitor_v1 *) id;
}

#define ZWLR_INPUT_INHIBITOR_V1_DESTROY 0


/**
 * @ingroup iface_zwlr_input_inhibitor_v1
 */
#define ZWLR_INPUT_INHIBITOR_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwlr_input_inhibitor_v1 */
static inline void
zwlr_input_inhibitor_v1_set_user_data(struct zwlr_input_inhibitor_v1 *zwlr_input_inhibitor_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwlr_input_inhibitor_v1, user_data);
}

/** @ingroup iface_zwlr_input_inhibitor_v1 */
static inline void *
zwlr_input_inhibitor_v1_get_user_data(struct zwlr_input_inhibitor_v1 *zwlr_input_inhibitor_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwlr_input_inhibitor_v1);
}

static inline uint32_t
zwlr_input_inhibitor_v1_get_version(struct zwlr_input_inhibitor_v1 *zwlr_input_inhibitor_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwlr_input_inhibitor_v1);
}

/**
 * @ingroup iface_zwlr_input_inhibitor_v1
 *
 * Destroy the inhibitor and allow other clients to receive input.
 */
static inline void
zwlr_input_inhibitor_v1_destroy(struct zwlr_input_inhibitor_v1 *zwlr_input_inhibitor_v1)
{
	wl_proxy_marshal_flags((struct wl_proxy *) zwlr_input_inhibitor_v1,
			 ZWLR_INPUT_INHIBITOR_V1_DESTROY, NULL, wl_proxy_get_version((struct wl_proxy *) zwlr_input_inhibitor_v1), WL_MARSHAL_FLAG_DESTROY);
}

#ifdef  __cplusplus
}
#endif

#endif
