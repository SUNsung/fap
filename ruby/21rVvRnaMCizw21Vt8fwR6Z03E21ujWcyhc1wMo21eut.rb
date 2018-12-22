
        
          it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
    script_binding = binding
    
        # Send the response to the client like what
    cli.send_response(resp)
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
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
              # Encrypts the Rex::Proto::Kerberos::Model::AuthorizationData
          #
          # @param etype [Integer] the crypto schema to encrypt
          # @param key [String] the key to encrypt
          # @return [String] the encrypted result
          # @raise [NotImplementedError] if encryption schema isn't supported
          def encrypt(etype, key)
            data = self.encode
    
                OpenSSL::ASN1::Sequence.new(elems)
          end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
    Then /^I should see the scope with label '([^']*)'$/ do |label|
  expect(page).to have_link(label)
end
    
        # A callback is triggered each time (before) Active Admin loads the configuration files.
    # In development mode, this will happen whenever the user changes files. In production
    # it only happens on boot.
    #
    # The block takes the current instance of [ActiveAdmin::Application]
    #
    # Example:
    #
    #     ActiveAdmin.before_load do |app|
    #       # Do some stuff before AA loads
    #     end
    #
    # @param [Block] block A block to call each time (before) AA loads resources
    def before_load(&block)
      ActiveSupport::Notifications.subscribe ActiveAdmin::Application::BeforeLoadEvent, &wrap_block_for_active_support_notifications(block)
    end
    
        def javascripts
      @javascripts ||= Set.new
    end
    
        def get_object
      raise(RailsAdmin::ObjectNotFound) unless (@object = @abstract_model.get(params[:id]))
    end
    
        # Only consumes the token if it matches the type
    # Returns the token's contents if it was consumed
    # or false otherwise.
    def consume?(type)
      token = @tokens[@p]
      return false unless token && token[0] == type
      @p += 1
      token[1]
    end
    
        def col_first
      @col == 1
    end
    
        def parse(_tokens)
    end