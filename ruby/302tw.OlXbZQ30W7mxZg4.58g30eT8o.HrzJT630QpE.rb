
        
                  # If we don't have the lock, then we need to acquire it.
          if !@machine_locks[entry.id]
            raise 'Unlocked delete on machine: #{entry.id}'
          end
    
            # Execute a command on the remote machine. The exact semantics
        # of this method are up to the implementor, but in general the
        # users of this class will expect this to be a shell.
        #
        # This method gives you no way to write data back to the remote
        # machine, so only execute commands that don't expect input.
        #
        # @param [String] command Command to execute.
        # @yield [type, data] Realtime output of the command being executed.
        # @yieldparam [String] type Type of the output. This can be
        #   `:stdout`, `:stderr`, etc. The exact types are up to the
        #   implementor.
        # @yieldparam [String] data Data for the given output.
        # @return [Integer] Exit code of the command.
        def execute(command, opts=nil)
        end
    
            # Called to change the hostname of the virtual machine.
        def change_host_name(name)
          raise BaseError, _key: :unsupported_host_name
        end
      end
    end
  end
end

    
    module Vagrant
  module Plugin
    module V1
      # This class maintains a list of all the registered plugins as well
      # as provides methods that allow querying all registered components of
      # those plugins as a single unit.
      class Manager
        attr_reader :registered
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
        def parse_comment(line)
      if line.text[1] == CSS_COMMENT_CHAR || line.text[1] == SASS_COMMENT_CHAR
        silent = line.text[1] == SASS_COMMENT_CHAR
        loud = !silent && line.text[2] == SASS_LOUD_COMMENT_CHAR
        if silent
          value = [line.text]
        else
          value = self.class.parse_interp(
            line.text, line.index, to_parser_offset(line.offset), :filename => @filename)
        end
        value = Sass::Util.with_extracted_values(value) do |str|
          str = str.gsub(/^#{line.comment_tab_str}/m, '')[2..-1] # get rid of // or /*
          format_comment_text(str, silent)
        end
        type = if silent
                 :silent
               elsif loud
                 :loud
               else
                 :normal
               end
        comment = Tree::CommentNode.new(value, type)
        comment.line = line.index
        text = line.text.rstrip
        if text.include?('\n')
          end_offset = text.length - text.rindex('\n')
        else
          end_offset = to_parser_offset(line.offset + text.length)
        end
        comment.source_range = Sass::Source::Range.new(
          Sass::Source::Position.new(@line, to_parser_offset(line.offset)),
          Sass::Source::Position.new(@line + text.count('\n'), end_offset),
          @options[:filename])
        comment
      else
        Tree::RuleNode.new(parse_interp(line.text), full_line_range(line))
      end
    end
    
          opts.on('--watch', 'Watch files or directories for changes.',
                         'The location of the generated CSS can be set using a colon:',
                         '  #{@default_syntax} --watch input.#{@default_syntax}:output.css',
                         '  #{@default_syntax} --watch input-dir:output-dir') do
        @options[:watch] = true
      end
    
            found = possible_files(remove_root(name)).map do |f, s|
          path = if dir == '.' || Sass::Util.pathname(f).absolute?
                   f
                 else
                   '#{escape_glob_characters(dir)}/#{f}'
                 end
          Dir[path].map do |full_path|
            full_path.gsub!(REDUNDANT_DIRECTORY, File::SEPARATOR)
            [Sass::Util.cleanpath(full_path).to_s, s]
          end
        end.flatten(1)
        return if found.empty?
    
            opts.on_tail('-h', '--help', '-H', 'Display this help message.') do
          puts opts
          exit
        end
    
          def fetch(key, default=nil, &block)
        fetched_keys << key unless fetched_keys.include?(key)
        peek(key, default, &block)
      end
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
                try += 1
            $stderr.puts('Error #{e.class}, retrying #{try}/#{options[:max_tries]}')
            $stderr.puts(e.message)
            sleep(0.5)
          end
        end
      end
      raise exception if exception
    
        if local_gems?
      gems = extract_local_gems_plugins
    elsif development?
      gems = plugins_development_gems
    else
      gems = plugins_gems
      verify_remote!(gems) if !local? && verify?
    end
    
      option '--installed', :flag, 'List only explicitly installed plugins using bin/logstash-plugin install ...', :default => false
  option '--verbose', :flag, 'Also show plugin version number', :default => false
  option '--group', 'NAME', 'Filter plugins per group: input, output, filter or codec' do |arg|
    raise(ArgumentError, 'should be one of: input, output, filter or codec') unless ['input', 'output', 'filter', 'codec', 'pack'].include?(arg)
    arg
  end
    
        class Main < Clamp::Command
      subcommand 'list', 'List all installed Logstash plugins', LogStash::PluginManager::List
      subcommand 'install', 'Install a Logstash plugin', LogStash::PluginManager::Install
      subcommand 'remove', 'Remove a Logstash plugin', LogStash::PluginManager::Remove
      subcommand 'update', 'Update a plugin', LogStash::PluginManager::Update
      subcommand 'pack', 'Package currently installed plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Pack
      subcommand 'unpack', 'Unpack packaged plugins, Deprecated: Please use prepare-offline-pack instead', LogStash::PluginManager::Unpack
      subcommand 'generate', 'Create the foundation for a new plugin', LogStash::PluginManager::Generate
      subcommand 'uninstall', 'Uninstall a plugin. Deprecated: Please use remove instead', LogStash::PluginManager::Remove
      subcommand 'prepare-offline-pack', 'Create an archive of specified plugins to use for offline installation', LogStash::PluginManager::PrepareOfflinePack
    end
  end
end
    
        # To make sure we have the maximum compatibility
    # we will ignore theses gems and they won't be included in the pack
    IGNORE_GEMS_IN_PACK = %w(
      logstash-core
      logstash-core-plugin-api
      jar-dependencies
    )
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
      def execute
    # Turn off any jar dependencies lookup when running with `--local`
    ENV['JARS_SKIP'] = 'true' if local?
    
      context '#params' do
    let(:plugin_class) do
      Class.new(LogStash::Filters::Base)  do
        config_name 'fake'
        config :password, :validate => :password
        config :bad, :validate => :string, :default => 'my default', :obsolete => 'not here'
      end
    end
    
          it 'returns true if the pipeline is a system pipeline' do
        expect(subject.system?).to be_truthy
      end
    end
    
    task :spec    => 'spec:all'
task :default => :spec