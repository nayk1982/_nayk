/****************************************************************************
** Copyright (c) 2019 Evgeny Teterin (nayk) <sutcedortal@gmail.com>
** All right reserved.
**
** Permission is hereby granted, free of charge, to any person obtaining
** a copy of this software and associated documentation files (the
** "Software"), to deal in the Software without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Software, and to
** permit persons to whom the Software is furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
** NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
** LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
** OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
** WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
#ifndef GUI_UTILS_H
#define GUI_UTILS_H

#include "NaykGlobal"
#include <QWidget>

namespace gui_utils { //========================================================

NAYK_EXPORT void moveToCenterScreen(QWidget *widget, int screenNumber = -1);
NAYK_EXPORT void messageError(QWidget *parent, const QString &text);
NAYK_EXPORT void messageWarning(QWidget *parent, const QString &text);
NAYK_EXPORT void messageInfo(QWidget *parent, const QString &text);
NAYK_EXPORT bool messageConfirm(QWidget *parent, const QString &text);
NAYK_EXPORT int messageDialog(QWidget *parent, const QString &text);
NAYK_EXPORT void messageError(const QString &text);
NAYK_EXPORT void messageWarning(const QString &text);
NAYK_EXPORT void messageInfo(const QString &text);
NAYK_EXPORT bool messageConfirm(const QString &text);
NAYK_EXPORT int messageDialog(const QString &text);
NAYK_EXPORT QWidget *mainWindowWidget();
NAYK_EXPORT void showAboutDialog(const QString &title = QString(),
                     const QString &developer = QString(),
                     const QString &description = QString(),
                     bool showOrganization = false);
NAYK_EXPORT void updateApplicationStyle();
NAYK_EXPORT void saveWidgetValue(QWidget *widget, const QString &fileName = QString());
NAYK_EXPORT void readWidgetValue(QWidget *widget, const QString &fileName = QString());

} // namespace gui_utils =======================================================
#endif // GUI_UTILS_H
