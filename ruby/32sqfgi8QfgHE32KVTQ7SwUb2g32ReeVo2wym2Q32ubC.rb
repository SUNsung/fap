
        
            A binary installer is available:
      https://www.haskell.org/platform/mac.html
    EOS
  when 'mysqldump-secure' then <<-EOS.undent
    The creator of mysqldump-secure tried to game our popularity metrics.
    EOS
  when 'ngrok' then <<-EOS.undent
    Upstream sunsetted 1.x in March 2016 and 2.x is not open-source.
    
      def expand_reqs
    formula.recursive_requirements do |dependent, req|
      build = effective_build_options_for(dependent)
      if (req.optional? || req.recommended?) && build.without?(req)
        Requirement.prune
      elsif req.build? && dependent != formula
        Requirement.prune
      elsif req.satisfied? && req.default_formula? && (dep = req.to_dependency).installed?
        deps << dep
        Requirement.prune
      end
    end
  end
    
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
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
      DATA = :DATA
    
            seq = first_seq(child)
        seq.members.reject! {|sseq| sseq == '\n'}
        first, rest = seq.members.first, seq.members[1..-1]
    
        def parse_error_directive(parent, line, root, value, offset)
      raise SyntaxError.new('Invalid error directive '@error': expected expression.') unless value
      raise SyntaxError.new('Illegal nesting: Nothing may be nested beneath error directives.',
        :line => @line + 1) unless line.children.empty?
      offset = line.offset + line.text.index(value).to_i
      Tree::ErrorNode.new(parse_script(value, :offset => offset))
    end
    
        # Set an option for specifying `Encoding.default_external`.
    #
    # @param opts [OptionParser]
    def encoding_option(opts)
      encoding_desc = 'Specify the default encoding for input files.'
      opts.on('-E', '--default-encoding ENCODING', encoding_desc) do |encoding|
        Encoding.default_external = encoding
      end
    end
    
          # @see Base#watched_file?
      def watched_file?(filename)
        # Check against the root with symlinks resolved, since Listen
        # returns fully-resolved paths.
        filename =~ /\.s[ac]ss$/ && filename.start_with?(@real_root + File::SEPARATOR)
      end
    
        def windows?
      ::Gem.win_platform?
    end
    
          # Compress a file using gzip
      # @param path [String] The location to be compressed
      # @param target_file [String] Destination of the generated file
      def gzip(path, target_file)
        ::File.open(path, 'wb') do |file|
          gzip_file = ::Zlib::GzipWriter.new(file)
          gzip_file.write(target_file.read)
          gzip_file.close
        end
      end
    end
  end
end

    
        # This class is pretty similar to what bundler's injector class is doing
    # but we only accept a local resolution of the dependencies instead of calling rubygems.
    # so we removed `definition.resolve_remotely!`
    #
    # And managing the gemfile is down by using our own Gemfile parser, this allow us to
    # make it work with gems that are already defined in the gemfile.
    def inject(gemfile_path, lockfile_path, dependencies)
      if Bundler.settings[:frozen]
        # ensure the lock and Gemfile are synced
        Bundler.definition.ensure_equivalent_gemfile_and_lockfile(true)
        # temporarily remove frozen while we inject
        frozen = Bundler.settings.delete(:frozen)
      end
    
    * #{dependencies_from.join('\n* ')}
        eos
        LogStash::PluginManager.ui.info(message)
    end
    
        attr_reader :gem_home
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
            @dependency = ::File.dirname(file) =~ DEPENDENCIES_DIR_RE
    
    desc 'Test the paperclip plugin.'
RSpec::Core::RakeTask.new(:spec)
    
    Then /^I should have attachment columns for '([^']*)'$/ do |attachment_name|
  cd('.') do
    columns = eval(`bundle exec rails runner 'puts User.columns.map{ |column| [column.name, column.type] }.inspect'`.strip)
    expect_columns = [
      ['#{attachment_name}_file_name', :string],
      ['#{attachment_name}_content_type', :string],
      ['#{attachment_name}_file_size', :integer],
      ['#{attachment_name}_updated_at', :datetime]
    ]
    expect(columns).to include(*expect_columns)
  end
end
    
      steps %{
    And I turn off class caching
    And I write to 'Gemfile' with:
      '''
      source 'http://rubygems.org'
      gem 'rails', '#{framework_version}'
      gem 'sqlite3', :platform => [:ruby, :rbx]
      gem 'activerecord-jdbcsqlite3-adapter', :platform => :jruby
      gem 'jruby-openssl', :platform => :jruby
      gem 'capybara'
      gem 'gherkin'
      gem 'aws-sdk-s3'
      gem 'racc', :platform => :rbx
      gem 'rubysl', :platform => :rbx
      '''
    And I remove turbolinks
    And I comment out lines that contain 'action_mailer' in 'config/environments/*.rb'
    And I empty the application.js file
    And I configure the application to use 'paperclip' from this project
  }
    
      def generate_migration
    migration_template('paperclip_migration.rb.erb',
                       'db/migrate/#{migration_file_name}',
                       migration_version: migration_version)
  end
    
        def define_class_getter
      @klass.extend(ClassMethods)
    end