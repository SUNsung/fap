
        
              # Sets a cache key to the given value.
      #
      # key - The cache key to write.
      # value - The value to set.
      # timeout - The time after which the cache key should expire.
      def self.write(raw_key, value, timeout: TIMEOUT)
        key = cache_key_for(raw_key)
    
            def collection_method
          :pull_requests_comments
        end
    
            def importer_class
          NoteImporter
        end
    
            # We inject the page number here to make sure that all importers always
        # start where they left off. Simply starting over wouldn't work for
        # repositories with a lot of data (e.g. tens of thousands of comments).
        options = collection_options.merge(page: page_counter.current)
    
        def justify(str)
      return str unless terminal_width
      str = str.dup
    
            css('h1[class]').remove_attr('class')
        css('table[class]').remove_attr('class')
        css('table[width]').remove_attr('width')
        css('tr[style]').remove_attr('style')
    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          # Sign in a user that already was authenticated. This helper is useful for logging
      # users in after sign up. All options given to sign_in is passed forward
      # to the set_user method in warden.
      # If you are using a custom warden strategy and the timeoutable module, you have to
      # set `env['devise.skip_timeout'] = true` in the request to use this method, like we do
      # in the sessions controller: https://github.com/plataformatec/devise/blob/master/app/controllers/devise/sessions_controller.rb#L7
      #
      # Examples:
      #
      #   sign_in :user, @user                      # sign_in(scope, resource)
      #   sign_in @user                             # sign_in(resource)
      #   sign_in @user, event: :authentication     # sign_in(resource, options)
      #   sign_in @user, store: false               # sign_in(resource, options)
      #
      def sign_in(resource_or_scope, *args)
        options  = args.extract_options!
        scope    = Devise::Mapping.find_scope!(resource_or_scope)
        resource = args.last || resource_or_scope
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        def fullpath
      '/#{@path_prefix}/#{@path}'.squeeze('/')
    end
    
          def extend_remember_period
        self.class.extend_remember_period
      end
    
    output = File.new(OUTPUT_FILENAME, 'wb')
output.write(xml.target!)
output.close
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Then(/^file symlinks are created in the new release$/) do
  TestApp.linked_files.each do |file|
    run_vagrant_command(test_symlink_exists(TestApp.current_path.join(file)))
  end
end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
        def backend
      @backend ||= SSHKit
    end
    
          def call
        ask_question
        value_or_default
      end
    
          def self.[](host)
        host.is_a?(Server) ? host : new(host)
      end
    
          def fetch_for(key, default, &block)
        block ? values.fetch(key, &block) : values.fetch(key, default)
      end