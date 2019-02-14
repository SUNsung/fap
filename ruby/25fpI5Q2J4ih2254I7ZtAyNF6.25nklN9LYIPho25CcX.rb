
        
        class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
          # Checks if the reset password token sent is within the limit time.
      # We do this by calculating if the difference between today and the
      # sending date does not exceed the confirm in time configured.
      # Returns true if the resource is not responding to reset_password_sent_at at all.
      # reset_password_within is a model configuration, must always be an integer value.
      #
      # Example:
      #
      #   # reset_password_within = 1.day and reset_password_sent_at = today
      #   reset_password_period_valid?   # returns true
      #
      #   # reset_password_within = 5.days and reset_password_sent_at = 4.days.ago
      #   reset_password_period_valid?   # returns true
      #
      #   # reset_password_within = 5.days and reset_password_sent_at = 5.days.ago
      #   reset_password_period_valid?   # returns false
      #
      #   # reset_password_within = 0.days
      #   reset_password_period_valid?   # will always return false
      #
      def reset_password_period_valid?
        reset_password_sent_at && reset_password_sent_at.utc >= self.class.reset_password_within.ago.utc
      end
    
          def rememberable_options
        self.class.rememberable_options
      end
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
end

    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
        context 'on a public post from a stranger' do
      before do
        @post = stranger.post :status_message, :text => 'something', :public => true, :to => 'all'
      end
    
          it 'returns reshares without login' do
        bob.reshare!(@post)
        sign_out :user
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@post.reshares.map(&:id))
      end
    end
  end
end

    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
        def initialize(plugins_to_package, target)
      @plugins_to_package = Array(plugins_to_package)
      @target = target
    
        # any errors will be logged to $stderr by invoke!
    # Bundler cannot update and clean gems in one operation so we have to call the CLI twice.
    options = {:update => plugins, :rubygems_source => gemfile.gemset.sources}
    options[:local] = true if local?
    output = LogStash::Bundler.invoke!(options)
    # We currently dont removed unused gems from the logstash installation
    # see: https://github.com/elastic/logstash/issues/6339
    # output = LogStash::Bundler.invoke!(:clean => true)
    display_updated_plugins(previous_gem_specs_map)
  rescue => exception
    gemfile.restore!
    report_exception('Updated Aborted', exception)
  ensure
    display_bundler_output(output)
  end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end
