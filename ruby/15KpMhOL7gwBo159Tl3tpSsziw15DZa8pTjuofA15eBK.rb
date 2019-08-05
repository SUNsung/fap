
        
        class BugTest < Minitest::Test
  def test_stuff
    assert 'zomg'.present?
    refute ''.present?
  end
end

    
        def test_migrate_nested_revert_whole_migration
      revert = NestedRevertWholeMigration.new(InvertibleRevertMigration)
      revert.migrate :down
      assert revert.connection.table_exists?('horses')
      revert.migrate :up
      assert_not revert.connection.table_exists?('horses')
    end
    
    
      def authenticate_by_password
        if password.present?
          http_basic_authenticate_or_request_with name: 'actionmailbox', password: password, realm: 'Action Mailbox'
        else
          raise ArgumentError, 'Missing required ingress credentials'
        end
      end
    
          def self.[](type)
        type_klass[type]
      end
    
        it 'lists all users' do
      visit admin_users_path
      expect(page).to have_text('bob')
      expect(page).to have_text('jane')
    end
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
              expect(trigger_agent.name).to eq('listen for weather')
          expect(trigger_agent.sources).to eq([weather_agent])
          expect(trigger_agent.schedule).to be_nil
          expect(trigger_agent.keep_events_for).to eq(0)
          expect(trigger_agent.propagate_immediately).to be_truthy
          expect(trigger_agent).not_to be_disabled
          expect(trigger_agent.memory).to be_empty
          expect(trigger_agent.options).to eq(trigger_agent_options)
        end
    
        it 'calls the specified method when the argument is present' do
      argument = mock()
      mock(argument).to_i { 1 }
      expect(Utils.if_present(argument, :to_i)).to eq(1)
    end
  end
end

    
        it 'should require access token' do
      @checker.options['user_credentials'] = nil
      expect(@checker).not_to be_valid
    end
  end
    
      desc 'package <doc> <doc@version>...', 'Package documentations'
  def package(*names)
    require 'unix_utils'
    docs = find_docs(names)
    assert_docs(docs)
    docs.each(&method(:package_doc))
    puts 'Done'
  rescue Docs::DocNotFound => error
    handle_doc_not_found_error(error)
  end
    
        def self.run(urls, options = {}, &block)
      urls = urls.dup
      requester = new(options)
      requester.on_response(&block) if block
      requester.on_response do # cheap hack to ensure root page is processed first
        if urls
          requester.request(urls)
          urls = nil
        end
      end
      requester.request(urls.shift)
      requester.run
      requester
    end
    
          def get_name
        if subpath.start_with?('users_guide')
          name = at_css('h1').content
          name.remove! '\u{00B6}'
          name
        else
          at_css('#module-header .caption').content
        end
      end
    
            css('.function > dt[id]', '.method > dt[id]', '.staticmethod > dt[id]', '.classmethod > dt[id]').each do |node|
          entries << [node['id'] + '()', node['id']]
        end
    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
    class SessionsController < Devise::SessionsController
  # rubocop:disable Rails/LexicallyScopedActionFilter
  before_action :authenticate_with_2fa, only: :create
  after_action :reset_authentication_token, only: :create
  before_action :reset_authentication_token, only: :destroy
  # rubocop:enable Rails/LexicallyScopedActionFilter
    
    if rails_env != 'development'
  config('path vendor/bundle')
  config('frozen true')
  config('disable_shared_gems true')
end
    
          def find
        client = Api::OpenidConnect::OAuthApplication.find_by(client_name: params[:client_name])
        if client
          render json: {client_id: client.client_id}
        else
          render json: {error: 'Client with name #{params[:client_name]} does not exist'}
        end
      end
    
      def create
    begin
      comment = comment_service.create(params[:post_id], params[:text])
    rescue ActiveRecord::RecordNotFound
      render plain: I18n.t('comments.create.error'), status: 404
      return
    end
    
      def set_up_contacts_mobile
    @contacts = case params[:set]
      when 'only_sharing'
        current_user.contacts.only_sharing
      when 'all'
        current_user.contacts
      else
        if params[:a_id]
          @aspect = current_user.aspects.find(params[:a_id])
          @aspect.contacts
        else
          current_user.contacts.receiving
        end
    end
    @contacts = @contacts.for_a_stream.paginate(:page => params[:page], :per_page => 25)
    @contacts_size = @contacts.length
  end
end

    
      respond_to :html,
             :mobile,
             :json
    
      def types
    {
      'also_commented'       => 'Notifications::AlsoCommented',
      'comment_on_post'      => 'Notifications::CommentOnPost',
      'liked'                => 'Notifications::Liked',
      'mentioned'            => 'Notifications::MentionedInPost',
      'mentioned_in_comment' => 'Notifications::MentionedInComment',
      'reshared'             => 'Notifications::Reshared',
      'started_sharing'      => 'Notifications::StartedSharing',
      'contacts_birthday'    => 'Notifications::ContactsBirthday'
    }
  end
  helper_method :types
end

    
          super
    end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''