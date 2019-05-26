
        
                # This returns all the registered guests.
        #
        # @return [Hash]
        def guests
          result = {}
    
              @registered.each do |plugin|
            result += plugin.components.action_hooks[Plugin::ALL_ACTIONS]
            result += plugin.components.action_hooks[hook_name]
          end
    
    namespace :test do
  desc 'Measures test coverage'
  task :coverage do
    rm_f 'coverage'
    ENV['COVERAGE'] = '1'
    Rake::Task['test'].invoke
  end
end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
        def frame_class(frame)
      if frame.filename =~ %r{lib/sinatra.*\.rb}
        'framework'
      elsif (defined?(Gem) && frame.filename.include?(Gem.dir)) ||
            frame.filename =~ %r{/bin/(\w+)\z}
        'system'
      else
        'app'
      end
    end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS and others
    # Supported browsers:: Firefox 23+, Safari 7+, Chrome 25+, Opera 15+
    #
    # Description:: Content Security Policy, a mechanism web applications
    #               can use to mitigate a broad class of content injection
    #               vulnerabilities, such as cross-site scripting (XSS).
    #               Content Security Policy is a declarative policy that lets
    #               the authors (or server administrators) of a web application
    #               inform the client about the sources from which the
    #               application expects to load resources.
    #
    # More info::   W3C CSP Level 1 : https://www.w3.org/TR/CSP1/ (deprecated)
    #               W3C CSP Level 2 : https://www.w3.org/TR/CSP2/ (current)
    #               W3C CSP Level 3 : https://www.w3.org/TR/CSP3/ (draft)
    #               https://developer.mozilla.org/en-US/docs/Web/Security/CSP
    #               http://caniuse.com/#search=ContentSecurityPolicy
    #               http://content-security-policy.com/
    #               https://securityheaders.io
    #               https://scotthelme.co.uk/csp-cheat-sheet/
    #               http://www.html5rocks.com/en/tutorials/security/content-security-policy/
    #
    # Sets the 'Content-Security-Policy[-Report-Only]' header.
    #
    # Options: ContentSecurityPolicy configuration is a complex topic with
    #          several levels of support that has evolved over time.
    #          See the W3C documentation and the links in the more info
    #          section for CSP usage examples and best practices. The
    #          CSP3 directives in the 'NO_ARG_DIRECTIVES' constant need to be
    #          presented in the options hash with a boolean 'true' in order
    #          to be used in a policy.
    #
    class ContentSecurityPolicy < Base
      default_options default_src: :none, script_src: ''self'',
                      img_src: ''self'', style_src: ''self'',
                      connect_src: ''self'', report_only: false
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
          run DummyApp
    end
    
      # Disable serving static files from the `/public` folder by default since
  # Apache or NGINX already handles this.
  config.public_file_server.enabled = ENV['RAILS_SERVE_STATIC_FILES'].present?
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    module RailsCommandHelpers
  def framework_version?(version_string)
    framework_version =~ /^#{version_string}/
  end
    
      def migration_version
    if Rails.version.start_with? '5'
      '[#{Rails::VERSION::MAJOR}.#{Rails::VERSION::MINOR}]'
    end
  end
end

    
      # Provides configurability to Paperclip. The options available are:
  # * whiny: Will raise an error if Paperclip cannot process thumbnails of
  #   an uploaded image. Defaults to true.
  # * log: Logs progress to the Rails log. Uses ActiveRecord's logger, so honors
  #   log levels, etc. Defaults to true.
  # * command_path: Defines the path at which to find the command line
  #   programs if they are not visible to Rails the system's search path. Defaults to
  #   nil, which uses the first executable found in the user's search path.
  # * use_exif_orientation: Whether to inspect EXIF data to determine an
  #   image's orientation. Defaults to true.
  def self.options
    @options ||= {
      command_path: nil,
      content_type_mappings: {},
      log: true,
      log_command: true,
      read_timeout: nil,
      swallow_stderr: true,
      use_exif_orientation: true,
      whiny: true,
      is_windows: Gem.win_platform?
    }
  end
    
        # Returns the timestamp as defined by the <attachment>_updated_at field
    # in the server default time zone unless :use_global_time_zone is set
    # to false.  Note that a Rails.config.time_zone change will still
    # invalidate any path or URL that uses :timestamp.  For a
    # time_zone-agnostic timestamp, use #updated_at.
    def timestamp attachment, style_name
      attachment.instance_read(:updated_at).in_time_zone(attachment.time_zone).to_s
    end