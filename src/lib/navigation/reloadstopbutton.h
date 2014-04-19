/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2010-2014  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef RELOADSTOPBUTTON_H
#define RELOADSTOPBUTTON_H

#include <QWidget>

#include "qzcommon.h"

class QTimer;

class ToolButton;

class QUPZILLA_EXPORT ReloadStopButton : public QWidget
{
    Q_OBJECT

public:
    explicit ReloadStopButton(QWidget* parent = 0);

    void showStopButton();
    void showReloadButton();

signals:
    void stopClicked();
    void reloadClicked();

private slots:
    void updateButton();

private:
    bool m_loadInProgress;
    QTimer* m_updateTimer;

    ToolButton* m_buttonStop;
    ToolButton* m_buttonReload;
};

#endif // RELOADSTOPBUTTON_H
