################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################

module Zwebrap
  module FFI
    
    # ZWebRap Client
    class ZwrClient
      class DestroyedError < RuntimeError; end
      
      # Boilerplate for self pointer, initializer, and finalizer
      class << self
        alias :__new :new
      end
      def initialize ptr, finalize=true
        @ptr = ptr
        if @ptr.null?
          @ptr = nil # Remove null pointers so we don't have to test for them.
        elsif finalize
          @finalizer = self.class.send :create_finalizer_for, @ptr
          ObjectSpace.define_finalizer self, @finalizer
        end
      end
      def self.create_finalizer_for ptr
        Proc.new do
          ptr_ptr = ::FFI::MemoryPointer.new :pointer
          ptr_ptr.write_pointer ptr
          ::Zwebrap::FFI.zwr_client_destroy ptr_ptr
        end
      end
      def null?
        !@ptr or ptr.null?
      end
      # Return internal pointer
      def __ptr
        raise DestroyedError unless @ptr
        @ptr
      end
      # So external Libraries can just pass the Object to a FFI function which expects a :pointer
      alias_method :to_ptr, :__ptr
      # Nullify internal pointer and return pointer pointer
      def __ptr_give_ref
        raise DestroyedError unless @ptr
        ptr_ptr = ::FFI::MemoryPointer.new :pointer
        ptr_ptr.write_pointer @ptr
        ObjectSpace.undefine_finalizer self if @finalizer
        @finalizer = nil
        @ptr = nil
        ptr_ptr
      end
      
      # Create a new zwr_client, return the reference if successful, or NULL
      # if construction failed due to lack of available memory.             
      def self.new
        ptr = ::Zwebrap::FFI.zwr_client_new
        
        __new ptr
      end
      
      # Destroy the zwr_client and free all memory used by the object.
      def destroy
        return unless @ptr
        self_p = __ptr_give_ref
        result = ::Zwebrap::FFI.zwr_client_destroy self_p
        result
      end
      
      # Return actor, when caller wants to work with multiple actors and/or
      # input sockets asynchronously.                                      
      def actor
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_actor @ptr
        result
      end
      
      # Return message pipe for asynchronous message I/O. In the high-volume case,
      # we send methods and get replies to the actor, in a synchronous manner, and
      # we send/recv high volume message data to a second pipe, the msgpipe. In   
      # the low-volume case we can do everything over the actor pipe, if traffic  
      # is never ambiguous.                                                       
      def msgpipe
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_msgpipe @ptr
        result
      end
      
      # Return true if client is currently connected, else false. Note that the   
      # client will automatically re-connect if the server dies and restarts after
      # a successful first connection.                                            
      def connected
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_connected @ptr
        result
      end
      
      # Connect to server endpoint, with specified timeout in msecs (zero means wait
      # forever). Constructor succeeds if connection is successful. The caller may  
      # specify its address.                                                        
      # Returns >= 0 if successful, -1 if interrupted.                              
      def connect endpoint, timeout, address
        raise DestroyedError unless @ptr
        endpoint = String(endpoint)
        address = String(address)
        result = ::Zwebrap::FFI.zwr_client_connect @ptr, endpoint, timeout, address
        result
      end
      
      # Offer to handle particular XRAP requests, where the route matches request's
      # resource.                                                                  
      # Returns >= 0 if successful, -1 if interrupted.                             
      def set_handler method, route
        raise DestroyedError unless @ptr
        method = String(method)
        route = String(route)
        result = ::Zwebrap::FFI.zwr_client_set_handler @ptr, method, route
        result
      end
      
      # No explanation                                
      # Returns >= 0 if successful, -1 if interrupted.
      def request timeout, content_p
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_request @ptr, timeout, content_p
        result
      end
      
      # Send XRAP DELIVER message to server, takes ownership of message
      # and destroys message when done sending it.                     
      def deliver sender, content_p
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_deliver @ptr, sender, content_p
        result
      end
      
      # Receive message from server; caller destroys message when done
      def recv
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_recv @ptr
        result
      end
      
      # Return last received command. Can be one of these values:
      #     "XRAP DELIVER"                                       
      def command
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_command @ptr
        result
      end
      
      # Return last received status
      def status
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_status @ptr
        result
      end
      
      # Return last received reason
      def reason
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_reason @ptr
        result
      end
      
      # Return last received sender
      def sender
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_sender @ptr
        result
      end
      
      # Return last received content
      def content
        raise DestroyedError unless @ptr
        result = ::Zwebrap::FFI.zwr_client_content @ptr
        result
      end
      
      # Self test of this class.
      def self.test verbose
        verbose = !(0==verbose||!verbose) # boolean
        result = ::Zwebrap::FFI.zwr_client_test verbose
        result
      end
    end
    
  end
end

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
