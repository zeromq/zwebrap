/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
package org.zeromq.zwebrap;

import org.junit.Assert;
import org.junit.Test;

public class XrapMsgTest {
    static {
        try {
            System.loadLibrary ("zwebrapjni");
        }
        catch (Exception e) {
            System.exit (-1);
        }
    }
    @Test
    public void test () {
        XrapMsg.test (false);
    }
}