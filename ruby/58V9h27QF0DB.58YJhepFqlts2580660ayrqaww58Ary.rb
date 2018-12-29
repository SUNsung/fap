
        
                    # Call the state method so that we update our index state. Don't
            # worry about exceptions here, since we just care about updating
            # the cache.
            begin
              # Called for side effects
              machine.state
            rescue Errors::VagrantError
            end
          end
        end
    
            # This contains all the configuration plugins by scope.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :configs
    
              nil
        end
    
        # Register a key with a lazy-loaded value.
    #
    # If a key with the given name already exists, it is overwritten.
    def register(key, &block)
      raise ArgumentError, 'block required' if !block_given?
      @items[key] = block
    end
    
        it 'ignores SHELL env var and always uses `sh`' do
      ENV['SHELL'] = '/bin/fakeshell'
      lambda { @object.system('echo $0') }.should output_to_fd('sh\n')
    end
  end
    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end
    
        lambda {
      catch :blah do
        throw :blah, :return_value, 2, 3, 4, 5
      end
    }.should raise_error(ArgumentError)
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
        def top_level_tasks
      if tasks_without_stage_dependency.include?(@top_level_tasks.first)
        @top_level_tasks
      else
        @top_level_tasks.unshift(ensure_stage.to_s)
      end
    end
    
        def scm_plugin_installed?
      installer.scm_installed?
    end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end