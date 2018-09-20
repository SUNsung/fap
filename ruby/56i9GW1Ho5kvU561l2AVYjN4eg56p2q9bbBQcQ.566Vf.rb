
        
              # Creates a check box form input tag.
      #
      # ==== Options
      # * <tt>:disabled</tt> - If set to true, the user will not be able to use this input.
      # * Any other key creates standard HTML options for the tag.
      #
      # ==== Examples
      #   check_box_tag 'accept'
      #   # => <input id='accept' name='accept' type='checkbox' value='1' />
      #
      #   check_box_tag 'rock', 'rock music'
      #   # => <input id='rock' name='rock' type='checkbox' value='rock music' />
      #
      #   check_box_tag 'receive_email', 'yes', true
      #   # => <input checked='checked' id='receive_email' name='receive_email' type='checkbox' value='yes' />
      #
      #   check_box_tag 'tos', 'yes', false, class: 'accept_tos'
      #   # => <input class='accept_tos' id='tos' name='tos' type='checkbox' value='yes' />
      #
      #   check_box_tag 'eula', 'accepted', false, disabled: true
      #   # => <input disabled='disabled' id='eula' name='eula' type='checkbox' value='accepted' />
      def check_box_tag(name, value = '1', checked = false, options = {})
        html_options = { 'type' => 'checkbox', 'name' => name, 'id' => sanitize_to_id(name), 'value' => value }.update(options.stringify_keys)
        html_options['checked'] = 'checked' if checked
        tag :input, html_options
      end
    
              def select_type
            self.class.select_type
          end
    
              def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
    require 'active_support/log_subscriber'
    
        # Register callbacks
    self.listener.on_client_connect_proc = Proc.new { |cli|
      on_client_connect(cli)
    }
    self.listener.on_client_data_proc = Proc.new { |cli|
      on_client_data(cli)
    }
    
    # Supported
IAX_SUPPORTED_CODECS  = IAX_CODEC_G711_MULAW | IAX_CODEC_G711_ALAW | IAX_CODEC_LINEAR_PCM
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
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
    
    module Rex
  module Proto
    module Kerberos
      module Crypto
        module Rc4Hmac
          # Decrypts the cipher using RC4-HMAC schema
          #
          # @param cipher [String] the data to decrypt
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted cipher
          # @raise [RuntimeError] if decryption doesn't succeed
          def decrypt_rc4_hmac(cipher, key, msg_type)
            unless cipher && cipher.length > 16
              raise ::RuntimeError, 'RC4-HMAC decryption failed'
            end
    
              # Decodes the last_req from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::LastRequest>]
          def decode_last_req(input)
            last_requests = []
            input.value[0].value.each do |last_request|
              last_requests << Rex::Proto::Kerberos::Model::LastRequest.decode(last_request)
            end
    
              # Decodes the Rex::Proto::Kerberos::Model::KdcResponse from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KdcResponse, invalid input'
            end
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')