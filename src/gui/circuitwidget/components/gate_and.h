/***************************************************************************
 *   Copyright (C) 2010 by santiago González                               *
 *   santigoro@gmail.com                                                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef ANDGATE_H
#define ANDGATE_H

#include "gate.h"
#include "component.h"

#include <QObject>

class LibraryItem;

class AndGate : public Gate
{
    Q_OBJECT
    Q_PROPERTY( int    Num_Inputs   READ numInps    WRITE setNumInps    DESIGNABLE true USER true )

    public:

        AndGate( QObject* parent, QString type, QString id );
        ~AndGate();
        
        static Component* construct( QObject* parent, QString type, QString id );
        static LibraryItem *libraryItem();
        
        virtual void paint( QPainter *p, const QStyleOptionGraphicsItem *option, QWidget *widget );
};


#endif

