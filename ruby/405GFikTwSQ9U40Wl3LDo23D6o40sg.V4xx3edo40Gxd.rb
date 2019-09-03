
        
        namespace :bower do
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
        alias log puts
    
    if rails_env == 'production'
  config('without test:development')
elsif rails_env == 'test'
  config('without development')
end
    
      def aspect_params
    params.require(:aspect).permit(:name, :chat_enabled, :order_id)
  end
end

    
    class ContactsController < ApplicationController
  before_action :authenticate_user!
    
      def create
    # Contacts autocomplete does not work the same way on mobile and desktop
    # Mobile returns contact ids array while desktop returns person id
    # This will have to be removed when mobile autocomplete is ported to Typeahead
    recipients_param, column = [%i(contact_ids id), %i(person_ids person_id)].find {|param, _| params[param].present? }
    if recipients_param
      person_ids = current_user.contacts.mutual.where(column => params[recipients_param].split(',')).pluck(:person_id)
    end
    
        @invalid_emails = html_safe_string_from_session_array(:invalid_email_invites)
    @valid_emails   = html_safe_string_from_session_array(:valid_email_invites)
    
        if message.save
      logger.info 'event=create type=message user=#{current_user.diaspora_handle} status=success ' \
                  'message=#{message.id} chars=#{params[:message][:text].length}'
      Diaspora::Federation::Dispatcher.defer_dispatch(current_user, message)
    else
      flash[:error] = I18n.t('conversations.new_conversation.fail')
    end
    redirect_to conversations_path(:conversation_id => conversation.id)
  end
end

    
        respond_to do |format|
      format.html
      format.xml { render :xml => @notifications.to_xml }
      format.json {
        render json: render_as_json(@unread_notification_count, @grouped_unread_notification_counts, @notifications)
      }
    end
  end
    
        def roles
      ['--roles ROLES', '-r',
       'Run SSH commands only on hosts matching these roles',
       lambda do |value|
         Configuration.env.add_cmdline_filter(:role, value)
       end]
    end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
          def warn_third_party_scm_must_be_upgraded
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure this custom SCM will work with future versions of Capistrano,
please upgrade it to a version that uses the new SCM plugin mechanism
documented here:
    
          it 'flashes an error message' do
        post '/users/api_secrets', params: { api_secret: invalid_params }
        expect(flash[:error]).to be_truthy
        expect(flash[:notice]).to be_nil
      end
    end
  end
end

    
        it 'denies chat channel invitation to non-authorized user' do
      expect do
        post '/chat_channel_memberships', params: {
          chat_channel_membership: {
            user_id: second_user.id, chat_channel_id: chat_channel.id
          }
        }
      end.to raise_error(Pundit::NotAuthorizedError)
    end
  end
    
      def user_defined_image(article)
    return article.social_image if article.social_image.present?
    return article.main_image if article.main_image.present?
    return article.video_thumbnail_url if article.video_thumbnail_url.present?
  end
end

    
      def new
    @page = Page.new
  end
    
        it 'allows Resque helpers to point to different Redi' do
      conn = MiniTest::Mock.new
      conn.expect(:multi, []) { |*args, &block| block.call }
      conn.expect(:zadd, 1, [String, Array])
      DWorker.sidekiq_options('pool' => ConnectionPool.new(size: 1) { conn })
      Sidekiq::Client.enqueue_in(10, DWorker, 3)
      conn.verify
    end
  end
    
        it 'can schedule' do
      ss = Sidekiq::ScheduledSet.new
      q = Sidekiq::Queue.new
    
      class YetAnotherCustomMiddleware
    def initialize(name, recorder)
      @name = name
      @recorder = recorder
    end
    
        it 'removes the enqueued_at field when scheduling' do
      ss = Sidekiq::ScheduledSet.new
      ss.clear
    
      describe 'redis connection' do
  	it 'returns error without creating a connection if block is not given' do
  		assert_raises(ArgumentError) do
  			Sidekiq.redis
      end
  	end
  end
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end
    
        def tmux_layout_command
      '#{project.tmux} select-layout -t #{tmux_window_target} #{layout}'
    end
    
        it 'returns the string' do
      expect(project.send('hook_#{hook_name}')).to eq('echo 'on hook'')
    end
  end
    
      it { expect(subject.tmux_window_and_pane_target).to eql 'foo:0.1' }
end

    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end
    
            expect(described_class.validate).to be_a Tmuxinator::Project
      end
    end