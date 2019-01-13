
        
          it 'accepts a Bignum as a seed' do
    srand(0x12345678901234567890)
    srand.should == 0x12345678901234567890
  end
    
        it 'returns the time at which the file was created when passed ?C' do
      Kernel.test(?C, @tmp_file).should == @tmp_file.ctime
    end
    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
    
  #
  # Waits for the HTTP service to terminate
  #
  def wait
    self.listener.wait if self.listener
  end
    
    
IAX_SUBTYPE_NEW     = 1
IAX_SUBTYPE_PING    = 2
IAX_SUBTYPE_PONG    = 3
IAX_SUBTYPE_ANSWER  = 4
IAX_SUBTYPE_ACK     = 4
IAX_SUBTYPE_HANGUP  = 5
IAX_SUBTYPE_REJECT  = 6
IAX_SUBTYPE_ACCEPT  = 7
IAX_SUBTYPE_AUTHREQ = 8
IAX_SUBTYPE_AUTHREP = 9
IAX_SUBTYPE_INVAL   = 10
IAX_SUBTYPE_LAGRQ   = 11
IAX_SUBTYPE_LAGRP   = 12
IAX_SUBTYPE_REGREQ  = 13
IAX_SUBTYPE_REGAUTH = 14
IAX_SUBTYPE_REGACK  = 15
IAX_SUBTYPE_REGREJ  = 16
IAX_SUBTYPE_REGREL  = 17
IAX_SUBTYPE_VNAK    = 18
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
      subject { described_class.new(source, pipeline_id, unordered_config_parts, settings) }
    
              it 'successfully install the plugin when verification is disabled' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end
    
        def clear
      @attachments = Hash.new { |h,k| h[k] = {} }
    end
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end
    
        def define_query
      name = @name
      @klass.send :define_method, '#{@name}?' do
        send(name).file?
      end
    end