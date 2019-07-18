
        
              def reset!(attrs = {})
        update_raw_data!(
          {
            asset_token: nil,
            type_of_file: nil,
            url: nil,
            original_file_name: nil
          }.merge(attrs)
        )
      end
    
          # it 'allows the creation of a new language' do
      #   version.create_languages!(['German', 'English_CA'])
      #   expect(version.name['German']).to eq('yep, that's the name')
      #   expect(version.name['English_CA']).to eq('yep, that's the name')
      # end
    end
    
            value = arguments.first
        value = yield if value.nil? && block_given?
    
            os_version = Snapshot.config[:ios_version] || Snapshot::LatestOsVersion.version(os)
    
          def self.details
        [
          'This will register an iOS device with the Developer Portal so that you can include it in your provisioning profiles.',
          'This is an optimistic action, in that it will only ever add a device to the member center. If the device has already been registered within the member center, it will be left alone in the member center.',
          'The action will connect to the Apple Developer Portal using the username you specified in your `Appfile` with `apple_id`, but you can override it using the `:username` option.'
        ].join('\n')
      end
    
        it 'can use the git_url short flag from tool options' do
      stub_commander_runner_args(['change_password', '-r', 'git@github.com:you/your_repo.git'])
    
      describe '#depends_on' do
    it 'allows specifying dependencies' do
      subject.depends_on('foo')
      expect(subject.deps.first.name).to eq('foo')
    end
    
          before do
        allow(subject).to receive(:possible_javas).and_return([java])
      end
    
          def self.from_symbol(sym)
        str = SYMBOLS.fetch(sym) do
          raise ArgumentError, 'unknown version #{sym.inspect}'
        end
        new(str)
      end
    
          if create && !subdir.directory?
        odebug 'Creating metadata subdirectory #{subdir}.'
        subdir.mkpath
      end
    
              @registry[key_for(type, name)] = PluginSpecification.new(type, name, klazz.ruby_class.java_class)
        else
          @registry[key_for(type, name)] = PluginSpecification.new(type, name, klass.javaClass)
        end
      elsif !exists?(type, name)
        specification_klass = type == :universal ? UniversalPluginSpecification : PluginSpecification
        @registry[key_for(type, name)] = specification_klass.new(type, name, klass)
      else
        logger.debug('Ignoring, plugin already added to the registry', :name => name, :type => type, :klass => klass)
      end
    end
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end
    
        def gem_config_path(gem_name, relative_config_path)
      spec = Gem::Specification.find_by_name(gem_name)
      File.join(spec.gem_dir, relative_config_path)
    rescue Gem::LoadError => e
      raise Gem::LoadError,
            'Unable to find gem #{gem_name}; is the gem installed? #{e}'
    end
  end
end

    
    module RuboCop
  module Cop
    # Monkey-patch Cop for tests to provide easy access to messages and
    # highlights.
    class Cop
      def messages
        offenses.sort.map(&:message)
      end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end