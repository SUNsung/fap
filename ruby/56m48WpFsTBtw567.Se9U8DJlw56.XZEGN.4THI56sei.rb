      command_return = ActionCommandReturn.new(
        return_value: action_return,
        return_value_type: action_class_ref.return_type,
        closure_argument_value: closure_argument_value
      )
      return command_return
    end
    
        def rescue_connection_failed_error(e)
      if e.message.include?('Connection reset by peer - SSL_connect')
        handle_tls_error!(e)
      else
        handle_unknown_error!(e)
      end
    end
    
          it 'allows you to specify the commit where to add the tag' do
        tag = '2.0.0'
        commit = 'beta_tag'
        message = 'message'
    
          it 'adds crossref_format param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            crossref_format: 'some regex'
          )
        end').runner.execute(:test)
    
      #
  # Overrides the builtin 'each' operator to avoid the following exception on Ruby 1.9.2+
  #    'can't add a new key into hash during iteration'
  #
  def each(&block)
    list = []
    self.keys.sort.each do |sidx|
      list << [sidx, self[sidx]]
    end
    list.each(&block)
  end
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # HMAC-SHA1
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # AES Encryption
      0x01, 0x00, 0x00, 0x00
    ].pack('C*')
    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
              # Encodes the Rex::Proto::Kerberos::Model::Element into an ASN.1 String. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def encode
            raise ::NoMethodError, 'Method designed to be overridden'
          end
        end
      end
    end
  end
end
    
              # Decodes the realm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_realm(input)
            input.value[0].value
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastRequest
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode LastRequest, invalid input'
            end
    
      url 'http://swupdl.adobe.com/updates/oobe/aam20/mac/AdobeLightroom-#{version.major}.0/#{version}/setup.dmg'
  name 'Adobe Photoshop Lightroom'
  homepage 'https://www.adobe.com/products/photoshop-lightroom.html'
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def echo?
        (options || {}).fetch(:echo, true)
      end
    end
  end
end

    
          def keys
        values.keys
      end
    
      at_exit { Application.run! if $!.nil? && Application.run? }
end
    
      File.open('rack-protection.gemspec', 'w') { |f| f << content }
end
    
          def set_token(session)
        session[:csrf] ||= self.class.random_token
      end
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end
    
      it 'prevents ajax requests without a valid token' do
    expect(post('/', {}, 'HTTP_X_REQUESTED_WITH' => 'XMLHttpRequest')).not_to be_ok
  end