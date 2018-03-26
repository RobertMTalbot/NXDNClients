/*
 *   Copyright (C) 2015,2016,2018 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#if !defined(CONF_H)
#define	CONF_H

#include <string>
#include <vector>

class CConf
{
public:
  CConf(const std::string& file);
  ~CConf();

  bool read();

  // The General section
  unsigned short getTG() const;
  bool           getDaemon() const;

  // The Id Lookup section
  std::string    getLookupName() const;
  unsigned int   getLookupTime() const;

  // The Log section
  unsigned int   getLogDisplayLevel() const;
  unsigned int   getLogFileLevel() const;
  std::string    getLogFilePath() const;
  std::string    getLogFileRoot() const;

  // The Network section
  unsigned int   getNetworkPort() const;
  bool           getNetworkDebug() const;

  // The NXCore section
  bool           getNXCoreEnabled() const;
  std::string    getNXCoreAddress() const;
  unsigned short getNXCoreTGEnable() const;
  unsigned short getNXCoreTGDisable() const;
  bool           getNXCoreDebug() const;

private:
  std::string    m_file;
  unsigned short m_tg;
  bool           m_daemon;

  std::string    m_lookupName;
  unsigned int   m_lookupTime;

  unsigned int   m_logDisplayLevel;
  unsigned int   m_logFileLevel;
  std::string    m_logFilePath;
  std::string    m_logFileRoot;

  unsigned int   m_networkPort;
  bool           m_networkDebug;

  bool           m_nxCoreEnabled;
  std::string    m_nxCoreAddress;
  unsigned short m_nxCoreTGEnable;
  unsigned short m_nxCoreTGDisable;
  bool           m_nxCoreDebug;
};

#endif
