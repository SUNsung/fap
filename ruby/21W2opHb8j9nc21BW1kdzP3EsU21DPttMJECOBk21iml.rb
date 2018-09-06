
        
          private
    
          path_modified_time = path.mtime
      days_default = options[:days_default]
    
        # Releases an entry, unlocking it.
    #
    # This is an idempotent operation. It is safe to call this even if you're
    # unsure if an entry is locked or not.
    #
    # After calling this, the previous entry should no longer be used.
    #
    # @param [Entry] entry
    def release(entry)
      @lock.synchronize do
        unlocked_release(entry.id)
      end
    end
    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
              format('%     e', 109.52).should == ' 1.095200e+02'
          format('%     E', 109.52).should == ' 1.095200E+02'
          format('%     f', 10.952).should == ' 10.952000'
          format('%     g', 12.1234).should == ' 12.1234'
          format('%     G', 12.1234).should == ' 12.1234'
          format('%     a', 196).should == ' 0x1.88p+7'
          format('%     A', 196).should == ' 0X1.88P+7'
        end
      end
    end
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
    ###
#
# HTTP response class.
#
###
class Response < Packet
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # HMAC-SHA1
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # AES Encryption
      0x01, 0x00, 0x00, 0x00
    ].pack('C*')
    
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
    
              # Encrypts the cipher using RC4-HMAC schema
          #
          # @param data [String] the data to encrypt
          # @param key [String] the key to encrypt
          # @param msg_type [Integer] the message type
          # @return [String] the encrypted data
          def encrypt_rc4_hmac(data, key, msg_type)
            k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
    
      # Compile a file on disk to CSS.
  #
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  #
  # @overload compile_file(filename, options = {})
  #   Return the compiled CSS rather than writing it to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @return [String] The compiled CSS.
  #
  # @overload compile_file(filename, css_filename, options = {})
  #   Write the compiled CSS to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @param css_filename [String] The location to which to write the compiled CSS.
  def self.compile_file(filename, *args)
    options = args.last.is_a?(Hash) ? args.pop : {}
    css_filename = args.shift
    result = Sass::Engine.for_file(filename, options).render
    if css_filename
      options[:css_filename] ||= css_filename
      open(css_filename, 'w') {|css_file| css_file.write(result)}
      nil
    else
      result
    end
  end
end
    
          ext = @options[:from]
      Sass::Util.glob('#{@options[:input]}/**/*.#{ext}') do |f|
        output =
          if @options[:in_place]
            f
          elsif @options[:output]
            output_name = f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
            output_name[0...@options[:input].size] = @options[:output]
            output_name
          else
            f.gsub(/\.(c|sa|sc|le)ss$/, '.#{@options[:to]}')
          end
    
            # TODO: this preserves historical behavior, but it's possible
        # :filename should be either normalized to the native format
        # or consistently URI-format.
        full_filename = full_filename.tr('\\', '/') if Sass::Util.windows?
    
    World(VagrantHelpers)

    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
    gem 'twitter-text', '1.14.7'
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny