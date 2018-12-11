
        
            it 'does not send previously configured receivers when the current agent does not support them' do
      select_agent_type('Website Agent scrapes')
      sleep 0.5
      select2('ZKCD', from: 'Receivers')
      select_agent_type('Email Agent')
      fill_in(:agent_name, with: 'No receivers')
      click_on 'Save'
      expect(page).to have_content('No receivers')
      agent = Agent.find_by(name: 'No receivers')
      expect(agent.receivers).to eq([])
    end
  end
end

    
      it 'asks to accept conflicts when the scenario was modified' do
    DefaultScenarioImporter.seed(user)
    agent = user.agents.where(name: 'Rain Notifier').first
    agent.options['expected_receive_period_in_days'] = 9001
    agent.save!
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This Scenario already exists in your system.')
    expect(page).to have_text('9001')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
              expect(Scenario.where(guid: guid).count).to eq(2)
    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
      before_action :authenticate_user!
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
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
    
          # Configure default email options
      def devise_mail(record, action, opts = {}, &block)
        initialize_from_record(record)
        mail headers_for(action, opts), &block
      end
    
            log_action :change_email, @user
    
          @email_domain_block = EmailDomainBlock.new(resource_params)
    
        private
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      def verified_domain
    return signed_request_account.domain if signed_request_account
  end
    
      private
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end

    
      it 'raises ArgumentError if 3 or more arguments provided' do
    lambda {
      catch :blah do
        throw :blah, :return_value, 2
      end
    }.should raise_error(ArgumentError)
    
          ruby_bug '#14846', '2.5'...'2.6' do
        it 'does not prepend caller information if line number is too big' do
          w = KernelSpecs::WarnInNestedCall.new
          -> { w.f4('foo', 100) }.should output(nil, 'warning: foo\n')
        end
      end
    
          def before
        @versions[0][0..6]
      end
    
          def formats
        super(:markdown)
      end
    
          def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
          def escaped_name
        CGI.escape(@name)
      end
    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
    context 'Unicode Support' do
  setup do
    @path = cloned_testpath('examples/revert.git')
    @wiki = Gollum::Wiki.new(@path)
  end
    
      end
end

    
          Sidekiq.redis do |conn|
        conn.pipelined do
          jobs_to_requeue.each do |queue, jobs|
            conn.rpush('queue:#{queue}', jobs)
          end
        end
      end
      Sidekiq.logger.info('Pushed #{inprogress.size} jobs back to Redis')
    rescue => ex
      Sidekiq.logger.warn('Failed to requeue #{inprogress.size} jobs: #{ex.message}')
    end
    
          def prepend(klass, *args)
        remove(klass) if exists?(klass)
        entries.insert(0, Entry.new(klass, *args))
      end
    
    if defined?(::Rails) && Rails.respond_to?(:env) && !Rails.env.test?
  puts('**************************************************')
  puts('⛔️ WARNING: Sidekiq testing API enabled, but this is not the test environment.  Your jobs will not go to Redis.')
  puts('**************************************************')
end

    
        def logger
      Sidekiq.logger
    end
    
          def enable(*opts)
        opts.each {|key| set(key, true) }
      end
    
        def erb(content, options = {})
      if content.kind_of? Symbol
        unless respond_to?(:'_erb_#{content}')
          src = ERB.new(File.read('#{Web.settings.views}/#{content}.erb')).src
          WebAction.class_eval('def _erb_#{content}\n#{src}\n end')
        end
      end
    
        NAMED_SEGMENTS_PATTERN = /\/([^\/]*):([^\.:$\/]+)/