/* * This file is part of dui-im-framework *
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 * All rights reserved.
 * Contact: Nokia Corporation (directui@nokia.com)
 *
 * If you have questions regarding the use of this file, please contact
 * Nokia at directui@nokia.com.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation
 * and appearing in the file LICENSE.LGPL included in the packaging
 * of this file.
 */
#ifndef DUIPLAINWINDOW_H
#define DUIPLAINWINDOW_H

#include <DuiWindow>

class DuiScene;
class DuiSceneManager;
class QRegion;

class DuiPlainWindow : public DuiWindow
{
    Q_OBJECT

public:
    DuiPlainWindow(QWidget *parent = 0);
    virtual ~DuiPlainWindow();
    static DuiPlainWindow *instance();

public slots:
#ifdef DUI_IM_DISABLE_TRANSLUCENCY
    void updatePosition(const QRegion &region);
#endif

private:
    Q_DISABLE_COPY(DuiPlainWindow);

    static DuiPlainWindow *m_instance;
};

#endif // DUIPLAINWINDOW_H
