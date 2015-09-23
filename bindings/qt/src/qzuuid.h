/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#ifndef Q_ZUUID_H
#define Q_ZUUID_H

#include "qzwebrap.h"

class QT_ZWEBRAP_EXPORT QZuuid : public QObject
{
    Q_OBJECT
public:

   //  Copy-construct to return the proper wrapped c types
   QZuuid (zuuid_t *self, QObject *parent = 0);

    //  Constructor
    explicit QZuuid (QObject *parent = 0);

    //  Destructor
    ~QZuuid ();

    //  Print properties of the zuuid object.
    void print ();

    //  Create UUID object from supplied ZUUID_LEN-octet value.
    static QZuuid * newFrom (const byte *source);

    //  Set UUID to new supplied ZUUID_LEN-octet value.
    void set (const byte *source);

    //  Set UUID to new supplied string value skipping '-' and '{' '}'
    //  optional delimiters. Return 0 if OK, else returns -1.         
    int setStr (const QString &source);

    //  Return UUID binary data.
    const byte * data ();

    //  Return UUID binary size
    size_t size ();

    //  Returns UUID as string
    const QString str ();

    //  Return UUID in the canonical string format: 8-4-4-4-12, in lower
    //  case. Caller does not modify or free returned value. See        
    //  http://en.wikipedia.org/wiki/Universally_unique_identifier      
    const QString strCanonical ();

    //  Store UUID blob in target array
    void exportNoConflict (byte *target);

    //  Check if UUID is same as supplied value
    bool eq (const byte *compare);

    //  Check if UUID is different from supplied value
    bool neq (const byte *compare);

    //  Make copy of UUID object; if uuid is null, or memory was exhausted,
    //  returns null.                                                      
    QZuuid * dup ();

    //  Self test of this class
    static void test (bool verbose);

    zuuid_t *self;
};
#endif //  Q_ZUUID_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
