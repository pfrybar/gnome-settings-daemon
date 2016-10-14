/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2007 William Jon McCann <mccann@jhu.edu>
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __GSD_A11Y_SETTINGS_MANAGER_H
#define __GSD_A11Y_SETTINGS_MANAGER_H

#include <glib-object.h>

G_BEGIN_DECLS

#define GSD_TYPE_A11Y_SETTINGS_MANAGER         (gsd_a11y_settings_manager_get_type ())
#define GSD_A11Y_SETTINGS_MANAGER(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_A11Y_SETTINGS_MANAGER, GsdA11ySettingsManager))
#define GSD_A11Y_SETTINGS_MANAGER_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), GSD_TYPE_A11Y_SETTINGS_MANAGER, GsdA11ySettingsManagerClass))
#define GSD_IS_A11Y_SETTINGS_MANAGER(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_A11Y_SETTINGS_MANAGER))
#define GSD_IS_A11Y_SETTINGS_MANAGER_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), GSD_TYPE_A11Y_SETTINGS_MANAGER))
#define GSD_A11Y_SETTINGS_MANAGER_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GSD_TYPE_A11Y_SETTINGS_MANAGER, GsdA11ySettingsManagerClass))

typedef struct GsdA11ySettingsManagerPrivate GsdA11ySettingsManagerPrivate;

typedef struct
{
        GObject                        parent;
        GsdA11ySettingsManagerPrivate *priv;
} GsdA11ySettingsManager;

typedef struct
{
        GObjectClass   parent_class;
} GsdA11ySettingsManagerClass;

GType                   gsd_a11y_settings_manager_get_type            (void);

GsdA11ySettingsManager *gsd_a11y_settings_manager_new                 (void);
gboolean                gsd_a11y_settings_manager_start               (GsdA11ySettingsManager *manager,
                                                                       GError         **error);
void                    gsd_a11y_settings_manager_stop                (GsdA11ySettingsManager *manager);

G_END_DECLS

#endif /* __GSD_A11Y_SETTINGS_MANAGER_H */