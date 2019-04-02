    def url
      @url ||= URL.parse request.base_url
    end
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
          def time_from_json(value)
        if value =~ /\A\d+\.\d+\Z/
          Time.at(value.to_f)
        else
          Time.parse(value) rescue nil
        end
      end
    
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
    
      #
  # Gets cookies from the Set-Cookie header in a parsed format
  #
  def get_cookies_parsed
    if (self.headers.include?('Set-Cookie'))
      ret = CGI::Cookie::parse(self.headers['Set-Cookie'])
    else
      ret = {}
    end
    ret
  end
    
        self.listener = Rex::Socket::TcpServer.create(
      'LocalHost' => self.listen_host,
      'LocalPort' => self.listen_port,
      'Context'   => self.context,
      'SSL'       => self.ssl,
      'SSLCert'   => self.ssl_cert,
      'SSLCompression' => self.ssl_compression,
      'SSLCipher' => self.ssl_cipher,
      'Comm'      => self.comm
    )
    
        when IAX_TYPE_VOICE
      v_codec = stype
      if self.state == :answered
        handle_audio(pkt)
      end
      self.client.send_ack(self)
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a KRB_AP_REQ definition, containing the Kerberos protocol version number,
        # the message type KRB_AP_REQ, an options field to indicate any options in use, and the ticket and authenticator
        # themselves
        class ApReq < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of the protocol message
          attr_accessor :msg_type
          # @!attribute options
          #   @return [Integer] request options, affects processing
          attr_accessor :options
          # @!attribute ticket
          #   @return [Rex::Proto::Kerberos::Model::Ticket] The ticket authenticating the client to the server
          attr_accessor :ticket
          # @!attribute authenticator
          #   @return [Rex::Proto::Kerberos::Model::EncryptedData] This contains the authenticator, which includes the
          #   client's choice of a subkey
          attr_accessor :authenticator
    
              # Encodes the checksum field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_checksum
            OpenSSL::ASN1::OctetString.new(checksum)
          end
        end
      end
    end
  end
end
    
          # Verify the types requested are valid
      types = FPM::Package.types.keys.sort
      @command.input_type.tap do |val|
        next if val.nil?
        mandatory(FPM::Package.types.include?(val),
                  'Invalid input package -s flag) type #{val.inspect}. ' \
                  'Expected one of: #{types.join(', ')}')
      end
    
          header = ::Gem::Package::TarHeader.new(:name => name, :mode => mode,
                                             :size => 0, :typeflag => '2',
                                             :linkname => target,
                                             :prefix => prefix,
                                             :mtime => Time.now).to_s