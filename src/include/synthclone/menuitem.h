/*
 * libsynthclone - a plugin API for `synthclone`
 * Copyright (C) 2011 Devin Anderson
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation; either version 2.1 of the License, or (at your
 * option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __SYNTHCLONE_MENUITEM_H__
#define __SYNTHCLONE_MENUITEM_H__

#include <QtCore/QObject>

namespace synthclone {

    /**
     * Base class that contains common functionality used by MenuAction and
     * MenuSeparator objects.
     */

    class MenuItem: public QObject {

        Q_OBJECT

    public:

        /**
         * Gets a boolean indicating whether or not the item is visible.
         *
         * @returns
         *   The specified boolean.
         */

        bool
        isVisible() const;

    public slots:

        /**
         * Sets the visibility of this item.
         *
         * @param visible
         *   Whether or not the menu item should be visible.
         */

        void
        setVisible(bool visible);

    signals:

        /**
         * Emitted when the visibility of this item is changed.
         *
         * @param visible
         *   Whether or not the menu item is visible.
         */

        void
        visibilityChanged(bool visible);

    protected:

        /**
         * Constructs a new MenuItem object.  This constructor cannot be called
         * directly; instead, the subclass constructors should be used.
         *
         * @param parent
         *   The parent object of the new menu item.
         *
         * @sa
         *   MenuAction, MenuSeparator
         */

        explicit
        MenuItem(QObject *parent=0);

        /**
         * Destroys a MenuItem.
         */

        virtual
        ~MenuItem();

    private:

        bool visible;

    };

}

#endif
