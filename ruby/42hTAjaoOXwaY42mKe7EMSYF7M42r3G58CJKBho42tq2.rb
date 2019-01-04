
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
    module Homebrew
  def build_env_keys(env)
    %w[
      CC CXX LD OBJC OBJCXX
      HOMEBREW_CC HOMEBREW_CXX
      CFLAGS CXXFLAGS CPPFLAGS LDFLAGS SDKROOT MAKEFLAGS
      CMAKE_PREFIX_PATH CMAKE_INCLUDE_PATH CMAKE_LIBRARY_PATH CMAKE_FRAMEWORK_PATH
      MACOSX_DEPLOYMENT_TARGET PKG_CONFIG_PATH PKG_CONFIG_LIBDIR
      HOMEBREW_DEBUG HOMEBREW_MAKE_JOBS HOMEBREW_VERBOSE
      HOMEBREW_SVN HOMEBREW_GIT
      HOMEBREW_SDKROOT HOMEBREW_BUILD_FROM_SOURCE
      MAKE GIT CPP
      ACLOCAL_PATH PATH CPATH].select { |key| env.key?(key) }
  end
    
      def elisp_caveats
    return if f.keg_only?
    if keg && keg.elisp_installed?
      <<-EOS.undent
        Emacs Lisp files have been installed to:
          #{HOMEBREW_PREFIX}/share/emacs/site-lisp/#{f.name}
      EOS
    end
  end
    
      def describe_system_ruby
    s = ''
    case RUBY_VERSION
    when /^1\.[89]/, /^2\.0/
      s << '#{RUBY_VERSION}-p#{RUBY_PATCHLEVEL}'
    else
      s << RUBY_VERSION
    end
    
      def search
    if ARGV.empty?
      puts_columns Formula.full_names
    elsif ARGV.include? '--macports'
      exec_browser 'https://www.macports.org/ports.php?by=name&substr=#{ARGV.next}'
    elsif ARGV.include? '--fink'
      exec_browser 'http://pdb.finkproject.org/pdb/browse.php?summary=#{ARGV.next}'
    elsif ARGV.include? '--debian'
      exec_browser 'https://packages.debian.org/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--opensuse'
      exec_browser 'https://software.opensuse.org/search?q=#{ARGV.next}'
    elsif ARGV.include? '--fedora'
      exec_browser 'https://admin.fedoraproject.org/pkgdb/packages/%2A#{ARGV.next}%2A/'
    elsif ARGV.include? '--ubuntu'
      exec_browser 'http://packages.ubuntu.com/search?keywords=#{ARGV.next}&searchon=names&suite=all&section=all'
    elsif ARGV.include? '--desc'
      query = ARGV.next
      rx = query_regexp(query)
      Descriptions.search(rx, :desc).print
    elsif ARGV.first =~ HOMEBREW_TAP_FORMULA_REGEX
      query = ARGV.first
      user, repo, name = query.split('/', 3)
    
        @report
  end
    
    module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
            def execute
          create_labels
        end
    
            # Builds a new issue using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
    
            def cross_project?
          return true unless source_repository_id
    
      #
  # Returns a hash of variables that contain information about the request,
  # such as the remote host information.
  #
  # TODO
  #
  def meta_vars
  end
    
    module Rex
  module Proto
    module Kerberos
      module Crypto
        module Rc4Hmac
          # Decrypts the cipher using RC4-HMAC schema
          #
          # @param cipher [String] the data to decrypt
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted cipher
          # @raise [RuntimeError] if decryption doesn't succeed
          def decrypt_rc4_hmac(cipher, key, msg_type)
            unless cipher && cipher.length > 16
              raise ::RuntimeError, 'RC4-HMAC decryption failed'
            end
    
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
    
              # Encodes the data
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_data(data)
            OpenSSL::ASN1::OctetString.new(data)
          end
        end
      end
    end
  end
end
    
              private
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
              # Decodes the realm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_realm(input)
            input.value[0].value
          end