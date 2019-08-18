
        
            def add(path, content)
      @pages[path] = content
    end
    
            css('.file').each do |node|
          node.content = node.content.strip
        end
    
    
    {        This will not work on circa 2009 and older Debian-based Linux
        distributions (including Ubuntu) because they compile bash
        without the /dev/tcp feature.
      },
      'Author'        => 'hdm',
      'License'       => MSF_LICENSE,
      'Platform'      => 'unix',
      'Arch'          => ARCH_CMD,
      'Handler'       => Msf::Handler::ReverseTcp,
      'Session'       => Msf::Sessions::CommandShell,
      'PayloadType'   => 'cmd_bash',
      'RequiredCmd'   => 'bash-tcp',
      'Payload'       =>
        {
          'Offsets' => { },
          'Payload' => ''
        }
      ))
  end
    
      ##
  #
  # Builtin response class wrappers.
  #
  ##
    
          # If the handler class requires a relative resource...
      if (handler.relative_resource_required?)
        # Substituted the mount point root in the request to make things
        # relative to the mount point.
        request.relative_resource = request.resource.gsub(/^#{root}/, '')
        request.relative_resource = '/' + request.relative_resource if (request.relative_resource !~ /^\//)
      end
    
            # Decodes a Kerberos response
        #
        # @param data [String] the raw response message
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] the kerberos message response
        # @raise [RuntimeError] if the response can't be processed
        def decode_kerb_response(data)
          asn1 = OpenSSL::ASN1.decode(data)
          msg_type = asn1.value[0].value[1].value[0].value
    
              # Encodes the end_time field
          #
          # @return [String]
          def encode_end_time
            [end_time].pack('N')
          end
    
              private
    
              # Encodes a Rex::Proto::Kerberos::Model::AuthorizationData into an ASN.1 String
          #
          # @return [String]
          def encode
            seqs = []
            elements.each do |elem|
              elems = []
              type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type(elem[:type])], 0, :CONTEXT_SPECIFIC)
              elems << type_asn1
              data_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_data(elem[:data])], 1, :CONTEXT_SPECIFIC)
              elems << data_asn1
              seqs << OpenSSL::ASN1::Sequence.new(elems)
            end
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
        def cmdline_filters
      @cmdline_filters ||= []
    end
    
          def warn_third_party_scm_must_be_upgraded
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure this custom SCM will work with future versions of Capistrano,
please upgrade it to a version that uses the new SCM plugin mechanism
documented here:
    
          # This double assignment is to prevent an 'unused variable' warning on
      # Ruby 1.9.3.  Yes, it is dumb, but I don't like Ruby yelling at me.
      path = path = (req.script_name + req.path_info).squeeze('/')
    
          def xor_byte_strings(s1, s2)
        s1.bytes.zip(s2.bytes).map { |(c1,c2)| c1 ^ c2 }.pack('c*')
      end
    end
  end
end

    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          run DummyApp
    end