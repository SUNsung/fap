
        
            def skip_up_to_date?(screenshot)
      if !screenshot.outdated? && Frameit.config[:resume]
        UI.message('Skipping framing of screenshot #{screenshot.path} because its framed file seems up-to-date.')
        return true
      end
      false
    end
    
              disabled_services_object = self.service_object
          disabled_services.each do |k, v|
            disabled_services_object.__hash__[k] = true
            disabled_services_object.send('#{k}=', v)
          end
          Produce::Service.disable(disabled_services_object, nil) unless disabled_services.empty?
        end
      end
    
            UI.success('Successfully exported CSV to #{file}')
      end
    end
    
              @client = Faraday.new(hostname, options) do |c|
            c.response(:json, content_type: /\bjson$/)
            c.response(:xml, content_type: /\bxml$/)
            c.response(:plist, content_type: /\bplist$/)
            c.use(FaradayMiddleware::RelsMiddleware)
            c.adapter(Faraday.default_adapter)
            c.headers['Authorization'] = 'Bearer #{token.text}'
    
          #
      # Helpers
      #
    
          #
      # Helpers
      #
    
          module DeviceClass
        APPLE_WATCH = 'APPLE_WATCH'
        IPAD = 'IPAD'
        IPHONE = 'IPHONE'
        IPOD = 'IPOD'
        APPLE_TV = 'APPLE_TV'
        MAC = 'MAC'
      end
    
            # @return [Array<String>] The list of the UUIDs of the
        #         user targets integrated by this umbrella
        #         target.  They can be used to find the
        #         targets opening the project They can be used
        #         to find the targets opening the project with
        #         Xcodeproj.
        #
        def user_target_uuids
          user_targets.map(&:uuid)
        end
      end
    end
  end
end

    
                spec_names = specs.map do |spec|
              spec.root? ? '.root' : spec.name.split('/')[1..-1].join('_')
            end.sort
            if spec_names.empty?
              omit_common_specs ? '.common' : nil
            else
              if omit_common_specs
                spec_names.unshift('.common')
              elsif omit_default_specs
                spec_names.unshift('.default')
              end
              spec_names.reduce('') do |acc, name|
                '#{acc}#{acc.empty? || name[0] == '.' ? '' : '-'}#{name}'
              end
            end
          end
        end
    
        it 'escapes double quotes properly for module map contents' do
      path = temporary_directory + 'BananaLib.modulemap'
      @pod_target.stubs(:umbrella_header_path).returns(Pathname.new('BananaLibWith'Quotes'-umbrella.h'))
      @pod_target.stubs(:build_type => Target::BuildType.dynamic_framework)
      gen = Generator::ModuleMap.new(@pod_target)
      gen.save_as(path)
      path.read.should == <<-EOS.strip_heredoc
        framework module BananaLib {
          umbrella header 'BananaLibWith\\'Quotes\\'-umbrella.h'
    }
    
            it 'can be used as hash keys' do
          k0 = PodVariant.new(@specs, [], [], @platform, false)
          v0 = stub('Value at index 0')
          k1 = PodVariant.new(@specs, [], [], @platform, true)
          v1 = stub('Value at index 1')
          hash = { k0 => v0, k1 => v1 }
          hash[k0].should == v0
          hash[k1].should == v1
        end
    
              it 'does not require a host target, if there is no user project (manual integration)' do
            @target.stubs(:user_project).returns(nil)
            @target.stubs(:user_target_uuids).returns([])
            @target.requires_host_target?.should == false
          end
    
        def initialize
      @mutex = Mutex.new
      # We need a threadsafe class here because we may perform
      # get/set operations concurrently despite the fact we don't use
      # the special atomic methods. That may not be apparent from this file,
      # but it is the case that we can call lookups from multiple threads,
      # when multiple pipelines are in play, and that a lookup may modify the registry.
      @registry = java.util.concurrent.ConcurrentHashMap.new
      @java_plugins = java.util.concurrent.ConcurrentHashMap.new
      @hooks = HooksRegistry.new
    end
    
    module LogStash
  module PluginManager
  end
end
    
        desc 'Halt all VM's involved in the acceptance test round'
    task :halt, :platform do |t, args|
      config   = PlatformConfig.new
      experimental = (ENV['LS_QA_EXPERIMENTAL_OS'].to_s.downcase || 'false') == 'true'
      machines = config.select_names_for(args[:platform], {'experimental' => experimental})
    
              it 'successfully install the plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest')
          end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
              found_code = http_codes.find do |http_code|
            (http_code[0].to_i == env[Grape::Env::API_ENDPOINT].status) && http_code[2].respond_to?(:represent)
          end if env[Grape::Env::API_ENDPOINT].request