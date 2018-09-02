
        
          def self.all
    Dir['#{root_path}/docs/scrapers/**/*.rb'].
      map { |file| File.basename(file, '.rb') }.
      map { |name| const_get(name.camelize) }.
      sort { |a, b| a.name.casecmp(b.name) }.
      reject(&:abstract)
  end
    
        def current_url
      context[:url]
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        include Instrumentable
    
      it 'writes each array element on a line when passes an array' do
    lambda {
      $VERBOSE = true
      warn(['line 1', 'line 2'])
    }.should output(nil, 'line 1\nline 2\n')
  end
    
    
  # Returns a collection of found hidden inputs
  #
  # @return [Array<Hash>] An array, each element represents a form that contains a hash of found hidden inputs
  #  * 'name' [String] The hidden input's original name. The value is the hidden input's original value.
  # @example
  #  res = send_request_cgi('uri'=>'/')
  #  inputs = res.get_hidden_inputs
  #  session_id = inputs[0]['sessionid'] # The first form's 'sessionid' hidden input
  def get_hidden_inputs
    forms = []
    noko = get_html_document
    noko.search('form').each_entry do |form|
      found_inputs = {}
      form.search('input').each_entry do |input|
        input_type = input.attributes['type'] ? input.attributes['type'].value : ''
        next if input_type !~ /hidden/i
    
        when nil
      dprint('Invalid control packet: #{pkt.unpack('H*')[0]}')
    end
  end
    
    # Default timings
IAX_DEFAULT_REG_REFRESH = 60
IAX_DEFAULT_TIMEOUT     = 10
    
    
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
    
            # Sends a Kerberos Request over a tcp connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [Integer] the number of bytes sent
        # @raise [RuntimeError] if the request can't be encoded
        def send_request_tcp(req)
          data = req.encode
          length = [data.length].pack('N')
          connection.put(length + data)
        end
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
              # Rex::Proto::Kerberos::Model::Checksum decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Checksum decoding not supported'
          end
    
              def self.decode(input)
            elem = self.new
            elem.decode(input)
          end
    
              # Decodes the susec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_susec(input)
            input.value[0].value.to_i
          end