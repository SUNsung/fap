
        
              # It's important to *not* have this code inside the rescue block
      # otherwise all NameErrors will be caught and the error message is
      # confusing
      begin
        return self.try_switch_to_lane(method_sym, arguments)
      rescue LaneNotAvailableError
        # We don't actually handle this here yet
        # We just try to use a user configured lane first
        # and only if there is none, we're gonna check for the
        # built-in actions
      end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --docset-feed-formats \'atom\' --exit-threshold \'2\' input/dir')
      end
    
              it 'raises an exception' do
            expect do
              Fastlane::FastFile.new.parse('lane :test do
                  carthage(command: '#{command}', output: 'bla.framework.zip')
                end').runner.execute(:test)
            end.to raise_error('Output option is available only for 'archive' command.')
          end
        end
      end
    
              # Override the already overridden swiftlint_version method to check
          # that the correct exectuable is being passed in as a parameter.
          allow(Fastlane::Actions::SwiftlintAction).to receive(:swiftlint_version) { |params|
            expect(params[:executable]).to eq(CUSTOM_EXECUTABLE_NAME)
            swiftlint_gem_version
          }
    
        it 'adds an environment Hash at the beginning' do
      message = 'A message'
      command = command_from_args({ 'PATH' => '/usr/local/bin' }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=/usr/local/bin git commit -m #{message.shellescape}')
    end
    
        # Returns an updated value type (if necessary)
    def auto_convert_value(value)
      return nil if value.nil?
    
      # https://stackoverflow.com/a/18623297/252627, last variant
  require 'open3'
  Open3.popen3(compare_command) do |stdin, stdout, stderr, thread|
    error = stderr.read.chomp
    # expect(error).to eq(expected_compare_error)
    expect(error).to eq(expected_compare_error) # match(/#{expected_compare_error}/)
  end
end
    
      # String arguments should be evaluated in the context of the caller.
  it 'accepts a String argument instead of a Proc or block' do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'
    
              # Encodes the authenticator field
          #
          # @return [String]
          def encode_authenticator
            authenticator.encode
          end
        end
      end
    end
  end
end
    
              # Encodes the type
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type(type)
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptedData from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            seq_values = input.value
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the Rex::Proto::Kerberos::Model::KrbError from an input
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
              raise ::RuntimeError, 'Failed to decode KrbError, invalid input'
            end
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Code is not reloaded between requests.
  config.cache_classes = true
    
      config.active_support.deprecation = :stderr
end

    
      include_examples 'multiline literal brace layout' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
          # Returns the collection the `for` loop is iterating over.
      #
      # @return [Node] The collection the `for` loop is iterating over
      def collection
        node_parts[1]
      end
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
            private
    
    __END__
    
          def create_test_file
        if defined?(RSpec)
          create_worker_spec
        else
          create_worker_test
        end
      end
    
          # Example usage:
      #   Sidekiq::Client.enqueue_in(3.minutes, MyWorker, 'foo', 1, :bat => 'bar')
      #
      def enqueue_in(interval, klass, *args)
        klass.perform_in(interval, *args)
      end
    end
    
          require 'sidekiq/extensions/class_methods'
      Module.__send__(:include, Sidekiq::Extensions::Klass)
    end
    
      end
end

    
        def render(engine, content, options = {})
      raise 'Only erb templates are supported' if engine != :erb
    
            Regexp.new('\\A#{p}\\Z')
      else
        pattern
      end
    end