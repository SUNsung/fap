
        
                  # We split the arguments into two: One set containing any
          # flags before a word, and then the rest. The rest are what
          # get actually sent on to the subcommand.
          argv.each_index do |i|
            if !argv[i].start_with?('-')
              # We found the beginning of the sub command. Split the
              # args up.
              main_args   = argv[0, i]
              sub_command = argv[i]
              sub_args    = argv[i + 1, argv.length - i + 1]
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
            # This returns all synced folder implementations.
        #
        # @return [Registry]
        def synced_folders
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.synced_folders)
            end
          end
        end
    
        # Merge one registry with another and return a completely new
    # registry. Note that the result cache is completely busted, so
    # any gets on the new registry will result in a cache miss.
    def merge(other)
      self.class.new.tap do |result|
        result.merge!(self)
        result.merge!(other)
      end
    end
    
        def destroy
      authorize @email_domain_block, :destroy?
      @email_domain_block.destroy!
      log_action :destroy, @email_domain_block
      redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.destroyed_msg')
    end
    
      #
  # Allow 100 Continues to be ignored by the caller
  #
  def check_100
    # If this was a 100 continue with no data, reset
    if self.code == 100 and (self.body_bytes_left == -1 or self.body_bytes_left == 0) and self.count_100 < 5
      self.reset_except_queue
      self.count_100 += 1
    end
  end
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
        head + [data.length].pack('v') + data
  end
    
            # Sends a kerberos request through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [Integer] the number of bytes sent
        # @raise [RuntimeError] if the transport protocol is unknown
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_request(req)
          connect
    
              private
    
                res
          end
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
                self
          end