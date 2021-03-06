/***************************************************************************
 *   Copyright (C) 2007 by Pierre Marchand   *
 *   pierre@oep-h.com   *
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
#ifndef TAGSETEDITOR_H
#define TAGSETEDITOR_H

#include <ui_tagset.h>

class typotek;

/**
	@author Pierre Marchand <pierre@oep-h.com>
*/
class TagSetEditor :  public QDialog, private Ui::TagSetDialog
{
		Q_OBJECT
	public:
		TagSetEditor(QWidget *parent);

		~TagSetEditor();
	private:
		typotek *m_typo;
		
		void doConnect();
		void doInitLists();
		
	private slots:
		void slotAddTagToSet();
		void slotRemoveToSet();
		void slotNewSet();
		void slotUpdateTagsOfSet(QListWidgetItem* item);
		void slotDeleteSet();
		
};

#endif
