
        
            find_union(segments, Group).order_id_desc
  end
    
      def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
        @table_sort_info = {
      order: { attribute.to_sym => direction.to_sym },
      attribute: attribute,
      direction: direction
    }
  end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      protected
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
          attr_reader :scope_name, :resource
    
      if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
      # TODO: raise SAFE level (0) to 4 if possible.
  def generate
    ERB.new(PROFILE_ERB_TEMPLATE, 0, '>').result(binding)
  end
end
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
    #{stack}
#{executable_path}
### Plugins
    
            # Clones the template from the remote in the working directory using
        # the name of the Pod.
        #
        # @return [void]
        #
        def clone_template
          UI.section('Cloning `#{template_repo_url}` into `#{@name}`.') do
            git! ['clone', template_repo_url, @name]
          end
        end
    
            def <<(value)
          values << value
        end
    
          def stages
        names = Dir[stage_definitions].map { |f| File.basename(f, '.rb') }
        assert_valid_stage_names(names)
        names
      end
    
      desc 'Reverted'
  task :reverted do
  end
    
        describe 'when defining role with reserved name' do
      it 'fails with ArgumentError' do
        expect do
          dsl.role :all, %w{example1.com}
        end.to raise_error(ArgumentError, 'all reserved name for role. Please choose another name')
      end
    end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end