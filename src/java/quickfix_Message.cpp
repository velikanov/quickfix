/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "JVM.h"
#include "quickfix_Message.h"
#include <quickfix/Utility.h>
#include <quickfix/Message.h>
#include <quickfix/CallStack.h>
#include "Conversions.h"
#include <iostream>

FIX::Message* getCPPMessage( jobject obj )
{
  JVMObject jobject( obj );
  return ( FIX::Message* ) jobject.getInt( "cppPointer" );
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_InitializeXML
( JNIEnv *pEnv, jclass type, jstring url )
{ QF_STACK_TRY

  JVM::set( pEnv );
  const char* uurl = ENV::get()->GetStringUTFChars( url, 0 );
  return FIX::Message::InitializeXML( uurl );
  ENV::get()->ReleaseStringUTFChars( url, uurl );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_create
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = new FIX::Message();
  jobject.setInt( "cppPointer", ( int ) pMessage );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_destroy
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY
  delete getCPPMessage( obj );
  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_clone
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobj( obj );

  JVMClass type = jobj.getClass();
  jmethodID method = pEnv->GetMethodID( type, "<init>", "()V" );
  jobject clone = pEnv->NewObject( type, method );
  *getCPPMessage( clone ) = *getCPPMessage( obj );
  return clone;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_addGroup
( JNIEnv *pEnv, jobject obj, jobject group )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  JVMObject jgroup( group );
  FIX::Group* pGroup = ( FIX::Group* ) jgroup.getInt( "cppPointer" );
  pMessage->addGroup( *pGroup );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_getGroup
( JNIEnv *pEnv, jobject obj, jint num, jobject group )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  JVMObject jgroup( group );
  FIX::Group* pGroup = ( FIX::Group* ) jgroup.getInt( "cppPointer" );
  if ( pMessage->hasGroup( num, *pGroup ) )
  {
    pMessage->getGroup( num, *pGroup );
    return group;
  }
  else
  {
    throwNew( "Lquickfix/FieldNotFound;", FIX::IntConvertor::convert( num ).c_str() );
    return 0;
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setString
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setString( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setBoolean
( JNIEnv *pEnv, jobject obj, jint field, jboolean value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setBoolean( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setChar
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setChar( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setInt
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setInt( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setDouble
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setDouble( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setUtcTimeStamp
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeStamp( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setUtcTimeOnly
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeOnly( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_setUtcDate
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcDate( *pMessage, field, value );

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Message_getString
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getString( *pMessage, field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_getBoolean
( JNIEnv * pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getBoolean( *pMessage, field );

  QF_STACK_CATCH
}

JNIEXPORT jchar JNICALL Java_quickfix_Message_getChar
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getChar( *pMessage, field );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Message_getInt
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getInt( *pMessage, field );

  QF_STACK_CATCH
}

JNIEXPORT jdouble JNICALL Java_quickfix_Message_getDouble
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getDouble( *pMessage, field );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_getUtcTimeStamp
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeStamp( *pMessage, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_getUtcTimeOnly
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeOnly( *pMessage, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_getUtcDate
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcDate( *pMessage, field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_isSetField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return pMessage->isSetField( field );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_removeField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  pMessage->removeField( field );

  QF_STACK_CATCH
}

// Header Methods

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetString
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setString( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetBoolean
( JNIEnv * pEnv, jobject obj, jint field, jboolean value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setBoolean( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetChar
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setChar( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetInt
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setInt( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetDouble
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setDouble( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetUtcTimeStamp
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeStamp( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetUtcTimeOnly
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeOnly( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerSetUtcDate
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcDate( pMessage->getHeader(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Message_headerGetString
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getString( pMessage->getHeader(), field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_headerGetBoolean
( JNIEnv * pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getBoolean( pMessage->getHeader(), field );

  QF_STACK_CATCH
}

JNIEXPORT jchar JNICALL Java_quickfix_Message_headerGetChar
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getChar( pMessage->getHeader(), field );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Message_headerGetInt
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getInt( pMessage->getHeader(), field );

  QF_STACK_CATCH
}

JNIEXPORT jdouble JNICALL Java_quickfix_Message_headerGetDouble
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getDouble( pMessage->getHeader(), field );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_headerGetUtcTimeStamp
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeStamp( pMessage->getHeader(), field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_headerGetUtcTimeOnly
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeOnly( pMessage->getHeader(), field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_headerGetUtcDate
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcDate( pMessage->getHeader(), field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_headerIsSetField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return pMessage->getHeader().isSetField( field );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_headerRemoveField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  pMessage->getHeader().removeField( field );

  QF_STACK_CATCH
}

// Trailer Methods

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetString
( JNIEnv *pEnv, jobject obj, jint field, jstring value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setString( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetBoolean
( JNIEnv * pEnv, jobject obj, jint field, jboolean value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setBoolean( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetChar
( JNIEnv *pEnv, jobject obj, jint field, jchar value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setChar( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetInt
( JNIEnv *pEnv, jobject obj, jint field, jint value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setInt( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetDouble
( JNIEnv *pEnv, jobject obj, jint field, jdouble value )
{ QF_STACK_TRY

  FIX::Message * pMessage = getCPPMessage( obj );
  setDouble( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetUtcTimeStamp
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeStamp( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetUtcTimeOnly
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcTimeOnly( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerSetUtcDate
( JNIEnv *pEnv, jobject obj, jint field, jobject value )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  setUtcDate( pMessage->getTrailer(), field, value );

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Message_trailerGetString
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getString( pMessage->getTrailer(), field );

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_trailerGetBoolean
( JNIEnv * pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getBoolean( pMessage->getTrailer(), field );

  QF_STACK_CATCH
}

JNIEXPORT jchar JNICALL Java_quickfix_Message_trailerGetChar
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getChar( pMessage->getTrailer(), field );

  QF_STACK_CATCH
}

JNIEXPORT jint JNICALL Java_quickfix_Message_trailerGetInt
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getInt( pMessage->getTrailer(), field );

  QF_STACK_CATCH
}

JNIEXPORT jdouble JNICALL Java_quickfix_Message_trailerGetDouble
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return getDouble( pMessage->getTrailer(), field );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_trailerGetUtcTimeStamp
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeStamp( pMessage->getTrailer(), field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_trailerGetUtcTimeOnly
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcTimeOnly( pMessage->getTrailer(), field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_trailerGetUtcDate
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  jobject result = newUtcDate( pMessage->getTrailer(), field );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_trailerIsSetField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  return pMessage->getTrailer().isSetField( field );

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_trailerRemoveField
( JNIEnv *pEnv, jobject obj, jint field )
{ QF_STACK_TRY

  JVM::set( pEnv );
  FIX::Message* pMessage = getCPPMessage( obj );
  pMessage->getTrailer().removeField( field );

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Message_toString
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = ( FIX::Message* ) jobject.getInt( "cppPointer" );
  std::string messageString;
  jstring result = newString( pMessage->toString(messageString) );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT jstring JNICALL Java_quickfix_Message_toXML
( JNIEnv *pEnv, jobject obj )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = ( FIX::Message* ) jobject.getInt( "cppPointer" );
  jstring result = newString( pMessage->toXML() );
  return result;

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_fromString__Ljava_lang_String_2Z
( JNIEnv *pEnv, jobject obj, jstring value, jboolean validate )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  FIX::Message* pMessage = ( FIX::Message* ) jobject.getInt( "cppPointer" );

  const char* uvalue = ENV::get()->GetStringUTFChars( value, 0 );
  try
  {
    pMessage->setString( uvalue, validate );
  }
  catch( FIX::InvalidMessage& e )
  {
    throwNew( "Lquickfix/InvalidMessage;", e.what() );
  }
  ENV::get()->ReleaseStringUTFChars( value, uvalue );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_messageIteratorCreate
( JNIEnv *pEnv, jobject obj, jobject iterator )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jiterator( iterator );
  JVMObject jmessage = jiterator.getObject( "message", "Lquickfix/Message;" );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getInt( "cppPointer" );
  jiterator.setInt( "cppPointer", (int)new FIX::Message::iterator(pMessage->begin()) );
  return jiterator;

  QF_STACK_CATCH
}

JNIEXPORT jboolean JNICALL Java_quickfix_Message_messageIteratorHasNext
( JNIEnv *pEnv, jobject obj, jobject iterator )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jiterator( iterator );
  JVMObject jmessage = jiterator.getObject( "message", "Lquickfix/Message;" );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getInt( "cppPointer" );
  FIX::Message::iterator* i = ( FIX::Message::iterator* ) jiterator.getInt( "cppPointer" );
  return( *i != pMessage->end() );

  QF_STACK_CATCH
}

JNIEXPORT jobject JNICALL Java_quickfix_Message_messageIteratorNext
( JNIEnv *pEnv, jobject obj, jobject iterator )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jiterator( iterator );
  JVMObject jmessage = jiterator.getObject( "message", "Lquickfix/Message;" );
  FIX::Message* pMessage = ( FIX::Message* ) jmessage.getInt( "cppPointer" );
  FIX::Message::iterator* i = ( FIX::Message::iterator* ) jiterator.getInt( "cppPointer" );
  if( *i == pMessage->end() ) {
    throwNew( "Ljava/util/NoSuchElementException;", "" );
    return 0;
  }
  const FIX::FieldBase& field = (*i)->second;
  (*i)++;
  try {
    return newField( field );
  } catch( std::exception& e ) {
    std::cout << e.what() << std::endl;
    return 0;
  }

  QF_STACK_CATCH
}

JNIEXPORT void JNICALL Java_quickfix_Message_fromString__Ljava_lang_String_2Lquickfix_DataDictionary_2
( JNIEnv *pEnv, jobject obj, jstring value, jobject dd )
{ QF_STACK_TRY

  JVM::set( pEnv );
  JVMObject jobject( obj );
  JVMObject jdd( dd );

  FIX::Message* pMessage = ( FIX::Message* ) jobject.getInt( "cppPointer" );
  FIX::DataDictionary* pDataDictionary = ( FIX::DataDictionary* ) jdd.getInt( "cppPointer" );

  const char* uvalue = ENV::get()->GetStringUTFChars( value, 0 );
  try
  {
    pMessage->setString( uvalue, true, pDataDictionary );
  }
  catch( FIX::InvalidMessage& e )
  {
    throwNew( "Lquickfix/InvalidMessage;", e.what() );
  }
  ENV::get()->ReleaseStringUTFChars( value, uvalue );

  QF_STACK_CATCH
}