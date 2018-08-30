
        
                  method_tag = \
            case method
            when 'get'
              html_options['method'] = 'get'
              ''
            when 'post', ''
              html_options['method'] = 'post'
              token_tag(authenticity_token, form_options: {
                action: html_options['action'],
                method: 'post'
              })
            else
              html_options['method'] = 'post'
              method_tag(method) + token_tag(authenticity_token, form_options: {
                action: html_options['action'],
                method: method
              })
            end
    
            def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
        def log_rendering_start(payload)
      info do
        message = '  Rendering #{from_rails_root(payload[:identifier])}'.dup
        message << ' within #{from_rails_root(payload[:layout])}' if payload[:layout]
        message
      end
    end
  end
end
    
          # Calculate the details key. Remove the handlers from calculation to improve performance
      # since the user cannot modify it explicitly.
      def details_key #:nodoc:
        @details_key ||= DetailsKey.get(@details) if @cache
      end
    
      it 'expands shell variables when given a single string argument' do
    lambda { @object.system('echo #{@shell_var}') }.should output_to_fd('foo\n')
  end
    
        after :each do
      @tmp_file.close
      rm_r @tmp_file
    end
    
      it 'accepts a proc argument instead of a block' do
    captured = nil
    
        def add_warning(message)
      warnings << message
    end
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
        def shared_mixins
      @shared_mixins ||= begin
        log_status '  Reading shared mixins from mixins.less'
        CLASSES_TO_MIXINS + read_mixins(read_files('less', bootstrap_less_files.grep(/mixins\//)).values.join('\n'),
                                        nested: NESTED_MIXINS)
      end
    end
    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
            def run
          if @pod_name.nil?
            # Note: at that point, @wipe_all is always true (thanks to `validate!`)
            # Remove all
            clear_cache
          else
            # Remove only cache for this pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            elsif cache_descriptors.count > 1 && !@wipe_all
              # Ask which to remove
              choices = cache_descriptors.map { |c| '#{@pod_name} v#{c[:version]} (#{pod_type(c)})' }
              index = UI.choose_from_array(choices, 'Which pod cache do you want to remove?')
              remove_caches([cache_descriptors[index]])
            else
              # Remove all found cache of this pod
              remove_caches(cache_descriptors)
            end
          end
        end