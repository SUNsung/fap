
        
            def push(*names)
      @filters.push *filter_const(names)
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
        def mime_type
      headers['Content-Type'] || 'text/plain'
    end
    
            css('.row-margin', '.ng-cloak').each do |node|
          node.before(node.children).remove
        end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
      private
    
    module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
        end
      end
    
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
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        def default_path_names(options)
      @path_names = Hash.new { |h,k| h[k] = k.to_s }
      @path_names[:registration] = ''
      @path_names.merge!(options[:path_names]) if options[:path_names]
    end
    
            # Generate a token checking if one does not already exist in the database.
        def remember_token #:nodoc:
          loop do
            token = Devise.friendly_token
            break token unless to_adapter.find_first({ remember_token: token })
          end
        end
    
          def timeout_in
        self.class.timeout_in
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
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
        puts('Unpacking #{package_file}')
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
    MiniTest::Reporters.use!
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end
    
        module PsychAutoload
      def resolve_class(klass_name)
        return nil if !klass_name || klass_name.empty?
        # constantize
        names = klass_name.split('::')
        names.shift if names.empty? || names.first.empty?
    
        UnitOfWork = Struct.new(:queue, :job) do
      def acknowledge
        # nothing to do
      end
    
          def constantize(str)
        names = str.split('::')
        names.shift if names.empty? || names.first.empty?