
        
        module Pod
  class Installer
    class Analyzer
      # Collects all {PodVariant}.
      class PodVariantSet
        # @return [Array<PodVariant>] the different variants within this set.
        #
        attr_reader :variants
    
          def ==(other)
        if other.class == self.class
          other.source_path == @source_path && other.dsym_path == @dsym_path && other.bcsymbolmap_paths == @bcsymbolmap_paths
        else
          false
        end
      end
    
            if deprecated_pods.any?
          UI.section 'The following pods are deprecated:' do
            deprecated_pods.each do |spec|
              if spec.deprecated_in_favor_of
                UI.puts '- #{spec.name}' \
                  ' (in favor of #{spec.deprecated_in_favor_of})'
              else
                UI.puts '- #{spec.name}'
              end
            end
          end
        end
      end
    
            def prepare(sandbox, project, pod_targets, build_configurations, platforms, podfile_path)
          UI.message '- Creating #{project.project_name} project' do
            build_configurations.each do |name, type|
              project.add_build_configuration(name, type)
            end
            # Reset symroot just in case the user has added a new build configuration other than 'Debug' or 'Release'.
            project.symroot = Pod::Project::LEGACY_BUILD_ROOT
            pod_names = pod_targets.map(&:pod_name).uniq
            pod_names.each do |pod_name|
              local = sandbox.local?(pod_name)
              path = sandbox.pod_dir(pod_name)
              was_absolute = sandbox.local_path_was_absolute?(pod_name)
              project.add_pod_group(pod_name, path, local, was_absolute)
            end
            if podfile_path
              project.add_podfile(podfile_path)
            end
            osx_deployment_target = platforms.select { |p| p.name == :osx }.map(&:deployment_target).min
            ios_deployment_target = platforms.select { |p| p.name == :ios }.map(&:deployment_target).min
            watchos_deployment_target = platforms.select { |p| p.name == :watchos }.map(&:deployment_target).min
            tvos_deployment_target = platforms.select { |p| p.name == :tvos }.map(&:deployment_target).min
            project.build_configurations.each do |build_configuration|
              build_configuration.build_settings['MACOSX_DEPLOYMENT_TARGET'] = osx_deployment_target.to_s if osx_deployment_target
              build_configuration.build_settings['IPHONEOS_DEPLOYMENT_TARGET'] = ios_deployment_target.to_s if ios_deployment_target
              build_configuration.build_settings['WATCHOS_DEPLOYMENT_TARGET'] = watchos_deployment_target.to_s if watchos_deployment_target
              build_configuration.build_settings['TVOS_DEPLOYMENT_TARGET'] = tvos_deployment_target.to_s if tvos_deployment_target
              build_configuration.build_settings['STRIP_INSTALLED_PRODUCT'] = 'NO'
              build_configuration.build_settings['CLANG_ENABLE_OBJC_ARC'] = 'YES'
            end
          end
        end
      end
    end
  end
end

    
          # @return [Array<Pathname>] The paths of the dynamic binary artifacts
      #         that come shipped with the Pod.
      #
      def vendored_dynamic_artifacts
        vendored_dynamic_libraries + vendored_dynamic_frameworks
      end
    
          # In verbose mode it shows the sections and the contents.
      # In normal mode it just prints the title.
      #
      # @return [void]
      #
      def titled_section(title, options = {})
        relative_indentation = options[:relative_indentation] || 0
        verbose_prefix = options[:verbose_prefix] || ''
        if config.verbose?
          title(title, verbose_prefix, relative_indentation)
        else
          puts title
        end
    
        def filter(list)
      setup_filters if @filters.nil?
      @filters.reduce(list) { |l, f| f.filter l }
    end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
          def installed_gem_version(gem_name)
        Gem.loaded_specs[gem_name].version
      end
    
        it 'logs the exception to Sidekiq.logger' do
      Component.new.invoke_exception(:a => 1)
      @str_logger.rewind
      log = @str_logger.readlines
      assert_match(/'a':1/, log[0], 'didn't include the context')
      assert_match(/Something didn't work!/, log[1], 'didn't include the exception message')
      assert_match(/test\/test_exception_handler.rb/, log[2], 'didn't include the backtrace')
    end
    
    end

    
      class CustomMiddleware
    def initialize(name, recorder)
      @name = name
      @recorder = recorder
    end
    
        it 'calculates an average poll interval based on the number of known Sidekiq processes' do
      with_sidekiq_option(:average_scheduled_poll_interval, 10) do
        3.times do |i|
          Sidekiq.redis do |conn|
            conn.sadd('processes', 'process-#{i}')
            conn.hset('process-#{i}', 'info', nil)
          end
        end
    
          def perform
        self.class.count += 1 if foo == :bar
      end
    end