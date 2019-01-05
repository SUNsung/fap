
        
                def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
              def datetime_selector(options, html_options)
            datetime = options.fetch(:selected) { value || default_datetime(options) }
            @auto_index ||= nil
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
          def extract_details(options) # :doc:
        @lookup_context.registered_details.each_with_object({}) do |key, details|
          value = options[key]
    
    def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def global_require
  JSON.pretty_generate(DATA)
end
    
    Given(%r!^I have the following (draft|post)s? within the '(.*)' directory:$!) do |type, folder, table|
  table.hashes.each do |input_hash|
    title = slug(input_hash['title'])
    parsed_date = Time.xmlschema(input_hash['date']) rescue Time.parse(input_hash['date'])
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
    module Jekyll
  module Commands
    class Serve
      class LiveReloadReactor
        attr_reader :started_event
        attr_reader :stopped_event
        attr_reader :thread
    
            def initialize(_opts)
          # If EventMachine SSL support on Windows ever gets better, the code below will
          # set up the reactor to handle SSL
          #
          # @ssl_enabled = opts['ssl_cert'] && opts['ssl_key']
          # if @ssl_enabled
          #   em_opts[:tls_options] = {
          #   :private_key_file => Jekyll.sanitized_path(opts['source'], opts['ssl_key']),
          #   :cert_chain_file  => Jekyll.sanitized_path(opts['source'], opts['ssl_cert'])
          #   }
          #   em_opts[:secure] = true
          # end
    
                @config['syntax_highlighter_opts'] = begin
              strip_coderay_prefix(
                @config['syntax_highlighter_opts'] \
                  .merge(CODERAY_DEFAULTS) \
                  .merge(@config['coderay'])
              )
            end
          end
        end
      end
    end
  end
end

    
        brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
          plist_filename = if f.plist
        f.plist_path.basename
      else
        File.basename Dir['#{keg}/*.plist'].first
      end
      plist_link = '#{destination}/#{plist_filename}'
      plist_domain = f.plist_path.basename('.plist')
      destination_path = Pathname.new File.expand_path destination
      plist_path = destination_path/plist_filename
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
      def self.bottle_sha1(*)
  end
    
        def set_account
      @account = Account.find(params[:account_id])
      @user = @account.user
    end
    
        def enable
      authorize @custom_emoji, :enable?
      @custom_emoji.update!(disabled: false)
      log_action :enable, @custom_emoji
      flash[:notice] = I18n.t('admin.custom_emojis.enabled_msg')
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        def action_from_button
      if params[:nsfw_on]
        'nsfw_on'
      elsif params[:nsfw_off]
        'nsfw_off'
      elsif params[:delete]
        'delete'
      end
    end
    
      def hub_topic_domain
    hub_topic_uri.host + (hub_topic_uri.port ? ':#{hub_topic_uri.port}' : '')
  end
    
    class Api::V1::Push::SubscriptionsController < Api::BaseController
  before_action -> { doorkeeper_authorize! :push }
  before_action :require_user!
  before_action :set_web_push_subscription
    
      it 'expands shell variables when given a single string argument' do
    lambda { @object.system('echo #{@shell_var}') }.should output_to_fd('foo\n')
  end
    
      it 'raises an UncaughtThrowError if there is no catch block for the symbol' do
    lambda { throw :blah }.should raise_error(UncaughtThrowError)
  end
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
      def validate_cache_location
    cache_location = LogStash::Environment::CACHE_PATH
    if File.exist?(cache_location)
      puts('Directory #{cache_location} is going to be overwritten, do you want to continue? (Y/N)')
      override = ( 'y' == STDIN.gets.strip.downcase ? true : false)
      if override
        FileUtils.rm_rf(cache_location)
      else
        puts('Unpack cancelled: file #{cache_location} already exists, please delete or move it')
        exit
      end
    end
  end
end

    
      let(:unordered_config_parts) { ordered_config_parts.shuffle }
  let(:settings) { LogStash::SETTINGS }
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
          def create_worker_test
        template_file = File.join(
            'test/workers',
            class_path,
            '#{file_name}_worker_test.rb'
        )
        template 'worker_test.rb.erb', template_file
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
    
        def identity
      @@identity ||= '#{hostname}:#{$$}:#{process_nonce}'
    end