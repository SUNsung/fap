
        
                  saved = if pending_reconfirmation?
            skip_reconfirmation!
            self.email = unconfirmed_email
            self.unconfirmed_email = nil
    
      # Get message for given
  def find_message(kind, options = {})
    options[:scope] ||= translation_scope
    options[:default] = Array(options[:default]).unshift(kind.to_sym)
    options[:resource_name] = resource_name
    options = devise_i18n_options(options)
    I18n.t('#{options[:resource_name]}.#{kind}', options)
  end
    
      module ClassMethods
    def load_types_in(module_name, my_name = module_name.singularize)
      const_set(:MODULE_NAME, module_name)
      const_set(:BASE_CLASS_NAME, my_name)
      const_set(:TYPES, Dir[Rails.root.join('app', 'models', module_name.underscore, '*.rb')].map { |path| module_name + '::' + File.basename(path, '.rb').camelize })
    end
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
          def values_at(*indices)
        indices.collect { |key| self[convert_key(key)] }
      end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
        def replace_vars(less)
      less = less.dup
      # skip header comment
      less =~ %r(\A/\*(.*?)\*/)m
      from           = $~ ? $~.to_s.length : 0
      less[from..-1] = less[from..-1].
          gsub(/(?!@mixin|@media|@page|@keyframes|@font-face|@-\w)@/, '$').
          # variables that would be ignored by gsub above: e.g. @page-header-border-color
          gsub(/@(page[\w-]+)/, '$\1')
      less
    end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
    namespace :bower do
    
          def core_gem_names
        %w(capistrano airbrussh rake sshkit net-ssh) & Gem.loaded_specs.keys
      end
    
      # Implemented by subclasses to provide default values for settings needed by
  # this plugin. Typically done using the `set_if_empty` Capistrano DSL method.
  #
  # Example:
  #
  #   def set_defaults
  #     set_if_empty :my_plugin_option, true
  #   end
  #
  def set_defaults; end
    
      desc 'Published'
  task :published do
  end
    
      it 'overrides the rake method, but still prints the rake version' do
    out, _err = capture_io do
      flags '--version', '-V'
    end
    expect(out).to match(/\bCapistrano Version\b/)
    expect(out).to match(/\b#{Capistrano::VERSION}\b/)
    expect(out).to match(/\bRake Version\b/)
    expect(out).to match(/\b#{Rake::VERSION}\b/)
  end