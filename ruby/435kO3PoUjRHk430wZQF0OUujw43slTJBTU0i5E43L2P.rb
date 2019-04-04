
        
            def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
            if h1 = at_css('h1')
          h1.prepend_child(css('.view-source', '.improve-docs'))
        end
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
        def resource_params
      params.require(:email_domain_block).permit(:domain)
    end
  end
end

    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
      def session_needs_update?
    !current_session.nil? && current_session.updated_at < UPDATE_SIGN_IN_HOURS.hours.ago
  end
end

    
      class Mention < ApplicationRecord
  end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
        it 'generates the aspects_manage fixture', :fixture => true do
      get :index, params: {a_id: @aspect.id}
      save_fixture(html_for('body'), 'aspects_manage')
    end
    
            it 'reshares the absolute root' do
          post_request!
          expect(@post.reshares.count).to eq(0)
          expect(@root.reshares.count).to eq(2)
        end
      end
    end
  end
    
        # @param msg [String] The error message
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def initialize(msg, attrs = {})
      @message = msg
      @sass_backtrace = []
      add_backtrace(attrs)
    end
    
        def handle_load_error(err)
      dep = err.message[/^no such file to load -- (.*)/, 1]
      raise err if @options[:trace] || dep.nil? || dep.empty?
      $stderr.puts <<MESSAGE
Required dependency #{dep} not found!
    Run 'gem install #{dep}' to get it.
  Use --trace for backtrace.
MESSAGE
      exit 1
    end
  end
end

    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified. Requires --from.') do
        @options[:input] = $stdin
      end
    
      gem.licenses      = ['MIT']
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end
    
    %i(git_strategy hg_strategy svn_strategy).each do |strategy|
  validate(strategy) do |key, _value|
    warn(
      '[Deprecation Warning] #{key} is deprecated and will be removed in '\
      'Capistrano 3.7.0.\n'\
      'https://github.com/capistrano/capistrano/blob/master/UPGRADING-3.7.md'
    )
  end
end
    
        def redis(&block)
      Sidekiq.redis(&block)
    end