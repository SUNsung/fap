
        
              if @domain_block.save
        DomainBlockWorker.perform_async(@domain_block.id)
        log_action :create, @domain_block
        redirect_to admin_domain_blocks_path, notice: I18n.t('admin.domain_blocks.created_msg')
      else
        render :new
      end
    end
    
        def filtered_instances
      InstanceFilter.new(filter_params).results
    end
    
        private
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
    desc 'Install Sass as a gem. Use SUDO=1 to install with sudo.'
task :install => [:package] do
  gem  = RUBY_PLATFORM =~ /java/  ? 'jgem' : 'gem'
  sh %{#{'sudo ' if ENV['SUDO']}#{gem} install --no-ri pkg/sass-#{get_version}}
end
    
          def has_role?(role)
        roles.include? role.to_sym
      end
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
          def trusted_keys
        @trusted_keys.dup
      end