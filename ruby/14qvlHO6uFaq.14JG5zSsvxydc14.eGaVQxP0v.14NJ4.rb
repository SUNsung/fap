
        
                result = block.call(parameters.first || {}) # to always pass a hash
        self.current_lane = original_lane
    
          command_return = ActionCommandReturn.new(
        return_value: action_return,
        return_value_type: action_class_ref.return_type,
        closure_argument_value: closure_argument_value
      )
      return command_return
    end
    
          it 'sets the platform to tvOS' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              platform: 'tvOS'
            )
          end').runner.execute(:test)
    
            expect(result[1]).to start_with('security set-keychain-settings')
        expect(result[1]).to include('-t 600')
        expect(result[1]).to include('-l')
        expect(result[1]).to include('-u')
        expect(result[1]).to include('~/Library/Keychains/test.keychain')
      end
    
          it 'handles no extension or extensions parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          # Verify that value is the type that we're expecting, if we are expecting a type
      if data_type == Fastlane::Boolean
        ensure_boolean_type_passes_validation(value)
      else
        ensure_generic_type_passes_validation(value)
      end
    
            expect(FastlaneCore::CertChecker.install_wwdr_certificate).to be(true)
      end
    end
  end
end

    
              config = FastlaneCore::Configuration.create([name, other, platform], {})
          config.set(:name, 'name1')
          config.set(:other, 'other')
          config.pop_values!
    
    # remove (double and single) quote pairs
# un-double-double quote resulting string
def simulate_windows_shell_unwrapping(string)
  regex = /^('|')(([^'])(\S*)([^']))('|')$/
  unless string.to_s.match(regex).nil?
    string = string.to_s.match(regex)[2] # get only part in quotes
    string.to_s.gsub!('''', ''') # remove double double quotes
  end
  return string
end
    
        # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
              # Default opts to a blank optionparser if none is given
          opts ||= OptionParser.new
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                result.instance_variable_set(key, obj.instance_variable_get(key))
              end
            end
          end
    
            # This contains all the configuration plugins by scope.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :configs
    
            # This returns all the registered commands.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        def commands
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.commands)
            end
          end
        end
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
      def self.create_ipmi_getchannel_probe
    [   # Get Channel Authentication Capabilities
      0x06, 0x00, 0xff, 0x07, # RMCP Header
      0x00, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x20, 0x18,
      0xc8, 0x81, 0x00, 0x38, 0x8e, 0x04, 0xb5
    ].pack('C*')
  end
    
              res = decode_kerb_response(data)
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Principal into an String
          #
          # @return [String] encoded principal
          def encode
            encoded = ''
            encoded << encode_name_type
            encoded << [components.length].pack('N')
            encoded << encode_realm
            encoded << encode_components
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of credential times stored in the Kerberos Credential Cache.
        class Time < Element
          # @!attribute auth_time
          #   @return [Integer]
          attr_accessor :auth_time
          # @!attribute start_time
          #   @return [Integer]
          attr_accessor :start_time
          # @!attribute end_time
          #   @return [Integer]
          attr_accessor :end_time
          # @!attribute renew_till
          #   @return [Integer]
          attr_accessor :renew_till
    
                res = ''
            case etype
            when RC4_HMAC
              res = encrypt_rc4_hmac(data, key, 5)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Decodes the etype from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_etype(input)
            input.value[0].value.to_i
          end
    
              # Decodes the type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
          def is_create_page
        true
      end
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
    context 'Precious::Views::Editing' do
  include Rack::Test::Methods
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    Precious::App.set(:gollum_path, @path)
    FileUtils.cp_r File.join(examples, 'revert.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
        assert_equal 'header', header_2.raw_data
    assert_equal 'footer', foot_2.raw_data
    assert_equal 'def', foot_2.version.message
    assert_not_equal foot_1.version.sha, foot_2.version.sha
    assert_not_equal header_1.version.sha, header_2.version.sha
    
    #############################################################################
#
# Custom tasks (add your own tasks here)
#
#############################################################################
    
        class MapGollum
      def initialize(base_path)
        @mg = Rack::Builder.new do
          
          map '/#{base_path}' do
            run Precious::App
          end
          map '/' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          map '/*' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          
        end
      end
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
        # Short circuit for a `fpm --version` or `fpm -v` short invocation that 
    # is the user asking us for the version of fpm.
    if run_args == [ '-v' ] || run_args == [ '--version' ]
      puts FPM::VERSION
      return 0
    end
    
      # write all scripts to .scripts (tar and dir)
  def write_scripts
    scripts_path = File.join(staging_path, '.scripts')
    target_scripts = [:before_install, :after_install, :before_remove, :after_remove]
    if target_scripts.any? {|name| script?(name)}
      ::Dir.mkdir(scripts_path)
      target_scripts.each do |name|
        next unless script?(name)
        out = File.join(scripts_path, name.to_s)
        logger.debug('Writing script', :source => name, :target => out)
        File.write(out, script(name))
        File.chmod(0755, out)
      end
    end
  end
    
        # magic
    header[TAR_MAGIC_START..TAR_MAGIC_END] = 'ustar\0' + '00'
    
      option '--postinstall-action', 'POSTINSTALL_ACTION',
    'Post-install action provided in package metadata. ' \
    'Optionally one of '#{POSTINSTALL_ACTIONS.join('', '')}'.' do |value|
    if !POSTINSTALL_ACTIONS.include?(value)
      raise ArgumentError, 'osxpkg-postinstall-action value of '#{value}' is invalid. ' \
        'Must be one of #{POSTINSTALL_ACTIONS.join(', ')}'
    end
    value
  end
    
      option '--compression', 'COMPRESSION', 'The compression type to use, must ' \
    'be one of #{COMPRESSION_TYPES.join(', ')}.', :default => 'xz' do |value|
    if !COMPRESSION_TYPES.include?(value)
      raise ArgumentError, 'Pacman compression value of '#{value}' is invalid. ' \
        'Must be one of #{COMPRESSION_TYPES.join(', ')}'
    end
    value
  end
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html