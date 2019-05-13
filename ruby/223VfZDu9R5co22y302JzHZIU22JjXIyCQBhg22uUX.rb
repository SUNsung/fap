
        
            def order_top_with_notification_levels(score)
      -'COALESCE(topic_users.notification_level, 1) DESC, COALESCE(category_users.notification_level, 1) DESC, COALESCE(top_topics.#{score}, 0) DESC, topics.bumped_at DESC'
    end
    
        @omniauth.before_request_phase do |env|
      # If the user is trying to reconnect to an existing account, store in session
      request = ActionDispatch::Request.new(env)
      request.session[:auth_reconnect] = !!request.params['reconnect']
    end
  end
    
          @directives.each do |directive, sources|
        if sources.is_a?(Array)
          policy.public_send(directive, *sources)
        else
          policy.public_send(directive, sources)
        end
      end
    
        def clear_theme_extensions_cache!
      cache.clear
    end
    
          FileUtils.mkdir_p(DISK_CACHE_PATH)
      File.write(cache_file, content)
    end
    
      @@detailed_request_loggers = nil
  @@ip_skipper = nil
    
            # Yields a VM for each target VM for the command.
        #
        # This is a convenience method for easily implementing methods that
        # take a target VM (in the case of multi-VM) or every VM if no
        # specific VM name is specified.
        #
        # @param [String] name The name of the VM. Nil if every VM.
        # @param [Hash] options Additional tweakable settings.
        # @option options [Symbol] :provider The provider to back the
        #   machines with. All machines will be backed with this
        #   provider. If none is given, a sensible default is chosen.
        # @option options [Boolean] :reverse If true, the resulting order
        #   of machines is reversed.
        # @option options [Boolean] :single_target If true, then an
        #   exception will be raised if more than one target is found.
        def with_target_vms(names=nil, options=nil)
          @logger.debug('Getting target VMs for command. Arguments:')
          @logger.debug(' -- names: #{names.inspect}')
          @logger.debug(' -- options: #{options.inspect}')
    
      #
  # More advanced [] that does downcase comparison.
  #
  def [](key)
    begin
      rv = self.fetch(key)
    rescue IndexError
      rv = nil
    end
    if (rv == nil)
      begin
        rv = self.dcase_hash[key.downcase]
      rescue IndexError
        rv = nil
      end
    end
    
      def self.create_ipmi_rakp_1(bmc_session_id, console_random_id, username)
    head = [
      0x06, 0x00, 0xff, 0x07,  # RMCP Header
      0x06,                    # RMCP+ Authentication Type
      PAYLOAD_RAKP1,           # Payload Type
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00,
    ].pack('C*')
    
    module Rex
  module Proto
    module Kerberos
      module Model
        class EncKdcResponse < Element
          # @!attribute key
          #   @return [Rex::Proto::Kerberos::Model::EncryptionKey] The session key
          attr_accessor :key
          # @!attribute last_req
          #   @return [Array<Rex::Proto::Kerberos::Model::LastRequest>] This field is returned by the KDC and specifies the time(s)
          #   of the last request by a principal
          attr_accessor :last_req
          # @!attribute nonce
          #   @return [Integer] random number
          attr_accessor :nonce
          # @!attribute key_expiration
          #   @return [Time] The key-expiration field is part of the response from the
          #   KDC and specifies the time that the client's secret key is due to expire
          attr_accessor :key_expiration
          # @!attribute flags
          #   @return [Integer] This field indicates which of various options were used or
          #   requested when the ticket was issued
          attr_accessor :flags
          # @!attribute auth_time
          #   @return [Time] the time of initial authentication for the named principal
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Time] Specifies the time after which the ticket is valid
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Time] This field contains the time after which the ticket will
          #   not be honored (its expiration time)
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Time] This field is only present in tickets that have the
          #   RENEWABLE flag set in the flags field.  It indicates the maximum
          #   endtime that may be included in a renewal
          attr_accessor :renew_till
          # @!attribute srealm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :srealm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname
    
              # Encodes the nonce
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_nonce
            bn = OpenSSL::BN.new(nonce.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
      preflight do
    processes = system_command '/bin/launchctl', args: ['list']
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
          updated_note = Notification.find(note.id)
      expect(updated_note.unread).to eq(true)
      expect(updated_note.updated_at.iso8601).to eq(note.updated_at.iso8601)
    end
    
      describe '#update' do
    context 'on a post you can see' do
      before do
        sign_in(bob, scope: :user)
      end
    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
      File.open('rack-protection.gemspec', 'w') { |f| f << content }
end
    
      def self.io_adapters=(new_registry)
    @io_adapters = new_registry
  end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end
