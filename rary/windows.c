const char *SIGN_windows_c="{FILESIGN=windows.c:20140813155015+0900:5dc0916013fb2dba:Author@DeleGate.ORG:tmEe2gX9cNhVECv5fLvfT/4LeUiqKgjLOfLNjkDCaqj6wRhT4eEemOwXwsPFT9yBitee5BZuoikTnccKk/fCayPGD66akhK5/lvk7mxmNKIVxBoiBcR75s26pccq/QLdLkj5T79MHrakNMfD8sorykWexsz7/trmJetQrYBO10s=}";

/*////////////////////////////////////////////////////////////////////////
Copyright (c) 2007-2008 National Institute of Advanced Industrial Science and Technology (AIST)
AIST-Product-ID: H18PRO-443

Permission to use this material for noncommercial and/or evaluation
purpose, copy this material for your own use,
without fee, is hereby granted
provided that the above copyright notice and this permission notice
appear in all copies.
AIST MAKES NO REPRESENTATIONS ABOUT THE ACCURACY OR SUITABILITY OF THIS
MATERIAL FOR ANY PURPOSE.  IT IS PROVIDED "AS IS", WITHOUT ANY EXPRESS
OR IMPLIED WARRANTIES.
//////////////////////////////////////////////////////////////////////////
Content-Type:	program/C; charset=US-ASCII
Program:	windows.c
Author:		Yutaka Sato <y.sato@delegate.org>
Description:
	A collection of functions to make DeleGate work on Windows.
History:
	970202	created
TODO:
	to be LIBDGWIN.DLL
//////////////////////////////////////////////////////////////////////#*/
/* '"DIGEST-OFF"' */

int win_simple_send;
int RunningAsService;

