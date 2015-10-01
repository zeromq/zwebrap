/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#ifndef Q_ZWR_CLIENT_H
#define Q_ZWR_CLIENT_H

#include "qzwebrap.h"

class QT_ZWEBRAP_EXPORT QZwrClient : public QObject
{
    Q_OBJECT
public:

   //  Copy-construct to return the proper wrapped c types
   QZwrClient (zwr_client_t *self, QObject *qObjParent = 0);

    //  Create a new zwr_client, return the reference if successful, or NULL
    //  if construction failed due to lack of available memory.             
    explicit QZwrClient (QObject *qObjParent = 0);

    //  Destroy the zwr_client and free all memory used by the object.
    ~QZwrClient ();

    //  Return actor, when caller wants to work with multiple actors and/or
    //  input sockets asynchronously.                                      
    QZactor * actor ();

    //  Return message pipe for asynchronous message I/O. In the high-volume case,
    //  we send methods and get replies to the actor, in a synchronous manner, and
    //  we send/recv high volume message data to a second pipe, the msgpipe. In   
    //  the low-volume case we can do everything over the actor pipe, if traffic  
    //  is never ambiguous.                                                       
    QZsock * msgpipe ();

    //  Return true if client is currently connected, else false. Note that the   
    //  client will automatically re-connect if the server dies and restarts after
    //  a successful first connection.                                            
    bool connected ();

    //  Connect to server endpoint, with specified timeout in msecs (zero means wait
    //  forever). Constructor succeeds if connection is successful. The caller may  
    //  specify its address.                                                        
    //  Returns >= 0 if successful, -1 if interrupted.                              
    int connect (const QString &endpoint, quint32 timeout, const QString &address);

    //  Offer to handle particular XRAP requests, where the route matches request's
    //  resource.                                                                  
    //  Returns >= 0 if successful, -1 if interrupted.                             
    int setHandler (const QString &method, const QString &route);

    //  No explanation                                
    //  Returns >= 0 if successful, -1 if interrupted.
    int request (quint32 timeout, QZmsg *contentP);

    //  Send XRAP DELIVER message to server, takes ownership of message
    //  and destroys message when done sending it.                     
    int deliver (QZuuid *sender, QZmsg *contentP);

    //  Receive message from server; caller destroys message when done
    QZmsg * recv ();

    //  Return last received command. Can be one of these values:
    //      "XRAP DELIVER"                                       
    const QString command ();

    //  Return last received status
    int status ();

    //  Return last received reason
    const QString reason ();

    //  Return last received sender
    QZuuid * sender ();

    //  Return last received content
    QZmsg * content ();

    //  Self test of this class.
    static void test (bool verbose);

    zwr_client_t *self;
};
#endif //  Q_ZWR_CLIENT_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
