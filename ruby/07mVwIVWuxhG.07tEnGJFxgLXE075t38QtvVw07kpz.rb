
        
                next unless HOMEBREW_CELLAR.directory?
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
        initial_revision_var = 'HOMEBREW_UPDATE_BEFORE#{repo_var}'
    @initial_revision = ENV[initial_revision_var].to_s
    raise ReporterRevisionUnsetError, initial_revision_var if @initial_revision.empty?
    
    User.seed do |u|
  u.id = -1
  u.name = 'system'
  u.username = 'system'
  u.username_lower = 'system'
  u.password = SecureRandom.hex
  u.active = true
  u.admin = true
  u.moderator = true
  u.approved = true
  u.trust_level = TrustLevel[4]
end
    
            # Reset topic count because we don't count the description topic
        DB.exec 'UPDATE categories SET topic_count = 0 WHERE id = #{lounge.id}'
      end
    end
  end
end

    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
          respond_to_on_destroy
    end
  end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
          def expire_data_after_sign_in!
        # session.keys will return an empty array if the session is not yet loaded.
        # This is a bug in both Rack and Rails.
        # A call to #empty? forces the session to be loaded.
        session.empty?
        session.keys.grep(/^devise\./).each { |k| session.delete(k) }
      end
    
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
    
        def default_failure_app(options)
      @failure_app = options[:failure_app] || Devise::FailureApp
      if @failure_app.is_a?(String)
        ref = Devise.ref(@failure_app)
        @failure_app = lambda { |env| ref.get.call(env) }
      end
    end
    
        # Recoverable takes care of resetting the user password and send reset instructions.
    #
    # ==Options
    #
    # Recoverable adds the following options to devise_for:
    #
    #   * +reset_password_keys+: the keys you want to use when recovering the password for an account
    #   * +reset_password_within+: the time period within which the password must be reset or the token expires.
    #   * +sign_in_after_reset_password+: whether or not to sign in the user automatically after a password reset.
    #
    # == Examples
    #
    #   # resets the user password and save the record, true if valid passwords are given, otherwise false
    #   User.find(1).reset_password('password123', 'password123')
    #
    #   # creates a new token and send it with instructions about how to reset the password
    #   User.find(1).send_reset_password_instructions
    #
    module Recoverable
      extend ActiveSupport::Concern
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
      it 'raises a TypeError when passed a String' do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end
    
      it 'raises a TypeError when passed a String' do
    lambda { srand('7') }.should raise_error(TypeError)
  end
end
    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
        while readable_io = IO.select([self_read])
      signal = readable_io.first[0].gets.strip
      handle_signal(launcher, signal)
    end
  #end
rescue SystemExit => e
  #Sidekiq.logger.error('Profiling...')
  #result = RubyProf.stop
  #printer = RubyProf::GraphHtmlPrinter.new(result)
  #printer.print(File.new('output.html', 'w'), :min_percent => 1)
  # normal
rescue => e
  raise e if $DEBUG
  STDERR.puts e.message
  STDERR.puts e.backtrace.join('\n')
  exit 1
end

    
          # Example usage:
      #   Sidekiq::Client.enqueue_in(3.minutes, MyWorker, 'foo', 1, :bat => 'bar')
      #
      def enqueue_in(interval, klass, *args)
        klass.perform_in(interval, *args)
      end
    end
    
        # Creating the Redis#brpop command takes into account any
    # configured queue weights. By default Redis#brpop returns
    # data from the first queue that has pending elements. We
    # recreate the queue command each time we invoke Redis#brpop
    # to honor weights and avoid queue starvation.
    def queues_cmd
      if @strictly_ordered_queues
        @queues
      else
        queues = @queues.shuffle.uniq
        queues << TIMEOUT
        queues
      end
    end
    
        def logger
      Sidekiq::Logging.logger
    end
  end
end

    
      Sidekiq::Client.prepend TestingClient
    
        EXPIRY = 60 * 60 * 24
    
      context 'called with one style' do
    it 'applies same style to all sides' do
      rule = 'border-style: solid'
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end