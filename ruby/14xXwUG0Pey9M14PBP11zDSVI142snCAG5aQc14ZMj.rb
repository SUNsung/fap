
        
        end

    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
        json
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
    
            # Receives a Kerberos Response over a tcp connection
        #
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        # @raise [EOFError] if expected data can't be read
        def recv_response_tcp
          length_raw = connection.get_once(4, timeout)
          unless length_raw && length_raw.length == 4
            raise ::RuntimeError, 'Kerberos Client: failed to read response'
          end
          length = length_raw.unpack('N')[0]
    
              # Decodes the auth_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_auth_time(input)
            input.value[0].value
          end
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @credential = @server.credentials.find_by_key!(params[:id]) }
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @ip_pool_rule = @server.ip_pool_rules.find_by_uuid!(params[:id])
    else
      params[:id] && @ip_pool_rule = organization.ip_pool_rules.find_by_uuid!(params[:id])
    end
  end
    
      def check
    if @track_domain.check_dns
      redirect_to_with_json [organization, @server, :track_domains], :notice => 'Your CNAME for #{@track_domain.full_name} looks good!'
    else
      redirect_to_with_json [organization, @server, :track_domains], :alert => 'There seems to be something wrong with your DNS record. Check documentation for information.'
    end
  end
    
      def style_width(width, options = {})
    width = 100 if width > 100.0
    width = 0 if width < 0.0
    style = 'width:#{width}%;'
    if options[:color]
      if width >= 100
        style += ' background-color:#e2383a;'
      elsif width >= 90
        style += ' background-color:#e8581f;'
      end
    end
    style
  end
    
        def each(&block)
      @cookies.each(&block)
    end
    
              if args.include?(:all)
            namespace_inheritable(:rescue_all, true)
            namespace_inheritable :all_rescue_handler, handler
          elsif args.include?(:grape_exceptions)
            namespace_inheritable(:rescue_all, true)
            namespace_inheritable(:rescue_grape_exceptions, true)
          else
            handler_type =
              case options[:rescue_subclasses]
              when nil, true
                :rescue_handlers
              else
                :base_only_rescue_handlers
              end
    
            presenter = env[Grape::Env::API_ENDPOINT].entity_class_for_obj(presented_message, present_options)
    
          expect('.border-width-explicit').to have_rule(rule)
    end
  end
    
          expect('.all-buttons-hover').to have_ruleset(ruleset)
    end
  end
end

    
      context 'called with two sizes' do
    it 'applies to height and width' do
      rule = 'height: 2em; width: 1em;'