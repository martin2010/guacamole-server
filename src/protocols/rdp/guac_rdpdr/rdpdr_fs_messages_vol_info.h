
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is libguac-client-rdp.
 *
 * The Initial Developer of the Original Code is
 * Michael Jumper.
 * Portions created by the Initial Developer are Copyright (C) 2011
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#ifndef __GUAC_RDPDR_FS_MESSAGES_VOL_INFO_H
#define __GUAC_RDPDR_FS_MESSAGES_VOL_INFO_H

/**
 * Handlers for directory queries received over the RDPDR channel via the
 * IRP_MJ_DIRECTORY_CONTROL major function and the IRP_MN_QUERY_DIRECTORY minor
 * function.
 *
 * @file rdpdr_fs_messages_vol_info.h
 */

#ifdef ENABLE_WINPR
#include <winpr/stream.h>
#else
#include "compat/winpr-stream.h"
#endif

#include "rdpdr_service.h"

/**
 * Processes a query request for FileFsVolumeInformation. According to the
 * documentation, this is "used to query information for a volume on which a
 * file system is mounted."
 */
void guac_rdpdr_fs_process_query_volume_info(guac_rdpdr_device* device, wStream* input_stream,
        int completion_id);

/**
 * Processes a query request for FileFsSizeInformation.
 */
void guac_rdpdr_fs_process_query_size_info(guac_rdpdr_device* device, wStream* input_stream,
        int completion_id);

/**
 * Processes a query request for FileFsAttributeInformation.
 */
void guac_rdpdr_fs_process_query_attribute_info(guac_rdpdr_device* device, wStream* input_stream,
        int completion_id);

/**
 * Processes a query request for FileFsFullSizeInformation.
 */
void guac_rdpdr_fs_process_query_full_size_info(guac_rdpdr_device* device, wStream* input_stream,
        int completion_id);

/**
 * Processes a query request for FileFsDeviceInformation.
 */
void guac_rdpdr_fs_process_query_device_info(guac_rdpdr_device* device, wStream* input_stream,
        int completion_id);

#endif
