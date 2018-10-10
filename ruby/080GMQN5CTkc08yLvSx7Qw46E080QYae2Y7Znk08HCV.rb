
        
        def custom_release_header_anchors(markdown)
  header_regexp = %r!^(\d{1,2})\.(\d{1,2})\.(\d{1,2}) \/ \d{4}-\d{2}-\d{2}!
  section_regexp = %r!^### \w+ \w+$!
  markdown.split(%r!^##\s!).map do |release_notes|
    _, major, minor, patch = *release_notes.match(header_regexp)
    release_notes
      .gsub(header_regexp, '\\0\n{: #v\\1-\\2-\\3}')
      .gsub(section_regexp) { |section| '#{section}\n{: ##{slugify(section)}-v#{major}-#{minor}-#{patch}}' }
  end.join('\n## ')
end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
            # This returns all the registered configuration classes.
        #
        # @return [Hash]
        def config
          result = {}
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
            # This returns all the config classes for the various provisioners.
        #
        # @return [Registry]
        def provisioner_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:provisioner])
            end
          end
        end
    
              # Register a new provisioner class only if a name was given
          data[:provisioners].register(name.to_sym, &block) if name != UNSET_VALUE
    
        def name
      'cap'
    end
    
          private
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    module Jekyll
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
        def vendor_path(path)
      return ::File.join(LOGSTASH_HOME, 'vendor', path)
    end
    
        def validate_plugins!
      @plugins_to_package.each do |plugin_name|
        if INVALID_PLUGINS_TO_EXPLICIT_PACK.any? { |invalid_name| plugin_name =~ invalid_name }
          raise UnpackablePluginError, 'Cannot explicitly pack `#{plugin_name}` for offline installation'
        end
      end
    end
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.windows?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
          # Checks whether this `hash` uses a mix of hash rocket and colon
      # delimiters for its pairs.
      #
      # @return [Boolean] whether the `hash` uses mixed delimiters
      def mixed_delimiters?
        pairs.map(&:delimiter).uniq.size > 1
      end