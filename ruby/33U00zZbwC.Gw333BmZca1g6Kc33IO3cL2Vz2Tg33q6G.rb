
        
        def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
            def make_accessible(hash = @config)
          hash.keys.each do |key|
            hash[key.to_sym] = hash[key]
            make_accessible(hash[key]) if hash[key].is_a?(Hash)
          end
        end
    
        def deprecation_message(message)
      Jekyll.logger.warn 'Deprecation:', message
    end
    
    def bottle_native_regex
  /(\.#{bottle_tag}\.bottle\.(\d+\.)?tar\.gz)$/o
end
    
      def initialize(formula, options)
    @formula = formula
    @formula.build = BuildOptions.new(options, formula.options)
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
            if file_is_stale || ARGV.switch?('s') && !f.installed? || bottle_file_outdated?(f, file)
          cleanup_path(file) { file.unlink }
        end
      end
    end
    
      def find_internal_commands(directory)
    directory.children.reduce([]) do |cmds, f|
      cmds << f.basename.to_s.sub(/\.(?:rb|sh)$/, '') if f.file?
      cmds
    end
  end
end

    
    gem 'rails-controller-testing'
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
          def mailer_from(mapping)
        mailer_sender(mapping, :from)
      end
    
    require 'rake/testtask'
    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
          # @param cache_location [String] see \{#cache\_location}
      def initialize(cache_location)
        @cache_location = cache_location
      end
    
      # An environment that can write to in-scope global variables, but doesn't
  # create new variables in the global scope. Useful for top-level control
  # directives.
  class SemiGlobalEnvironment < Environment
    def try_set_var(name, value)
      @vars ||= {}
      if @vars.include?(name)
        @vars[name] = value
        true
      elsif @parent
        @parent.try_set_var(name, value)
      else
        false
      end
    end
  end
end

    
        def load_compass
      begin
        require 'compass'
      rescue LoadError
        require 'rubygems'
        begin
          require 'compass'
        rescue LoadError
          puts 'ERROR: Cannot load compass.'
          exit 1
        end
      end
      Compass.add_project_configuration
      Compass.configuration.project_path ||= Dir.pwd
      @options[:for_engine][:load_paths] ||= []
      @options[:for_engine][:load_paths] += Compass.configuration.sass_load_paths
    end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
          # @see Base#watched_file?
      def watched_file?(filename)
        # Check against the root with symlinks resolved, since Listen
        # returns fully-resolved paths.
        filename =~ /\.s[ac]ss$/ && filename.start_with?(@real_root + File::SEPARATOR)
      end