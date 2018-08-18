module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
            def test_encoded_password
          password = 'am@z1ng_p@ssw0rd#!'
          encoded_password = URI.encode_www_form_component(password)
          spec = resolve 'abstract://foo:#{encoded_password}@localhost/bar'
          assert_equal password, spec['password']
        end
    
      def test_values_cast_from_nil_are_persisted_as_nil
    # This is required to fulfil the following contract, which must be universally
    # true in Active Record:
    #
    # model.attribute = value
    # assert_equal model.attribute, model.tap(&:save).reload.attribute
    Topic.serialize(:content, Hash)
    topic = Topic.create!(content: {})
    topic2 = Topic.create!(content: nil)
    
      def test_deleting_updates_counter_cache_with_dependent_delete_all
    post = posts(:welcome)
    post.update_columns(taggings_with_delete_all_count: post.tags_count)
    
          broadcasting = 'test_queue'
      message = { body: 'test message' }
      server.broadcast(broadcasting, message)
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      included do
    helper SortableTableHelper
  end
    
            # A callback method used to deliver confirmation
        # instructions on creation. This can be overridden
        # in models to map to a nice sign up e-mail.
        def send_on_create_confirmation_instructions
          send_confirmation_instructions
        end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      def translation_scope
    'devise.sessions'
  end
    
            # Unregisters a SIGINT handler.
        def unregister(sig_callback)
          @@mutex.synchronize do
            registered.delete(sig_callback)
    
      # Enable serving of images, stylesheets, and JavaScripts from an asset server.
  # config.action_controller.asset_host = 'http://assets.example.com'
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end
