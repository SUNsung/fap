
        
          def dump_build_env(env, f = $stdout)
    keys = build_env_keys(env)
    keys -= %w[CC CXX OBJC OBJCXX] if env['CC'] == env['HOMEBREW_CC']
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
      UNBREWED_EXCLUDE_FILES = %w[.DS_Store]
  UNBREWED_EXCLUDE_PATHS = %w[
    .github/*
    bin/brew
    lib/gdk-pixbuf-2.0/*
    lib/gio/*
    lib/node_modules/*
    lib/python[23].[0-9]/*
    lib/pypy/*
    lib/pypy3/*
    lib/ruby/gems/[12].*
    lib/ruby/site_ruby/[12].*
    lib/ruby/vendor_ruby/[12].*
    share/pypy/*
    share/pypy3/*
    share/doc/homebrew/*
    share/info/dir
    share/man/man1/brew.1
    share/man/whatis
  ]
    
      # Puts a URI back together based on the URI parts
  def uri
    str = self.uri_parts['Resource'].dup || '/'
    
              # Encodes the Rex::Proto::Kerberos::Model::ApReq into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_pvno], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 1, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_options], 2, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_ticket], 3, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_authenticator], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new(elems)
    
                int
          end
    
              # Rex::Proto::Kerberos::Model::EncKdcResponse encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'EncKdcResponse encoding not supported'
          end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
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
    
      def validate_target_file
    if File.exist?(target_file)
      if  delete_target_file?
        File.delete(target_file)
      else
        signal_error('Package creation cancelled, a previously generated package exist at location: #{target_file}, move this file to safe place and run the command again')
      end
    end
  end
    
        puts('Unpacking #{package_file}')
    
      private
  def update_all?
    plugins_arg.size == 0
  end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for braces around the last parameter in a method call
      # if the last parameter is a hash.
      # It supports `braces`, `no_braces` and `context_dependent` styles.
      #
      # @example EnforcedStyle: braces
      #   # The `braces` style enforces braces around all method
      #   # parameters that are hashes.
      #
      #   # bad
      #   some_method(x, y, a: 1, b: 2)
      #
      #   # good
      #   some_method(x, y, {a: 1, b: 2})
      #
      # @example EnforcedStyle: no_braces (default)
      #   # The `no_braces` style checks that the last parameter doesn't
      #   # have braces around it.
      #
      #   # bad
      #   some_method(x, y, {a: 1, b: 2})
      #
      #   # good
      #   some_method(x, y, a: 1, b: 2)
      #
      # @example EnforcedStyle: context_dependent
      #   # The `context_dependent` style checks that the last parameter
      #   # doesn't have braces around it, but requires braces if the
      #   # second to last parameter is also a hash literal.
      #
      #   # bad
      #   some_method(x, y, {a: 1, b: 2})
      #   some_method(x, y, {a: 1, b: 2}, a: 1, b: 2)
      #
      #   # good
      #   some_method(x, y, a: 1, b: 2)
      #   some_method(x, y, {a: 1, b: 2}, {a: 1, b: 2})
      class BracesAroundHashParameters < Cop
        include ConfigurableEnforcedStyle
        include RangeHelp
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
              delta(first.loc.operator, second.loc.operator)
        end