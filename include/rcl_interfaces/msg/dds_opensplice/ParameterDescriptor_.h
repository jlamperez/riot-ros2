//******************************************************************
// 
//  Generated by IDL to C++ Translator
//  
//  File name: ParameterDescriptor_.h
//  Source: rcl_interfaces/msg/dds_opensplice/ParameterDescriptor_.idl
//  Generated: timestamp removed to make the build reproducible
//  OpenSplice V6.4.140407OSS
//  
//******************************************************************
#ifndef _PARAMETERDESCRIPTOR__H_
#define _PARAMETERDESCRIPTOR__H_

#include "sacpp_mapping.h"
#include "sacpp_DDS_DCPS.h"


namespace rcl_interfaces
{
   namespace msg
   {
      namespace dds_
      {
         struct ParameterDescriptor_;

         struct ParameterDescriptor_
         {
               DDS::String_mgr name_;
               DDS::Octet type_;
         };

         typedef DDS_DCPSStruct_var < ParameterDescriptor_> ParameterDescriptor__var;
         typedef DDS_DCPSStruct_out < ParameterDescriptor_> ParameterDescriptor__out;
      }
   }
}




#endif 