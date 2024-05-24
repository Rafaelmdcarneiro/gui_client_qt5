/*
 * Copyright (C) 2014-2016 Symeon Huang <hzwhuang@gmail.com>
 *
 * shadowsocks-qt5 is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * shadowsocks-qt5 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libQtShadowsocks; see the file LICENSE. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef GENERALVALIDATOR_H
#define GENERALVALIDATOR_H
#include <QString>
#include <QStringList>

class GeneralValidator
{
public:
    static bool validateAll(const QString &input);
    static bool validateSocks5(const QString &input);
    static bool validateHttp(const QString &input);
    static bool validateSS(const QString &input);
    static bool validateSSOld(const QString &input);
    static bool validateSSR(const QString &input);
    static bool validateVmess(const QString &input);
    static bool validateTrojan(const QString &input);
    static bool validateSnell(const QString &input);
    static bool validatePort(const QString &port);

    /*
     * Return supported encryption method list at run-time
     * To avoid repetitive query, please store return result as static.
     */
    static QStringList supportedMethodList();
};

#endif // SSVALIDATOR_H
