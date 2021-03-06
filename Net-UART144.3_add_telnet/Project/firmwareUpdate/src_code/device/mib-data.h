/*********************MIB Data Base*************************************/
void ifnumber();
void iftable();
void ifentry();
void ifindex();
void ifdescr();
void iftype();
void ifmtu();
void ifspeed();
void ifphysaddress();
void iflastchange();
void ifinoctets();
void ifadminstatus();
void ifoutoctets();
void ifoperstatus();
void ifspecific();
/********************sysDescr******************************************/
u8_t code sysdescr_o[]={0x6,0x8,0x2b,0x6,0x1,0x2,0x1,0x1,0x1,0x0};//OID
u8_t code sysdescr_v[]={0x4,0x4,'1','7','1','7'};//value
u8_t sysdescr_s[]={0x30,0x82,0x0,0x10};//Sequence(Varbind)
/*************************************************************/
/********************sysObjectID************************************/
u8_t code sysobjectid_o[]={0x6,0x8,0x2b,0x6,0x1,0x2,0x1,0x1,0x2,0x0};
u8_t code sysobjectid_v[]={0x6,0x8,0x2b,0x6,0x1,0x4,0x1,0x81,0xf1,0x7a};
u8_t sysobjectid_s[]={0x30,0x82,0x0,0x14};
/*************************************************************/
/********************sysUptime*********************************/
u8_t code sysuptime_o[]={0x6,0x8,0x2b,0x6,0x1,0x2,0x1,0x1,0x3,0x0};
u8_t sysuptime_s[]={0x30,0x82,0x0,0xf};
u8_t sysuptime_v[]={0x43,0x3,0x0,0x0,0x0};
/*************************************************************/

u8_t syscontact_s[]={0x30,0x82,0x0,0x10};
u8_t code syscontact_o[]={0x6,0x8,0x2b,0x6,0x1,0x2,0x1,0x1,0x4,0x0}; 
u8_t syscontact_v[18]={0x4,0x8,'Z','h','e','n','g','w','e','i'};

/********************sysName*********************************/
u8_t sysname_s[]={0x30,0x82,0x0,0x12};
u8_t code sysname_o[]={0x6,0x8,0x2b,0x6,0x1,0x2,0x1,0x1,0x5,0x0};
u8_t sysname_v[18]={0x4,0x6,'s','w','i','t','c','h'};
/*************************************************************/
/********************sysLocation*******************************/
u8_t set_syslocation_flag;
u8_t syslocation_s[]={0x30,0x82,0x0,0x10};
u8_t code syslocation_o[]={0x6,0x8,0x2b,0x6,0x1,0x2,0x1,0x1,0x6,0x0};	
u8_t syslocation_v[18]={0x4,0x8,'Z','h','e','n','g','w','e','i'};
u8_t syslocation_v2[20];
/**************************************************************/
/********************sysServices*******************************/
u8_t sysservices_s[]={0x30,0x82,0x0,0xd};
u8_t code sysservices_o[]={0x6,0x8,0x2b,0x6,0x1,0x2,0x1,0x1,0x7,0x0};
u8_t code sysservices_v[]={0x2,0x1,0x48};
/**********************ifNumber*********************************/
u8_t ifnumber_s[]={0x30,0x82,0x0,0x0d};
u8_t code ifnumber_o[]={0x06,0x08,0x2b,0x6,0x1,0x2,0x1,0x2,0x1,0x0};
u8_t ifnumber_v[]={0x2,0x1,0x1a};//for 1826 
/***********************ifIndex*************************************/
u8_t ifindex_s[]={0x30,0x82,0x0,0xf};
u8_t ifindex_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x1,0x1};			
u8_t ifindex_v[]={0x02,0x01,0x1};
/*******************ifdescr*********************/
u8_t ifdescr_s[]={0x30,0x82,0x0,0x1e};
u8_t ifdescr_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x2,0x1};			
u8_t ifdescr_v[]={0x04,0x10,'p','h','y','s','i','c','a','l',' ','p','o','r','t',' ','0','1'};
/******************iftype****************************/
u8_t iftype_s[]={0x30,0x82,0x0,0x0f};
u8_t iftype_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x3,0x1};			
u8_t code iftype_v[]={0x02,0x01,0x06};
/*******************ifMTU*************************************/
u8_t ifmtu_s[]={0x30,0x82,0x0,0x10};
u8_t ifmtu_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x4,0x1};			
u8_t code ifmtu_v[]={0x02,0x02,0x05,0xdc};
/*****************ifSpeed***********************************/
u8_t ifspeed_s[]={0x30,0x82,0x0,0x12};
u8_t ifspeed_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x5,0x1};			
u8_t ifspeed_v[]={0x41,0x04,0x05,0xf5,0xe1,0x00};
/********************ifPhysaddress*********************************/
u8_t ifphysaddress_s[]={0x30,0x82,0x0,0x14};
u8_t ifphysaddress_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x6,0x1};			
u8_t ifphysaddress_v[]={0x04,0x06,0x10,0xf0,0x13,0xf0,0x18,0x26};
/*******************ifAdminstatus****************************/
u8_t ifadminstatus_s[]={0x30,0x82,0x0,0x0f};
u8_t ifadminstatus_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x7,0x1};			
u8_t ifadminstatus_v[]={0x02,0x01,0x01};
/*******************ifOperstatus***************************/
u8_t ifoperstatus_s[]={0x30,0x82,0x0,0x0f};
u8_t ifoperstatus_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x8,0x1};			
u8_t ifoperstatus_v[]={0x02,0x01,0x02};
/******************ifLastchange****************************/
u8_t iflastchange_s[]={0x30,0x82,0x0,0x11};
u8_t iflastchange_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x9,0x1};			
u8_t iflastchange_v[]={0x43,0x03,0x02,0x01,0x00};
/*****************ifInoctets*****************************/
u8_t ifinoctets_s[]={0x30,0x82,0x0,0x12};
u8_t ifinoctets_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x0a,0x1};			
u8_t ifinoctets_v[]={0x41,0x04,0x0,0x0,0x0,0x0};
/****************ifOutoctets*****************************/
u8_t ifoutoctets_s[]={0x30,0x82,0x0,0x12};
u8_t ifoutoctets_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x10,0x1};			
u8_t ifoutoctets_v[]={0x41,0x04,0x0,0x0,0x0,0x0};
/**********************************************/
u8_t ifspecific_s[]={0x30,0x82,0x0,0x0f};
u8_t ifspecific_o[]={0x06,0x0a,0x2b,0x6,0x1,0x2,0x1,0x2,0x2,0x1,0x16,0x1};			
u8_t code ifspecific_v[]={0x06,0x01,0x0};
/********************************************************************/

u8_t No_SuchN_s[]={0x30,0x82,0x0,0x0};
u8_t const code No_SuchN_v[]={0x5,0x0};//no such name value
u8_t code nopkt[]={0x41,0x1,0x0};
