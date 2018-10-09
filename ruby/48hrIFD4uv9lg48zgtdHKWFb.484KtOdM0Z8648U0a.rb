
        
                @status = status
      end
    
    #
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
            def make_accessible(hash = @config)
          hash.keys.each do |key|
            hash[key.to_sym] = hash[key]
            make_accessible(hash[key]) if hash[key].is_a?(Hash)
          end
        end
    
    describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
            -> { w.f4('foo', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: foo|)
        -> { w.f4('foo', 1) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f1_call_lineno}: warning: foo|)
        -> { w.f4('foo', 2) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f2_call_lineno}: warning: foo|)
        -> { w.f4('foo', 3) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.f3_call_lineno}: warning: foo|)
      end
    
      def ==(other)
    if other.respond_to?(:to_ary)
      return true if to_ary == other.to_ary
    end
    
      #
  # If there were CGI parameters in the URI, this will hold a hash of each
  # variable to value.  If there is more than one value for a given variable,
  # an array of each value is returned.
  #
  def qstring
    self.uri_parts['QueryString']
  end
    
        if res[1] == IAX_SUBTYPE_REGREJ
      reason = res[2][IAX_IE_REGREJ_CAUSE] || 'Unknown Reason'
      dprint('REGREJ: #{reason}')
      # Acknowledge the REGREJ
      self.client.send_ack(self)
      return
    end
    
    IAX_IE_CALLED_NUMBER  = 1
IAX_IE_CALLING_NUMBER = 2
IAX_IE_AUTH_METHODS   = 3
IAX_IE_CALLING_NAME   = 4
IAX_IE_USERNAME       = 6
IAX_IE_DESIRED_CODEC  = 9
IAX_IE_ORIGINAL_DID   = 10
IAX_IE_ACTUAL_CODECS  = 8
IAX_IE_PROTO_VERSION  = 11
IAX_IE_REG_REFRESH    = 19
IAX_IE_CHALLENGE_DATA = 15
IAX_IE_CHALLENGE_RESP = 16
IAX_IE_APPARENT_ADDR  = 18
IAX_IE_REGREJ_CAUSE   = 22
IAX_IE_HANGUP_CAUSE   = 42
    
        head + [data.length].pack('v') + data
  end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos Checksum definition.
        class Checksum < Element
    
              # Decodes the req_body from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::KdcRequestBody]
          def decode_asn1_req_body(input)
            Rex::Proto::Kerberos::Model::KdcRequestBody.decode(input.value[0])
          end
        end
      end
    end
  end
end

    
              # Decodes a Rex::Proto::Kerberos::Model::KdcRequestBody from an String
          #
          # @param input [String] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          def decode_asn1(input)
            seq_values = input.value
            self.type = decode_type(seq_values[0])
            self.value = decode_value(seq_values[1])
          end
    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
        it 'ignores heredocs that could share a last line' do
      expect_no_offenses(construct(false, a, make_multi(heredoc), true))
    end
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
          # Checks whether this node is an `if` statement. (This is not true of
      # ternary operators and `unless` statements.)
      #
      # @return [Boolean] whether the node is an `if` statement
      def if?
        keyword == 'if'
      end
    
            def index
          authorize! :admin, ReturnAuthorization
          @return_authorizations = order.return_authorizations.accessible_by(current_ability, :read).
                                   ransack(params[:q]).result.
                                   page(params[:page]).per(params[:per_page])
          respond_with(@return_authorizations)
        end