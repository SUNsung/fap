
        
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
    
        it 'returns a label 'Missing Gems' if a given agent has dependencies missing' do
      stub(@agent).dependencies_missing? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Missing Gems'
    end
    
            # Fix the order of receivers
        @agents.each do |agent|
          stub.proxy(agent).receivers { |orig| orig.order(:id) }
        end
      end
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
        it 'should generate the correct specific tracking url' do
      @checker.options['path'] = 'trackings/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings/usps/9361289878905919630610')
    end
    
        it 'should not provide the since attribute on first run' do
      expect(@checker.send(:query_parameters)).to eq({})
    end
    
      describe '#receive' do
    it 'sends a message' do
      stub(HTTParty).post { {'id' => 1, 'message' => 'blah', 'title' => 'blah','source_name' => 'Custom Notification'} }
      @checker.receive([@event])
    end
    
        def add_entry(entry)
      if @index.add?(entry.as_json.to_s)
        @entries << entry.dup
        @types[entry.type].count += 1 if entry.type
      end
    end
    
        def current_url
      context[:url]
    end
    
        def inheritable_copy
      self.class.new @filters
    end
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
        module FixInternalUrlsBehavior
      def self.included(base)
        base.extend ClassMethods
      end
    
            css('.toc-close', '.naked-list').remove
      end
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
    end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          klass.devise_modules.each do |mod|
        constant = const_get(mod.to_s.classify)
    
            # Attempt to find a user by its reset_password_token to reset its
        # password. If a user is found and token is still valid, reset its password and automatically
        # try saving the record. If not user is found, returns a new user
        # containing an error in reset_password_token attribute.
        # Attributes must contain reset_password_token, password and confirmation
        def reset_password_by_token(attributes={})
          original_token       = attributes[:reset_password_token]
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, original_token)