
        
                # This method is automatically called when the system is available (when
        # Vagrant can successfully SSH into the machine) to give the system a chance
        # to determine the distro and return a distro-specific system.
        #
        # If this method returns nil, then this instance is assumed to be
        # the most specific guest implementation.
        def distro_dispatch
        end
    
              # Register a new provider class only if a name was given
          data[:providers].register(name.to_sym, &block) if name != UNSET_VALUE
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
              # Persist through the set of invalid methods
          this_invalid  = @__invalid_methods || Set.new
          other_invalid = other.instance_variable_get(:'@__invalid_methods') || Set.new
          result.instance_variable_set(:'@__invalid_methods', this_invalid + other_invalid)
    
        # Return the number of elements in this registry.
    #
    # @return [Integer]
    def length
      @items.keys.length
    end
    alias_method :size, :length
    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
        def execute
      raise PluginManager::FileNotFoundError, 'Can't file local file #{local_file}' unless ::File.exist?(local_file)
      raise PluginManager::InvalidPackError, 'Invalid format, the pack must be in zip format' unless valid_format?(local_file)
    
      # create list of plugins to update
  def plugins_to_update(previous_gem_specs_map)
    if update_all?
      previous_gem_specs_map.values.map{|spec| spec.name}
    else
      # If the plugins isn't available in the gemspec or in 
      # the gemfile defined with a local path, we assume the plugins is not
      # installed.
      not_installed = plugins_arg.select{|plugin| !previous_gem_specs_map.has_key?(plugin.downcase) && !gemfile.find(plugin) }
      signal_error('Plugin #{not_installed.join(', ')} is not installed so it cannot be updated, aborting') unless not_installed.empty?
      plugins_arg
    end
  end
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
          it 'list the plugins with their versions' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose')
        result.stdout.split('\n').each do |plugin|
          expect(plugin).to match(/^logstash-\w+-\w+\s\(\d+\.\d+.\d+(.\w+)?\)/)
        end
      end
    end
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) { ['[', '1', ']'] }
  end
    
            pairs.map(&:key).each do |key|
          yield key
        end
    
    desc 'Default deploy task'
task :deploy do
  # Check if preview posts exist, which should not be published
  if File.exists?('.preview-mode')
    puts '## Found posts in preview mode, regenerating files ...'
    File.delete('.preview-mode')
    Rake::Task[:generate].execute
  end
    
          super
    end
    
      node[:applications].each do |app, data|
    template '/etc/monit.d/sidekiq_#{app}.monitrc' do 
      owner 'root' 
      group 'root' 
      mode 0644 
      source 'monitrc.conf.erb' 
      variables({ 
        :num_workers => worker_count,
        :app_name => app, 
        :rails_env => node[:environment][:framework_env] 
      }) 
    end
    
          private
    
          def clear_for(queue, klass)
        jobs_by_queue[queue].clear
        jobs_by_worker[klass].clear
      end