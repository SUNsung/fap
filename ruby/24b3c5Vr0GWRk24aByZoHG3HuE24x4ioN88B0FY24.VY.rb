
        
        map = {}
dups = []
    
    BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
          if keys.present?
        @permitted[action] ||= @auth_keys.dup
        @permitted[action].concat(keys)
      end
    
          def initialize(*args, &block)
        @bypass_confirmation_postpone = false
        @skip_reconfirmation_in_callback = false
        @reconfirmation_required = false
        @skip_confirmation_notification = false
        @raw_confirmation_token = nil
        super
      end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
          html_filters.push 'coffeescript/entries', 'coffeescript/clean_html', 'title'
    end
    
          html_filters.push 'd3/clean_html', 'd3/entries_v4'
    
        def initial_urls
      [ 'https://hexdocs.pm/elixir/#{self.class.release}/api-reference.html',
        'https://hexdocs.pm/eex/#{self.class.release}/EEx.html',
        'https://hexdocs.pm/ex_unit/#{self.class.release}/ExUnit.html',
        'https://hexdocs.pm/iex/#{self.class.release}/IEx.html',
        'https://hexdocs.pm/logger/#{self.class.release}/Logger.html',
        'https://hexdocs.pm/mix/#{self.class.release}/Mix.html',
        'https://elixir-lang.org/getting-started/introduction.html' ]
    end
    
        version 'Flash' do
      self.base_url = 'https://api.haxe.org/flash/'
    end
    
        def inheritable_copy
      self.class.new @filters
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def contains?(url, options = nil)
      !!subpath_to(url, options)
    end
    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
        existence_maps = grouped_codes.map { |c| c.map { |cc| [cc, File.exist?(Rails.root.join('public', 'emoji', codepoints_to_filename(cc) + '.svg'))] }.to_h }
    map = {}
    
          expect_updated_sign_in_at(user)
    end
    
    # This bin wrapper runs the `pod` command in a OS X sandbox. The reason for this
# is to ensure that people can’t use malicious code from pod specifications.
#
# It does this by creating a ‘seatbelt’ profile on the fly and executing the
# given command through `/usr/bin/sandbox-exec`. This profile format is an
# undocumented format, which uses TinyScheme to implement its DSL.
#
# Even though it uses a undocumented format, it’s actually very self-explanatory.
# Because we use a whitelist approach, `(deny default)`, any action that is
# denied is logged to `/var/log/system.log`. So tailing that should provide
# enough information on steps that need to be take to get something to work.
#
# For more information see:
#
# * https://github.com/CocoaPods/CocoaPods/issues/939
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Slides.pdf
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Paper.pdf
# * https://github.com/s7ephen/OSX-Sandbox--Seatbelt--Profiles
# * `$ man sandbox-exec`
# * `$ ls /usr/share/sandbox`
    
            def run
          print_version
          signal_end_of_output
          listen
        end