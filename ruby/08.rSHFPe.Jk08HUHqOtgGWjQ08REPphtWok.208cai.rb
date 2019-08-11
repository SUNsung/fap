
        
            register_options(
      [
        Opt::LPORT(4444),
        OptAddress.new('RHOST', [false, 'The target address', '']),
      ], Msf::Handler::BindTcp)
    
      if dirs.length < 1
    $stderr.puts 'Usage: #{File.basename(__FILE__)} <directory or file>'
    @exit_status = 1
    exit(@exit_status)
  end
    
      #
  # Return the spacing between the uri and the version
  #
  def set_uri_version_spacer
    len = opts['pad_uri_version_count'].to_i
    set = ' '
    buf = ''
    
      #
  # Gets cookies from the Set-Cookie header in a format to be used
  # in the 'cookie' send_request field
  #
  def get_cookies
    cookies = ''
    if (self.headers.include?('Set-Cookie'))
      set_cookies = self.headers['Set-Cookie']
      key_vals = set_cookies.scan(/\s?([^, ;]+?)=([^, ;]*?)[;,]/)
      key_vals.each do |k, v|
        # Dont downcase actual cookie name as may be case sensitive
        name = k.downcase
        next if name == 'path'
        next if name == 'expires'
        next if name == 'domain'
        next if name == 'max-age'
        cookies << '#{k}=#{v}; '
      end
    end
    
                decrypted
          end
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Rex::Proto::Kerberos::Model::AuthorizationData decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Authorization Data decoding not supported'
          end