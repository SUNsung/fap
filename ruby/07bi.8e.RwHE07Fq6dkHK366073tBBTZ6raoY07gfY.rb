
        
            def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
      private
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
            if Devise.activerecord51?
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:will_save_change_to_encrypted_password?) && will_save_change_to_encrypted_password?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('will_save_change_to_#{attribute}?') && send('will_save_change_to_#{attribute}?')
            end
    
          def self.required_fields(klass)
        []
      end
    
      #
  # HTTP POST request class wrapper.
  #
  class Post < Request
    def initialize(uri = '/', proto = DefaultProtocol)
      super('POST', uri, proto)
    end
  end
    
        when IAX_TYPE_CONTROL
      case stype
      when IAX_CTRL_HANGUP
        dprint('HANGUP')
        self.client.send_ack(self)
        self.state = :hangup
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
    
  # open rmcpplus_request with cipherzero
  def self.create_ipmi_session_open_cipher_zero_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              # Decodes the req_body from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::KdcRequestBody]
          def decode_asn1_req_body(input)
            Rex::Proto::Kerberos::Model::KdcRequestBody.decode(input.value[0])
          end
        end
      end
    end
  end
end

    
                elems << OpenSSL::ASN1::ASN1Data.new([encode_options], 0, :CONTEXT_SPECIFIC) if options
            elems << OpenSSL::ASN1::ASN1Data.new([encode_cname], 1, :CONTEXT_SPECIFIC) if cname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_realm], 2, :CONTEXT_SPECIFIC) if realm
            elems << OpenSSL::ASN1::ASN1Data.new([encode_sname], 3, :CONTEXT_SPECIFIC) if sname
            elems << OpenSSL::ASN1::ASN1Data.new([encode_from], 4, :CONTEXT_SPECIFIC) if from
            elems << OpenSSL::ASN1::ASN1Data.new([encode_till], 5, :CONTEXT_SPECIFIC) if till
            elems << OpenSSL::ASN1::ASN1Data.new([encode_rtime], 6, :CONTEXT_SPECIFIC) if rtime
            elems << OpenSSL::ASN1::ASN1Data.new([encode_nonce], 7, :CONTEXT_SPECIFIC) if nonce
            elems << OpenSSL::ASN1::ASN1Data.new([encode_etype], 8, :CONTEXT_SPECIFIC) if etype
            elems << OpenSSL::ASN1::ASN1Data.new([encode_enc_auth_data], 10, :CONTEXT_SPECIFIC) if enc_auth_data
    
          def preference_field_options(options)
        field_options = case options[:type]
                        when :integer
                          {
                            size: 10,
                            class: 'input_integer form-control'
                          }
                        when :boolean
                          {}
                        when :string
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        when :password
                          {
                            size: 10,
                            class: 'password_string form-control'
                          }
                        when :text
                          {
                            rows: 15,
                            cols: 85,
                            class: 'form-control'
                          }
                        else
                          {
                            size: 10,
                            class: 'input_string form-control'
                          }
                        end
    
        context 'when pagination is really short' do
      before do
        @old_per_page = Spree::Config[:admin_orders_per_page]
        Spree::Config[:admin_orders_per_page] = 1
      end
    
          def requires_authentication?
        Spree::Api::Config[:requires_authentication]
      end
    
              unless inventory_unit.respond_to?(can_event) &&
              inventory_unit.send(can_event)
            render plain: { exception: 'cannot transition to #{@event}' }.to_json,
                   status: 200
            false
          end
        end
    
    When /^(?:|I )uncheck '([^']*)'$/ do |field|
  uncheck(field)
end
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end