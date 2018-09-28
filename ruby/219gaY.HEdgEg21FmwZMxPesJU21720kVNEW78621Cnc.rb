
        
              it 'requires the passwords to match when changing them' do
        visit edit_admin_user_path(users(:bob))
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Update User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
    describe AgentRunner do
  context 'without traps' do
    before do
      stub.instance_of(Rufus::Scheduler).every
      stub.instance_of(AgentRunner).set_traps
      @agent_runner = AgentRunner.new
    end
    
      def failed_strategy
    request.respond_to?(:get_header) ? request.get_header('omniauth.error.strategy') : request.env['omniauth.error.strategy']
  end
    
          private
    
        delegate :flash, to: :request
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
              # Require that names be an array
          names ||= []
          names = [names] if !names.is_a?(Array)
    
              @registered.each do |plugin|
            providers.merge!(plugin.provider.to_hash)
          end
    
              # Return the result
          result
        end
    
            # This contains all the provider plugins by name, and returns
        # the provider class and options.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :providers
    
              # Return the dummy object so that anything else works
          ::Vagrant::Config::V2::DummyConfig.new
        end
    
              results
        end
    
        def resource_params
      params.require(:account_moderation_note).permit(
        :content,
        :target_account_id
      )
    end
    
      def encoded_challenge
    HTMLEntities.new.encode(params['hub.challenge'])
  end