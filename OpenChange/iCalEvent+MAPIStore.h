/* iCalEvent+MAPIStore.h - this file is part of SOGo
 *
 * Copyright (C) 2012 Inverse inc
 *
 * Author: Wolfgang Sourdeau <wsourdeau@inverse.ca>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef ICALEVENT_MAPISTORE_H
#define ICALEVENT_MAPISTORE_H

#include <talloc.h>

#import <NGCards/iCalEvent.h>

@class MAPIStoreUserContext;
@class NSDictionary;
@class NSString;
@class SOGoUser;

@interface iCalEvent (MAPIStoreProperties)

- (void) updateFromMAPIProperties: (NSDictionary *) properties
                    inUserContext: (MAPIStoreUserContext *) userContext
                   withActiveUser: (SOGoUser *) activeUser
                         inMemCtx: (TALLOC_CTX *) memCtx;
@end

#endif /* ICALEVENT_MAPISTORE_H */
