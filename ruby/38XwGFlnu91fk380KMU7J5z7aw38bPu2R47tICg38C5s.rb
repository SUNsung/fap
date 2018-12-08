
        
          context 'with a user' do
    let(:user) { Fabricate(:user) }
    
            # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{staff.id}'
      end
    end
  end
end

    
      context 'clearing unsupported fields of agents' do
    before do
      visit new_agent_path
    end
    
              expect(weather_agent_diff.schedule.updated).to eq('6pm')
          expect(weather_agent_diff.keep_events_for.current).to eq(45.days)
          expect(weather_agent_diff.keep_events_for.updated).to eq(2.days.to_s)
          expect(weather_agent_diff.disabled.updated).to eq('true')
          expect(weather_agent_diff.options.updated).to eq(weather_agent_options.merge('api_key' => 'foo'))
        end
    
          it 'sets expires_at on created events' do
        event = agents(:jane_weather_agent).create_event :payload => { 'hi' => 'there' }
        expect(event.expires_at.to_i).to be_within(5).of(agents(:jane_weather_agent).keep_events_for.seconds.from_now.to_i)
      end
    end
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
          def fetch_internal_urls
        result = []
        build_pages do |page|
          result << page[:subpath] if page[:entries].present?
        end
        result
      end
    
            css('code code').each do |node|
          node.before(node.children).remove
        end
    
            css('.toplang', '#quickview', '.top').remove
    
          # Initializes an entry.
      #
      # The parameter given should be nil if this is being created
      # publicly.
      def initialize(id=nil, raw=nil)
        @extra_data = {}
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
            # Mounts a shared folder.
        #
        # This method should create, mount, and properly set permissions
        # on the shared folder. This method should also properly
        # adhere to any configuration values such as `shared_folder_uid`
        # on `config.vm`.
        #
        # @param [String] name The name of the shared folder.
        # @param [String] guestpath The path on the machine which the user
        #   wants the folder mounted.
        # @param [Hash] options Additional options for the shared folder
        #   which can be honored.
        def mount_shared_folder(name, guestpath, options)
          raise BaseError, _key: :unsupported_shared_folder
        end
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
              # Register a new communicator class only if a name was given.
          data[:communicator].register(name.to_sym, &block) if name != UNSET_VALUE
    
        def __internal_state
      {
        items: @items,
        results_cache: @results_cache
      }
    end
  end
end

    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
        def configure_scm
      Capistrano::Configuration::SCMResolver.new.resolve
    end
    
            if Rake::Task.task_defined?('deploy:set_current_revision')
          before 'deploy:set_current_revision',
                 '#{scm_name}:set_current_revision'
        end
      end
      # rubocop:enable Style/GuardClause
    
            def set(key, value)
          pval = @properties[key]
          if pval.is_a?(Hash) && value.is_a?(Hash)
            pval.merge!(value)
          elsif pval.is_a?(Set) && value.is_a?(Set)
            pval.merge(value)
          elsif pval.is_a?(Array) && value.is_a?(Array)
            pval.concat value
          else
            @properties[key] = value
          end
        end
    
            names.inject(Object) do |constant, name|
          constant.const_defined?(name) ? constant.const_get(name) : constant.const_missing(name)
        end
      rescue NameError
        super
      end
    end
  end
end
    
          def prepend(klass, *args)
        remove(klass) if exists?(klass)
        entries.insert(0, Entry.new(klass, *args))
      end
    
        def fire_event(event, options={})
      reverse = options[:reverse]
      reraise = options[:reraise]
    
        def delete(path, &block)
      route(DELETE, path, &block)
    end