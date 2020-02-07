/*
Copyright (C) 2015, 2016 SoLIM Group, University of Wisconsin-Maison, 
Madison, Wisconsin, USA and Institute of Geographic Sciences and Natural 
Resources Research, Chinese Academy of Sciences, Beijing, China

This program is free software: you can redistribute it and/or 
modify it under the terms of the GNU General Public License 
version 3, 2007 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
GNU General Public License for more details.

A copy of the GNU General Public License version 3 is provided
 in file GPLv3license.txt. This is also available at: 
 https://www.gnu.org/licenses/gpl-3.0.html.

==================additional conditions============================
If the GNU General Public License conditions do not meet your 
needs to use or incorporate this program (or part of it) into 
other software, SoLIM Solutions may also be available under 
alternative licenses (multi licensing). This allows the program 
to be sold or licensed for use in proprietary applications. In 
this case, please contact any of the members of the SoLIM Group 
listed below to discuss a licensing agreement.
SoLIM Group:
(A-Xing Zhu, Cheng-Zhi Qin, Peng Liang, Fang-He Zhao)
Stat Key Laboratory of Resources and Environmental Information System
Institute of Geographic Sciences and Natural Resources Research,
Chinese Academy of Sciences
11A Datun Road, Chaoyang District, Beijing 100101, PR China
Or 
(A-Xing Zhu)
Department of Geography
University of Wisconsin-Maison
550 N. Park St., Madison, WI 53706, USA
https://solim.geography.wisc.edu/index.htm
Email: dsm_solim@yahoo.com

If you wish to use this program (or part of it), please do credit us
either by citing the proper references in your published papers or in 
your program. Related publications on SoLIM can be found in Appendix 
D: SoLIM Publications in the Appendices of the SoLIM Solutions Help 
system at: http://solim.geography.wisc.edu/software/SoLIMSolutions2013/Help_HTML/index.html. 



By downloading this program, you have agreed to conditions of this license.
*/
#ifndef _DBFRULEBASE_H
#define _DBFRULEBASE_H

/******************************************************************************
 * DBFRuleBase
 *
 * Purpose:  Header file for class DBFRuleBase
 * Author:   Erika Dade
 * Date:	 29 March 2005
 *
 ******************************************************************************
 */
#include "stdafx.h"
using namespace std;

#ifndef KNOWLEDGE_H
#include "knowledge.h"
#endif

#ifndef UTILITY_H
#include "utility.h"
#endif

#ifndef _DBFOPEN_H
#include "dbfopen.h"
#endif

#ifndef _DBFIO_H
#include "dbfio.h"
#endif

// DBF field order and names
class DBFRuleBase : public DBFIO {
private:
	// DBF field variables
	int		uid;
	CString rbName;		
	int		rlID;
	int		rlTypeID;
	int		rlUID;
	CString rlName;
	bool    rlMsk;	//use mask or not
	CString rlMskF; //mask file
	bool	rlInv;	//inverse mask value or not
	int		atID;
	CString atName;
	CString atAlg;
	float	atMemberValue;
	int		atPosNeg;
	bool    atMsk;	//use mask or not
	CString atMskF; //mask file
	bool	atInv;	//inverse mask value or not
	int		fnID;
	CString fnName;
	float	fnValue1;
	float	fnValue2;
	bool	fnUseOrNot;
	float	fnWeight;
	CString fnFunctionType;
	float	fnWidth1;
	float	fnR1;
	float	fnK1;
	float	fnWidth2;
	float	fnR2;
	float	fnK2;

public:

	DBFRuleBase();
	~DBFRuleBase();

	int openDBF( CString DBFName, bool bCreateNew );


	int writeDBF( const RuleBase *rb);
	int readDBF( RuleBase *rb);

};

#endif
