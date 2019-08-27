
        
          def set_encode_uri(str)
    a = str.to_s.dup
    opts['uri_encode_count'].times {
      a = Rex::Text.uri_encode(a, opts['uri_encode_mode'])
    }
    return a
  end
    
        # undo folding, kinda ugly but works for now.
    header.gsub!(/:\s*\r\n\s+/smni,': ')
    
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
    
              private
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^the current directory will be a symlink to the release$/) do
  run_vagrant_command(exists?('e', TestApp.current_path))
end
    
        def hostfilter
      ['--hosts HOSTS', '-z',
       'Run SSH commands only on matching hosts',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:host, value)
       end]
    end
    
        def configure_sshkit_output(sshkit)
      format_args = [fetch(:format)]
      format_args.push(fetch(:format_options)) if any?(:format_options)
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end