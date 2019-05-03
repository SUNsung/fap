
        
            # Extract each header value pair
    header.split(/\r\n/mn).each { |str|
      if (md = str.match(/^(.+?)\s*:\s*(.+?)\s*$/))
        if (self[md[1]])
          self[md[1]] << ', ' + md[2]
        else
          self[md[1]] = md[2]
        end
      end
    }
  end
    
      # Returns a parsed json document.
  # Instead of using regexes to parse the JSON body, you should use this.
  #
  # @return [Hash]
  def get_json_document
    json = {}
    
          # If the handler class requires a relative resource...
      if (handler.relative_resource_required?)
        # Substituted the mount point root in the request to make things
        # relative to the mount point.
        request.relative_resource = request.resource.gsub(/^#{root}/, '')
        request.relative_resource = '/' + request.relative_resource if (request.relative_resource !~ /^\//)
      end
    
              res
        end
      end
    end
  end
end

    
                components.each do |c|
              encoded << [c.length].pack('N')
              encoded << c
            end
    
                res = ''
            case etype
            when RC4_HMAC
              res = encrypt_rc4_hmac(data, key, 5)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Decodes the Rex::Proto::Kerberos::Model::EncKdcResponse from an input
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
              raise ::RuntimeError, 'Failed to decode EncKdcResponse, invalid input'
            end
    
              # Decodes the enc_part
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::EncryptedData]
          def decode_enc_part(input)
            Rex::Proto::Kerberos::Model::EncryptedData.decode(input.value[0])
          end
        end
      end
    end
  end
end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
    Given(/^the configuration is in a custom location$/) do
  TestApp.move_configuration_to_custom_location('app')
end
    
        def add_filter(filter=nil, &block)
      if block
        raise ArgumentError, 'Both a block and an object were given' if filter
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
          def third_party_scm_name?
        !built_in_scm_name?
      end
    
            def lvalue(key)
          key.to_s.chomp('=').to_sym
        end
      end
    end
  end
end

    
      # Install JavaScript dependencies if using Yarn
  # system('bin/yarn')