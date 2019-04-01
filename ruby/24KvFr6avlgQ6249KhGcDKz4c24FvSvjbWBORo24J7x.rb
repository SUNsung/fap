
        
                include ::EachBatch
      end
    
            def id_for_already_imported_cache(note)
          note.id
        end
      end
    end
  end
end

    
            def importer_class
          NoteImporter
        end
    
            # attributes - A Hash containing the raw note details. The keys of this
        #              Hash must be Symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
      context 'successful dry runs' do
    before do
      stub_request(:get, 'http://xkcd.com/').
        with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
        to_return(:status => 200, :body => File.read(Rails.root.join('spec/data_fixtures/xkcd.html')), :headers => {})
    end
    
            it 'kills no long active workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
          AgentRunner.class_variable_set(:@@agents, [DelayedJobWorker])
          mock.instance_of(HuginnScheduler).stop!
          @agent_runner.send(:run_workers)
        end
      end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
          # Checks whether the user session has expired based on configured time.
      def timedout?(last_access)
        !timeout_in.nil? && last_access && last_access <= timeout_in.ago
      end
    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
      before_action :require_user!
    
      def self.provides_callback_for(provider)
    provider_id = provider.to_s.chomp '_oauth2'
    
      def export_filename
    '#{controller_name}.csv'
  end
end

    
      def available_locales
    I18n.available_locales.reverse
  end
end

    
    module RateLimitHeaders
  extend ActiveSupport::Concern
    
      def pin_at(version)
    HOMEBREW_PINNED_KEGS.mkpath
    version_path = @f.rack/version
    path.make_relative_symlink(version_path) unless pinned? || !version_path.exist?
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
          def has_role?(role)
        roles.include? role.to_sym
      end
    
          def assert_value_or_block_not_both(value, block)
        return if value.nil? || block.nil?
        raise Capistrano::ValidationError,
              'Value and block both passed to Configuration#set'
      end
    
    module LogStash
  module Environment
    extend self
    
        def initialize(plugins_to_package, target)
      @plugins_to_package = Array(plugins_to_package)
      @target = target
    
    class LogStash::PluginManager::Pack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'compress package as a tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'compress package as a zip file', :default => LogStash::Environment.windows?
  option '--[no-]clean', :flag, 'clean up the generated dump of plugins', :default => true
  option '--overwrite', :flag, 'Overwrite a previously generated package file', :default => false
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end
    
        it 'rejects bad ids' do
      bad_ids.each do |id|
        expect { generate_tag(id) } .to raise_error(StandardError)
      end
    end
  end
end

    
    RSpec.describe 'Authenticating with twitter' do
  let(:twitter_callback_hash) do
    {
      provider: 'twitter',
      uid: '111111',
      credentials: {
        token: '222222',
        secret: '333333'
      },
      extra: {
        access_token: '',
        raw_info: {
          name: 'Bruce Wayne',
          created_at: 'Thu Jul 4 00:00:00 +0000 2013' # This is mandatory
        }
      },
      info: {
        nickname: 'batman',
        name: 'Bruce Wayne',
        email: 'batman@batcave.com'
      }
    }
  end
    
      def generate_podcast_liquid_tag(link)
    Liquid::Template.parse('{% podcast #{link} %}')
  end
    
        # The `#authorized?` method's subject can be set to both instances as well
    # as classes of objects. This can make it much difficult to create simple
    # case statements for authorization since you have to handle both the
    # class level match and the instance level match.
    #
    # For example:
    #
    #     class MyAuthAdapter < ActiveAdmin::AuthorizationAdapter
    #
    #       def authorized?(action, subject = nil)
    #         case subject
    #         when Post
    #           true
    #         when Class
    #           if subject == Post
    #             true
    #           end
    #         end
    #       end
    #
    #     end
    #
    # To handle this, the normalized method takes care of returning a object
    # which implements `===` to be matched in a case statement.
    #
    # The above now becomes:
    #
    #     class MyAuthAdapter < ActiveAdmin::AuthorizationAdapter
    #
    #       def authorized?(action, subject = nil)
    #         case subject
    #         when normalized(Post)
    #           true
    #         end
    #       end
    #
    #     end
    def normalized(klass)
      NormalizedMatcher.new(klass)
    end