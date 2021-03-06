/******************************************************************************
*
*   Name:           
*
*   Description:    
*
*   Copyright:      (c) 2005-2050    IC Plus Corp.
*                   All rights reserved.  By Jesse
*
*******************************************************************************/



/******************************************************************************
Need to modify following string to match bank# :
* (for example bank13)
* files_table07 (x2) in array and in fs_open13()
* cgi_table07   (x2) in array and in fs_open13()
* fs_open07     (x1) in fs_open13()
* datacpy07     (x1) in datacpy13()
* get_tag07     (x1) in get_tag13()
******************************************************************************/







/******************************************************************************
*
*   Name:           htmfiles.c
*
*   Description:    htmfiles in bank0
*
*   Copyright:      (c) 2005-2050    IC Plus Corp.
*                   All rights reserved.  By Chance
*
*******************************************************************************/
#include <stdlib.h>
#include "type_def.h"
#include "fs.h"
#include "uip.h"
#include "httpd.h"
#include <string.h>
//*****include html files*********

#include "smtp_htm.c"
extern u8_t ssi_smtp(u8_t varid, data_value *vp);
extern u8_t cgi_smtp(u8_t cnt, req_data *vp);

//*************File System*********
SFILENAME code files_table13[] = {
	{"smtp.htm",			smtp_htm_file,			sizeof(smtp_htm_file),		0},
	{"cgi/smtp.cgi",        NULL,             		NULL,                    	1},	
	{ NULL,                 NULL,             		NULL,                    	NO_EX_FUNC},
};
//*************CGI service function table*********
CGI_FUNC_T code cgi_table13[] = {
{ssi_smtp,			smtp_htm_tags},
{cgi_smtp,			NULL}, 
{NULL,        		NULL},
};

struct html_tags  smtp_htm_tags_Buffer =  { 0, 0 }; 


/******************************************************************************
*
*  Function:    fs_open13
*
*  Description:  find request filename or cgi in bank13
*               
*  Parameters:  address of filename
*               
*  Returns:     address of filesystem
*               
*******************************************************************************/
SFILENAME *  fs_open13(char *name)
{
    SFILENAME  *ptr;
    HS->cgi_func_id=NO_EX_FUNC;
    if (name[0] == '/')
    {
        name++;
        if (*name == '\0')
            return NULL;
    }
    for (ptr = files_table13; ptr->file_name != NULL; ptr++)
    {
        if (strcmp(name, ptr->file_name) == 0)
        {
					 HS->file=*ptr;
        	 if(ptr->func_id!=NO_EX_FUNC)
        	 {
        	 		HS->cgi_func=cgi_table13[ptr->func_id];
        	 		HS->cgi_func_id=ptr->func_id;
        	 }
           return &HS->file;
	  	}
    }
    return NULL;
}

/******************************************************************************
*
*  Function:    datacpy13
*
*  Description: data copy function for Bank13
*               
*  Parameters:  data copy structure
*               
*  Returns:     None
*               
*******************************************************************************/
void datacpy13(mem_cpy_fs *inputdata)
{
    memcpy(inputdata->dest_ptr, inputdata->source_ptr, inputdata->len ) ;      
}

/******************************************************************************
*
*  Function:    get_tag13
*
*  Description: data copy function for Bank13
*               
*  Parameters:  index
*               
*  Returns:     None
*               
*******************************************************************************/
struct html_tags get_tag13(u8_t index)
{
		smtp_htm_tags_Buffer.pos   =smtp_htm_tags[index].pos;
		smtp_htm_tags_Buffer.varid =smtp_htm_tags[index].varid;
		return smtp_htm_tags_Buffer;

		//return HS->cgi_func.tags[index];
}
