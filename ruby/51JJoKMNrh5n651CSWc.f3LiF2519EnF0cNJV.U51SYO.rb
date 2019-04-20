
        
                private
    
        class WithZeroArityProc < Base
      layout proc { 'overwrite' }
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
              user = Representation::User.from_api_response(note.user) if note.user
          hash = {
            noteable_type: 'MergeRequest',
            noteable_id: matches[:iid].to_i,
            file_path: note.path,
            commit_id: note.commit_id,
            diff_hunk: note.diff_hunk,
            author: user,
            note: note.body,
            created_at: note.created_at,
            updated_at: note.updated_at,
            github_id: note.id
          }
    
        # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
            @id               = id
        @local_data_path  = raw['local_data_path']
        @name             = raw['name']
        @provider         = raw['provider']
        @state            = raw['state']
        @vagrantfile_name = raw['vagrantfile_name']
        @vagrantfile_path = raw['vagrantfile_path']
        # TODO(mitchellh): parse into a proper datetime
        @updated_at       = raw['updated_at']
        @extra_data       = raw['extra_data'] || {}
    
              # Default opts to a blank optionparser if none is given
          opts ||= OptionParser.new
    
            # Merge another configuration object into this one. This assumes that
        # the other object is the same class as this one. This should not
        # mutate this object, but instead should return a new, merged object.
        #
        # The default implementation will simply iterate over the instance
        # variables and merge them together, with this object overriding
        # any conflicting instance variables of the older object. Instance
        # variables starting with '__' (double underscores) will be ignored.
        # This lets you set some sort of instance-specific state on your
        # configuration keys without them being merged together later.
        #
        # @param [Object] other The other configuration object to merge from,
        #   this must be the same type of object as this one.
        # @return [Object] The merged object.
        def merge(other)
          result = self.class.new
    
            # Allows setting options from a hash. By default this simply calls
        # the `#{key}=` method on the config class with the value, which is
        # the expected behavior most of the time.
        #
        # This is expected to mutate itself.
        #
        # @param [Hash] options A hash of options to set on this configuration
        #   key.
        def set_options(options)
          options.each do |key, value|
            send('#{key}=', value)
          end
        end
    
        failure_message do |(file, stderr)|
      'expected that #{file} is a valid Bash file:\n#{stderr}'
    end
  end
    
          it 'gives dir where fish completions have been installed' do
        (path/'share/fish/vendor_completions.d').mkpath
        expect(caveats).to include(HOMEBREW_PREFIX/'share/fish/vendor_completions.d')
      end
    end
  end
end

    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
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
    
          def create_worker_test
        template_file = File.join(
            'test/workers',
            class_path,
            '#{file_name}_worker_test.rb'
        )
        template 'worker_test.rb.erb', template_file
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
    
          Sidekiq.logger.debug { 'Re-queueing terminated jobs' }
      jobs_to_requeue = {}
      inprogress.each do |unit_of_work|
        jobs_to_requeue[unit_of_work.queue_name] ||= []
        jobs_to_requeue[unit_of_work.queue_name] << unit_of_work.job
      end