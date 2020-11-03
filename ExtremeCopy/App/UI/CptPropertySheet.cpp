/****************************************************************************

Copyright (c) 2008-2020 Kevin Wu (Wu Feng)

github: https://github.com/kevinwu1024/ExtremeCopy
site: http://www.easersoft.com

Licensed under the Apache License, Version 2.0 License (the "License"); you may not use this file except
in compliance with the License. You may obtain a copy of the License at

https://opensource.org/licenses/Apache-2.0

****************************************************************************/

#include "StdAfx.h"
#include "CptPropertySheet.h"

CptPropertySheet::CptPropertySheet(void)
{
}

CptPropertySheet::~CptPropertySheet(void)
{
}


int CptPropertySheet::AddPage(const PROPSHEETPAGE& page) 
{
	m_PageVer.push_back(page) ;

	return (int)m_PageVer.size() ;
}

void CptPropertySheet::ClearPage() 
{
	m_PageVer.clear() ;
}