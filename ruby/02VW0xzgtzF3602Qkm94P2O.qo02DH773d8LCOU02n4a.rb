
        
        protected
    
      #
  # Split the URI into the resource being requested and its query string.
  #
  def update_uri_parts
    # If it has a query string, get the parts.
    if ((self.raw_uri) and (md = self.raw_uri.match(/(.+?)\?(.*)$/)))
      self.uri_parts['QueryString'] = parse_cgi_qstring(md[2])
      self.uri_parts['Resource']    = md[1]
    # Otherwise, just assume that the URI is equal to the resource being
    # requested.
    else
      self.uri_parts['QueryString'] = {}
      self.uri_parts['Resource']    = self.raw_uri
    end
    
        # Send it off.
    put(response.to_s)
  end
    
              case msg_type
          when Rex::Proto::Kerberos::Model::KRB_ERROR
            res = Rex::Proto::Kerberos::Model::KrbError.decode(asn1)
          when Rex::Proto::Kerberos::Model::AS_REP
            res = Rex::Proto::Kerberos::Model::KdcResponse.decode(asn1)
          when Rex::Proto::Kerberos::Model::TGS_REP
            res = Rex::Proto::Kerberos::Model::KdcResponse.decode(asn1)
          else
            raise ::RuntimeError, 'Kerberos Client: Unknown response'
          end
    
            end
      end
    end
  end
end

    
                int
          end
    
                if kvno
              kvno_asn1 = OpenSSL::ASN1::ASN1Data.new([encode_kvno], 1, :CONTEXT_SPECIFIC)
              elems << kvno_asn1
            end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastReque from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
      # The global load paths for Sass files. This is meant for plugins and
  # libraries to register the paths to their Sass stylesheets to that they may
  # be `@imported`. This load path is used by every instance of {Sass::Engine}.
  # They are lower-precedence than any load paths passed in via the
  # {file:SASS_REFERENCE.md#load_paths-option `:load_paths` option}.
  #
  # If the `SASS_PATH` environment variable is set,
  # the initial value of `load_paths` will be initialized based on that.
  # The variable should be a colon-separated list of path names
  # (semicolon-separated on Windows).
  #
  # Note that files on the global load path are never compiled to CSS
  # themselves, even if they aren't partials. They exist only to be imported.
  #
  # @example
  #   Sass.load_paths << File.dirname(__FILE__ + '/sass')
  # @return [Array<String, Pathname, Sass::Importers::Base>]
  def self.load_paths
    @load_paths ||= if ENV['SASS_PATH']
                      ENV['SASS_PATH'].split(Sass::Util.windows? ? ';' : ':')
                    else
                      []
                    end
  end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
        # variable
    # Script::Value
    inherited_hash_writer :var
    
          private
    
        # Parses the command-line arguments and runs the executable.
    # Calls `Kernel#exit` at the end, so it never returns.
    #
    # @see #parse
    def parse!
      # rubocop:disable RescueException
      begin
        parse
      rescue Exception => e
        # Exit code 65 indicates invalid data per
        # http://www.freebsd.org/cgi/man.cgi?query=sysexits. Setting it via
        # at_exit is a bit of a hack, but it allows us to rethrow when --trace
        # is active and get both the built-in exception formatting and the
        # correct exit code.
        at_exit {exit Sass::Util.windows? ? 13 : 65} if e.is_a?(Sass::SyntaxError)
    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified. Requires --from.') do
        @options[:input] = $stdin
      end
    
        def watching_and_updating(opts)
      opts.separator ''
      opts.separator 'Watching and Updating:'
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
      def add_path(tar, tar_path, path)
    stat = File.lstat(path)
    if stat.directory?
      tar.mkdir(tar_path, stat.mode)
    elsif stat.symlink?
      tar.add_symlink(tar_path, File.readlink(path), stat.mode)
    else
      tar.add_file_simple(tar_path, stat.mode, stat.size) do |io|
        File.open(path) do |fd|
          chunk = nil
          size = 0
          while chunk = fd.read(16384) do
            size += io.write(chunk)
          end
          if size != stat.size
            raise 'Failed to add #{path} to the archive; expected to ' +
                  'write #{stat.size} bytes, only wrote #{size}'
          end
        end
      end # tar.tar.add_file_simple
    end
  end # def add_path
    
      def dependencies
    bogus_regex = /[^\sA-Za-z0-9><=+._@-]/
    # Actually modifies depencies if they are not right
    bogus_dependencies = @dependencies.grep bogus_regex
    if bogus_dependencies.any?
      @dependencies.reject! { |a| a =~ bogus_regex }
      logger.warn('Some of the dependencies looked like they weren't package ' \
                  'names. Such dependency entries only serve to confuse arch. ' \
                  'I am removing them.',
                  :removed_dependencies => bogus_dependencies,
                  :fixed_dependencies => @dependencies)
    end
    return @dependencies
  end
    
        template = template('solaris.erb')
    File.open('#{build_path}/pkginfo', 'w') do |pkginfo|
      pkginfo.puts template.result(binding)
    end
    
        task(options.name) do |_, task_args|
      block.call(*[options, task_args].first(block.arity)) if block_given?
      abort('Must specify args') unless options.respond_to?(:args)
      @args = options.delete_field(:args)
      run_cli
    end
  end