
        
            if res[1] == IAX_SUBTYPE_REGREJ
      reason = res[2][IAX_IE_REGREJ_CAUSE] || 'Unknown Reason'
      dprint('REGREJ: #{reason}')
      return
    end
    
    # Supported
IAX_SUPPORTED_CODECS  = IAX_CODEC_G711_MULAW | IAX_CODEC_G711_ALAW | IAX_CODEC_LINEAR_PCM
    
              private
    
              # Rex::Proto::Kerberos::Model::EncKdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'EncKdcResponse encoding not supported'
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a Kerberos KRB-ERROR (response error)
        # message definition.
        class KrbError < Element
          # @!attribute pvno
          #   @return [Integer] The protocol version number
          attr_accessor :pvno
          # @!attribute msg_type
          #   @return [Integer] The type of a protocol message
          attr_accessor :msg_type
          # @!attribute ctime
          #   @return [Time] The current time of the client's host
          attr_accessor :ctime
          # @!attribute cusec
          #   @return [Integer] The microseconds part of the client timestamp
          attr_accessor :cusec
          # @!attribute stime
          #   @return [Time] The current time of the server
          attr_accessor :stime
          # @!attribute susec
          #   @return [Integer] The microseconds part of the server timestamp
          attr_accessor :susec
          # @!attribute error_code
          #   @return [Integer] The error request returned by kerberos or the server when a request fails
          attr_accessor :error_code
          # @!attribute crealm
          #   @return [String] The realm part of the client's principal identifier
          attr_accessor :crealm
          # @!attribute cname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the client's principal identifier
          attr_accessor :cname
          # @!attribute realm
          #   @return [String] The realm part of the server's principal identifier
          attr_accessor :realm
          # @!attribute sname
          #   @return [Rex::Proto::Kerberos::Model::PrincipalName] The name part of the server's identity
          attr_accessor :sname
          # @!attribute e_data
          #   @return [String] additional data about the error (ASN.1 encoded data)
          attr_accessor :e_data
    
              # Encodes a Rex::Proto::Kerberos::Model::PreAuthData into an ASN.1 String
          #
          # @return [String]
          def encode
            type_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_type], 1, :CONTEXT_SPECIFIC)
            value_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_value], 2, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new([type_asn1, value_asn1])
    
      def test_transform_keys
    x = @cls[a: 1, b: 2, c: 3]
    y = x.transform_keys {|k| :'#{k}!' }
    assert_equal({a: 1, b: 2, c: 3}, x)
    assert_equal({a!: 1, b!: 2, c!: 3}, y)
    
          def dispatch_seq(token, expr, str, in_symbol:)
        if token == :on_parse_error or token == :compile_error
          TOKEN_SEQ_EXPRS[token][0]
        elsif in_symbol
          [YELLOW]
        elsif TOKEN_KEYWORDS.fetch(token, []).include?(str)
          [CYAN, BOLD]
        elsif (seq, exprs = TOKEN_SEQ_EXPRS[token]; (expr & (exprs || 0)) != 0)
          seq
        else
          nil
        end
      end
    end
    
      def intersect(ray, isect)
    d = -@p.vdot(@n)
    v = ray.dir.vdot(@n)
    v0 = v
    if v < 0.0 then
      v0 = -v
    end
    if v0 < 1.0e-17 then
      return
    end
    
    def to_string(s)
  to_array(s).map { |c| to_char(c) }.join
end
    
      def broadcast_params
    params.permit(:title, :processed_html, :type_of, :sent)
    # left out body_markdown and processed_html attributes
    #   until we decide we're using them
  end
end

    
        # Manifest Filename
    manifest_fn = build_path('#{name}.p5m')
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html
    
      if base_index = options.fetch(:base_index) { 1 }
    standard_options << 'base-index #{base_index}'
  end
    
          def create_project(project_options = {})
        # Strings provided to --attach are coerced into booleans by Thor.
        # 'f' and 'false' will result in `:attach` being `false` and any other
        # string or the empty flag will result in `:attach` being `true`.
        # If the flag is not present, `:attach` will be `nil`.
        attach = detach = false
        attach = true if project_options[:attach] == true
        detach = true if project_options[:attach] == false
    
        it 'deletes the configuration directory(s)' do
      allow(Tmuxinator::Config).to receive(:directories) \
        { [Tmuxinator::Config.xdg, Tmuxinator::Config.home] }
      expect(FileUtils).to receive(:remove_dir).once.
        with(Tmuxinator::Config.xdg)
      expect(FileUtils).to receive(:remove_dir).once.
        with(Tmuxinator::Config.home)
      expect(FileUtils).to receive(:remove_dir).never
      capture_io { cli.start }
    end