
        
                def test_url_missing_scheme
          spec = resolve 'foo'
          assert_equal({
            'database' => 'foo' }, spec)
        end
    
      test 'broadcasts_to' do
    assert_called_with(
      ActionCable.server,
      :broadcast,
      [
        'action_cable:channel:broadcasting_test:chat:Room#1-Campfire',
        'Hello World'
      ]
    ) do
      ChatChannel.broadcast_to(Room.new(1), 'Hello World')
    end
  end
    
          assert_called(@connection.websocket, :close) do
        @connection.process_internal_message 'type' => 'disconnect'
      end
    end
  end
    
    class BaseTest < ActionCable::TestCase
  def setup
    @server = ActionCable::Server::Base.new
    @server.config.cable = { adapter: 'async' }.with_indifferent_access
  end
    
              if options.fetch('skip_initial_build', false)
            Jekyll.logger.warn 'Build Warning:', 'Skipping the initial build.' \
                               ' This may result in an out-of-date site.'
          else
            build(site, options)
          end
    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
            def set_defaults
          hash_ = @jekyll_opts.fetch('webrick', {}).fetch('headers', {})
          DEFAULTS.each_with_object(@headers = hash_) do |(key, val), hash|
            hash[key] = val unless hash.key?(key)
          end
        end
      end
    end
  end
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
    
        options[:title] = 'CoffeeScript'
    options[:skip_links] = true
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
        alias_method :insert_before, :insert
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def self.parse(url)
      return url if url.kind_of? self
      new(*PARSER.split(url), PARSER)
    end
    
      def remote_url
    object.remote_url.presence
  end
    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
        existence_maps.each do |group|
      existing_one = group.key(true)
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/reblog
  def reblog
    r = Status.where.not(reblog_of_id: nil).first
    NotificationMailer.reblog(r.reblog.account, Notification.find_by(activity: r))
  end