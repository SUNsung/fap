
        
          def test_pretty_print_overridden_by_inspect
    subtopic = Class.new(Topic) do
      def inspect
        'inspecting topic'
      end
    end
    actual = +''
    PP.pp(subtopic.new, StringIO.new(actual))
    assert_equal 'inspecting topic\n', actual
  end
    
          def test_invert_create_join_table
        drop_join_table = @recorder.inverse_of :create_join_table, [:musics, :artists]
        assert_equal [:drop_join_table, [:musics, :artists], nil], drop_join_table
      end
    
          private
        def run_rake_routes
          Dir.chdir(app_path) { `bin/rake routes` }
        end
    end
  end
end

    
    require 'active_support/core_ext/module/attribute_accessors'
    
        # Get the implementation class for the given Converter.
    # Returns the Converter instance implementing the given Converter.
    # klass - The Class of the Converter to fetch.
    def find_converter_instance(klass)
      @find_converter_instance ||= {}
      @find_converter_instance[klass] ||= begin
        converters.find { |converter| converter.instance_of?(klass) } || \
          raise('No Converters found for #{klass}')
      end
    end
    
    # Test if processing content string without any Liquid constructs, via Liquid,
# is slower than checking whether constructs exist ( using `String#include?` )
# and return-ing the 'plaintext' content string as is..
#
# Ref: https://github.com/jekyll/jekyll/pull/6735
    
    def pre_pr(url)
  url[-1, 1] == FORWARD_SLASH ? url : File.dirname(url)
end
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
      def all_signed_out?
    users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
      # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
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
    
          def self.required_fields(klass)
        []
      end
    
          def rsync_post(machine, opts)
        if opts.key?(:chown) && !opts[:chown]
          return
        end
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
    describe VagrantPlugins::DockerProvider::Provider do
  let(:driver_obj){ double('driver') }
  let(:provider){ double('provider', driver: driver_obj) }
  let(:provider_config){ double('provider_config', force_host_vm: false) }
  let(:ssh) { double('ssh', guest_port: 22) }
  let(:config) { double('config', ssh: ssh) }
  let(:machine){ double('machine', provider: provider, provider_config: provider_config, config: config) }
    
            expect(app).to receive(:call).with(env)
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        # Returns the configuration for a single machine.
    #
    # When loading a box Vagrantfile, it will be prepended to the
    # key order specified when initializing this class. Sub-machine
    # and provider-specific overrides are appended at the end. The
    # actual order is:
    #
    # - box
    # - keys specified for #initialize
    # - sub-machine
    # - provider
    #
    # The return value is a hash with the following keys (symbols)
    # and values:
    #
    #   - box: the {Box} backing the machine
    #   - config: the actual configuration
    #   - config_errors: list of errors, if any
    #   - config_warnings: list of warnings, if any
    #   - provider_cls: class of the provider backing the machine
    #   - provider_options: options for the provider
    #
    # @param [Symbol] name Name of the machine.
    # @param [Symbol] provider The provider the machine should
    #   be backed by (required for provider overrides).
    # @param [BoxCollection] boxes BoxCollection to look up the
    #   box Vagrantfile.
    # @param [Pathname] data_path Machine data path
    # @return [Hash<Symbol, Object>] Various configuration parameters for a
    #   machine. See the main documentation body for more info.
    def machine_config(name, provider, boxes, data_path=nil, validate_provider=true)
      keys = @keys.dup
    
        before do
      allow(Gem::Source::SpecificFile).to receive(:new).and_return(plugin_source)
      allow(subject).to receive(:internal_install)
    end
    
      def authenticate_with_two_factor_via_otp(user)
    if valid_otp_attempt?(user)
      session.delete(:otp_user_id)
      sign_in(user)
    else
      flash.now[:alert] = 'Invalid token'
      prompt_for_two_factor(user)
    end
  end
    
          def auth_user_unless_prompt_none!
        prompt = params[:prompt]
        if prompt && prompt.include?('none')
          handle_prompt_none
        elsif prompt && prompt.include?('login')
          new_params = params.except('controller', 'action').permit!.to_h.merge(prompt: prompt.remove('login'))
          reauthenticate(new_params)
        else
          authenticate_user!
        end
      end
    
        if @contact.present?
      respond_to do |format|
        format.json do
          render json: AspectMembershipPresenter.new(
            AspectMembership.where(contact_id: @contact.id, aspect_id: @aspect.id).first)
          .base_hash
        end
      end
    else
      respond_to do |format|
        format.json do
          render plain: I18n.t('aspects.add_to_aspect.failure'), status: 409
        end
      end
    end
  end
    
        if comment
      respond_create_success(comment)
    else
      render plain: I18n.t('comments.create.error'), status: 422
    end
  end
    
      def like_service
    @like_service ||= LikeService.new(current_user)
  end
end

    
        class SetWorker
      include Sidekiq::Worker
      sidekiq_options :queue => :foo, 'retry' => 12
    end
    
        it 'has no enqueued_at time for jobs enqueued in the future' do
      job_id = ApiWorker.perform_in(100, 1, 'foo')
      job = Sidekiq::ScheduledSet.new.find_job(job_id)
      assert_nil job.enqueued_at
    end
    
      describe 'redis connection' do
    it 'does not continually retry' do
      assert_raises Redis::CommandError do
        Sidekiq.redis do |c|
          raise Redis::CommandError, 'READONLY You can't write against a replica.'
        end
      end
    end
    
        it 'stubs the delay call on classes' do
      assert_equal 0, Sidekiq::Extensions::DelayedClass.jobs.size
      Something.delay.foo(Date.today)
      assert_equal 1, Sidekiq::Extensions::DelayedClass.jobs.size
    end
  end
    
    Monitoring = Thread.new do
  watchdog('monitor thread') do
    while true
      sleep 1
      qsize, retries = Sidekiq.redis do |conn|
        conn.pipelined do
          conn.llen 'queue:default'
          conn.zcard 'retry'
        end
      end.map(&:to_i)
      total = qsize + retries
      #GC.start
      Sidekiq.logger.error('RSS: #{Process.rss} Pending: #{total}')
      if total == 0
        Sidekiq.logger.error('Done')
        exit(0)
      end
    end
  end
end