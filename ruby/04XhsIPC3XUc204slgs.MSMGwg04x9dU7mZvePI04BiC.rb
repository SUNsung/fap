
        
            if self.junk_headers
      while str.length < 4096
        if self.fold
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}:\r\n\t#{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        else
          str << 'X-#{Rex::Text.rand_text_alphanumeric(rand(30) + 5)}: #{Rex::Text.rand_text_alphanumeric(rand(1024) + 1)}\r\n'
        end
      end
    end
    
                checksum = OpenSSL::HMAC.digest('MD5', k1, data_encrypt)
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
              # Decodes the flags field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_flags(input)
            input.value[0].value.to_i
          end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_asn1_pvno(input)
            input.value[0].value.to_i
          end
    
                int
          end
    
              # Decodes the msg_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_msg_type(input)
            input.value[0].value.to_i
          end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS and others
    # Supported browsers:: Firefox 23+, Safari 7+, Chrome 25+, Opera 15+
    #
    # Description:: Content Security Policy, a mechanism web applications
    #               can use to mitigate a broad class of content injection
    #               vulnerabilities, such as cross-site scripting (XSS).
    #               Content Security Policy is a declarative policy that lets
    #               the authors (or server administrators) of a web application
    #               inform the client about the sources from which the
    #               application expects to load resources.
    #
    # More info::   W3C CSP Level 1 : https://www.w3.org/TR/CSP1/ (deprecated)
    #               W3C CSP Level 2 : https://www.w3.org/TR/CSP2/ (current)
    #               W3C CSP Level 3 : https://www.w3.org/TR/CSP3/ (draft)
    #               https://developer.mozilla.org/en-US/docs/Web/Security/CSP
    #               http://caniuse.com/#search=ContentSecurityPolicy
    #               http://content-security-policy.com/
    #               https://securityheaders.io
    #               https://scotthelme.co.uk/csp-cheat-sheet/
    #               http://www.html5rocks.com/en/tutorials/security/content-security-policy/
    #
    # Sets the 'Content-Security-Policy[-Report-Only]' header.
    #
    # Options: ContentSecurityPolicy configuration is a complex topic with
    #          several levels of support that has evolved over time.
    #          See the W3C documentation and the links in the more info
    #          section for CSP usage examples and best practices. The
    #          CSP3 directives in the 'NO_ARG_DIRECTIVES' constant need to be
    #          presented in the options hash with a boolean 'true' in order
    #          to be used in a policy.
    #
    class ContentSecurityPolicy < Base
      default_options default_src: :none, script_src: ''self'',
                      img_src: ''self'', style_src: ''self'',
                      connect_src: ''self'', report_only: false
    
      it 'should ignore CSP3 no arg directives unless they are set to true' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => false, :disown_opener => 'false', :upgrade_insecure_requests => 'foo'
    
          class << self
        attr_reader :processed_source, :comments_as_separators
    
        # Apply the options for this package on the clamp command
    #
    # Package flags become attributes '{type}-flag'
    #
    # So if you have:
    #
    #     class Foo < FPM::Package
    #       option '--bar-baz' ...
    #     end
    #
    # The attribute value for --foo-bar-baz will be :foo_bar_baz'
    def apply_options(clampcommand)
      @options ||= []
      @options.each do |args|
        flag, param, help, options, block = args
        clampcommand.option(flag, param, help, options, &block)
      end
    end # def apply_options
    
    class FPM::Package::FreeBSD < FPM::Package
  SCRIPT_MAP = {
    :before_install     => 'pre-install',
    :after_install      => 'post-install',
    :before_remove      => 'pre-deinstall',
    :after_remove       => 'post-deinstall',
  } unless defined?(SCRIPT_MAP)
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      # Take a flat package as input
  def input(input_path)
    # TODO: Fail if it's a Distribution pkg or old-fashioned
    expand_dir = File.join(build_path, 'expand')
    # expand_dir must not already exist for pkgutil --expand
    safesystem('pkgutil --expand #{input_path} #{expand_dir}')
    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
    
        # Create a temporary config file
    logger.debug('Creating pear config file')
    config = File.expand_path(build_path('pear.config'))
    installroot = attributes[:prefix] || '/usr/share'
    safesystem('pear', 'config-create', staging_path(installroot), config)
    
        File.write(build_path('description'), self.description + '\n')
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
        def pane_index
      index + tab.project.pane_base_index
    end
    
        def root
      _yaml_root || _project_root
    end
    
      factory :project_with_force_attach, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/detach.yml') }
    end
    
        context '$EDITOR is not set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { nil }
      end
    
        def tmux_config
      @tmux_config ||= extract_tmux_config
    end