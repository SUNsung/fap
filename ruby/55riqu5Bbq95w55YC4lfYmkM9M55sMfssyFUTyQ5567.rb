
        
        # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
            tag = options[:tag] || '#{options[:grouping]}/#{lane_name}/#{options[:prefix]}#{options[:build_number]}#{options[:postfix]}'
        message = options[:message] || '#{tag} (fastlane)'
    
          before :each do
        Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER] = build_number
      end
    
            inner_command = 'git describe --tags `git rev-list --tags --max-count=1`'
        # this is not really the command that would have been executed, but a 'fabricated' representation for tests (by Actions.sh) that includes both command that would have been run
        pseudocommand = 'git log --pretty=\'%B\' #{inner_command.shellescape}...HEAD'
        expect(result).to eq(pseudocommand)
      end
    
    describe Fastlane::Actions do
  describe '#sh' do
    before do
      allow(FastlaneCore::Helper).to receive(:sh_enabled?).and_return(true)
    end
    
        # [Boolean] Set if the variable is sensitive, such as a password or API token, to prevent echoing when prompted for the parameter
    # If a default value exists, it won't be used during code generation as default values can read from environment variables.
    attr_accessor :sensitive
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
          it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
              @bar3 = Agents::DotBar.new(name: 'bar3').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @bar2
            agent.save!
          },
        ]
        @foo.reload
        @bar2.reload
    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
          it 'validates keep_events_for' do
        agent = Agents::SomethingSource.new(:name => 'something')
        agent.user = users(:bob)
        expect(agent).to be_valid
        agent.keep_events_for = nil
        expect(agent).to have(1).errors_on(:keep_events_for)
        agent.keep_events_for = 1000
        expect(agent).to have(1).errors_on(:keep_events_for)
        agent.keep_events_for = ''
        expect(agent).to have(1).errors_on(:keep_events_for)
        agent.keep_events_for = 5.days.to_i
        expect(agent).to be_valid
        agent.keep_events_for = 0
        expect(agent).to be_valid
        agent.keep_events_for = 365.days.to_i
        expect(agent).to be_valid
    
    class ActivityPub::OutboxesController < Api::BaseController
  LIMIT = 20
    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
        def create
      authorize @user, :confirm?
      @user.confirm!
      log_action :confirm, @user
      redirect_to admin_accounts_path
    end
    
        def index
      authorize :custom_emoji, :index?
      @custom_emojis = filtered_custom_emojis.eager_load(:local_counterpart).page(params[:page])
    end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
    class Api::SalmonController < Api::BaseController
  include SignatureVerification
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end