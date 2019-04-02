
        
          def pinned?
    path.symlink?
  end
    
        data =
    [   # Maximum access
      0x00, 0x00,
      # Reserved
      0x00, 0x00
    ].pack('C*') +
    console_session_id +
    [
      0x00, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x08,
      # Cipher 0
      0x00, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x08,
      # No Encryption
      0x00, 0x00, 0x00, 0x00
    ].pack('C*')
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Encodes the etype
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_etype
            bn = OpenSSL::BN.new(etype.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
      def raw_require_paths # :nodoc:
    raise NotImplementedError
  end
    
        tuples = tuples.sort_by { |x| x[0] }
    
        EXPECTED
    
      def test_execute_with_otp_failure
    response = 'You have enabled multifactor authentication but your request doesn\'t have the correct OTP code. Please check it and retry.'
    yank_uri = 'http://example/api/v1/gems/yank'
    @fetcher.data[yank_uri] = [response, 401, 'Unauthorized']
    
        @d2_0_b = util_spec 'd', '2.0.b'
    util_build_gem @d2_0_b
    
          @installer = Gem::Installer.at path, :post_install_message => false
      @installer.install
    end
    
    DEPENDENCIES
  jwt (= 1.1)!
    LOCKFILE
    
        r = Gem::Resolver.new([ad, bd], s)
    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
              def is_#{name}_global?(name)
            return !@parent if @#{name}s && @#{name}s.has_key?(name)
            @parent && @parent.is_#{name}_global?(name)
          end
        RUBY
      end
    
            expect(new_source)
          .to eq('#{prefix}#{open}#{a}, # a\n#{b}\n#{close} # b\n#{suffix}')
      end
    end
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
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
    
        # If --inputs was specified, read it as a file.
    if !inputs.nil?
      if !File.exists?(inputs)
        logger.fatal('File given for --inputs does not exist (#{inputs})')
        return 1
      end
    
        # Follow similar rules to these used in ``to_s_fullversion`` method.
    # FIXME: maybe epoch should also be introduced somehow ('#{version},#{epoch})?
    #        should it go to pkgdata['version'] or to another place?
    # https://www.freebsd.org/doc/en/books/porters-handbook/makefile-naming.html
    pkg_version = (iteration and (iteration.to_i > 0)) ?  '#{version}-#{iteration}' : '#{version}'
    
        # Final format of manifest
    safesystem('pkgfmt', manifest_fn)
    
      option '--downcase-name', :flag, 'Should the target package name be in ' \
    'lowercase?', :default => true
  option '--downcase-dependencies', :flag, 'Should the package dependencies ' \
    'be in lowercase?', :default => true
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
        # Add the tar compression flag if necessary
    tar_compression_flag(input_path).tap do |flag|
      args << flag unless flag.nil?
    end
    
      # Input a zipfile.
  def input(input_path)
    # use part of the filename as the package name
    self.name = File.extname(input_path)[1..-1]