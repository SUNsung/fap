
        
          def relative_url_redirect_with_status_hash
    redirect_to('/things/stuff', status: 301)
  end
    
        # inherited only
    assert_equal 'funky.jpg', @user.avatar.filename.to_s
    
                      pg_conn.wait_for_notify(1) do |chan, pid, message|
                    broadcast(chan, message)
                  end
                end
              end
            end
          end
    
      def test_clear_active_record_connections_adapter_still_works
    server = ActionCable::Server::Base.new
    server.config.cable = cable_config.with_indifferent_access
    server.config.logger = Logger.new(StringIO.new).tap { |l| l.level = Logger::UNKNOWN }
    
            Rails.application
      end
    ensure
      ENV['RAILS_ENV'] = old_env
    end
    
        @connection.stub(:subscriptions, subscriptions) do
      @channel = SecretChannel.new @connection, '{id: 1}', id: 1
      @channel.subscribe_to_channel
    
      private
    def subscribe_to_chat_channel(identifier = @chat_identifier)
      @subscriptions.execute_command 'command' => 'subscribe', 'identifier' => identifier
      assert_equal identifier, @subscriptions.identifiers.last
    
      class FakeConnection
    def close
    end
  end
    
      def cache_fragment(name)
    ApplicationSerializer.fragment_cache[name] ||= yield
  end
end

    
        private
    
        context 'GIT repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(true)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(false)
      end
    
      # Check if there is no signed in user before doing the sign out.
  #
  # If there is no signed in user, it will set the flash message and redirect
  # to the after_sign_out path.
  def verify_signed_out_user
    if all_signed_out?
      set_flash_message! :notice, :already_signed_out
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
    module Homebrew
  module_function
    
      # Overriding #satisfied? is unsupported.
  # Pass a block or boolean to the satisfy DSL method instead.
  def satisfied?
    satisfy = self.class.satisfy
    return true unless satisfy
    @satisfied_result = satisfy.yielder { |p| instance_eval(&p) }
    return false unless @satisfied_result
    true
  end
    
      def deprecated_option(hash)
    raise ArgumentError, 'deprecated_option hash must not be empty' if hash.empty?
    hash.each do |old_options, new_options|
      Array(old_options).each do |old_option|
        Array(new_options).each do |new_option|
          deprecated_option = DeprecatedOption.new(old_option, new_option)
          deprecated_options << deprecated_option
    
        def any_searchfield_present?
      if %w(username email guid under13).all? { |attr| public_send(attr).blank? }
        errors.add :base, 'no fields for search set'
      end
    end
    
          def call
        title('Gems')
        table(all_gem_names) do |gem, row|
          row.yellow if update_available?(gem)
          row << gem
          row << installed_gem_version(gem)
          row << '(update available)' if update_available?(gem)
        end
      end
    
          it 'filters by hosts and roles from the :filter variable' do
        all = dsl.roles(:all)
        SSHKit::Coordinator.expects(:new).with([]).returns(@coordinator)
        dsl.set :filter, roles: 'db', hosts: 'example3.com'
        dsl.on(all)
      end
    
        orig_stdout = $stdout
    orig_stderr = $stderr
    captured_stdout = StringIO.new
    captured_stderr = StringIO.new
    $stdout = captured_stdout
    $stderr = captured_stderr
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end