
        
        BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
      protected
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
      private
    
      def command
    abort 'This command requires a command argument' if ARGV.empty?
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
    require 'formula'
require 'system_config'
require 'stringio'
require 'socket'
    
        ff.each do |f|
      missing = f.missing_dependencies(hide: ARGV.values('hide'))
      next if missing.empty?
    
      #
  # Returns a hash of variables that contain information about the request,
  # such as the remote host information.
  #
  # TODO
  #
  def meta_vars
  end
    
        head + [data.length].pack('v') + data
  end
    
            end
      end
    end
  end
end

    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          def decode_asn1(input)
            seq_values = input.value
            self.type = decode_type(seq_values[0])
            self.value = decode_value(seq_values[1])
          end
    
              # Decodes the rtime field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_rtime(input)
            input.value[0].value
          end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
    
    {        def right_whole_line_range(loc_end)
          if range_by_whole_lines(loc_end).source.strip =~ /}\s*,?\z/
            range_by_whole_lines(loc_end, include_final_newline: true)
          else
            loc_end
          end
        end
    
    RSpec.describe RuboCop::Cop::Layout::MultilineHashBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
        context 'opening brace on separate line from first element' do
      it 'allows closing brace on same line as last element' do
        expect_no_offenses(construct(true, false))
      end
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
        context 'when using safe navigation operator' do
      let(:ruby_version) { 2.3 }
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
    
    {      # Checks whether the `hash` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `hash` literal is enclosed in braces
      def braces?
        loc.end && loc.end.is?('}')
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode