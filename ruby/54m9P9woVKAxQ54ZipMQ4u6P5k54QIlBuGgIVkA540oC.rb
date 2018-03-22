
        
            Jekyll::Commands::Build.process({'source' => 'docs'})
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
          #
      # The version constraint required to activate a given gem.
      # Usually the gem version requirement is '> 0,' because any version
      # will do. In the case of jekyll-docs, however, we require the exact
      # same version as Jekyll.
      #
      # Returns a String version constraint in a parseable form for
      # RubyGems.
      def version_constraint(gem_name)
        return '= #{Jekyll::VERSION}' if gem_name.to_s.eql?('jekyll-docs')
        '> 0'
      end
    
          private
    
        def translation_scope
      'devise.confirmations'
    end
end

    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
    # All Devise controllers are inherited from here.
class DeviseController < Devise.parent_controller.constantize
  include Devise::Controllers::ScopedViews
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
            # Remove it form the session objects so freeup
        sessions.delete(s[:session])