
        
            it 'shows all options for agents that can be scheduled, create and receive events' do
      select_agent_type('Website Agent scrapes')
      expect(page).not_to have_content('This type of Agent cannot create events.')
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
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        def show
      authorize @user, :change_email?
    end
    
        def resource_params
      params.require(:custom_emoji).permit(:shortcode, :image, :visible_in_picker)
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
    
        @web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data_params,
      user_id: current_user.id,
      access_token_id: doorkeeper_token.id
    )
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
        t.wakeup
    t.value.should == 5
  end
end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
            elsif masked_token?(token)
          token = unmask_token(token)
    
          def call(env)
        unless accepts? env
          instrument env
          result = react env
        end
        result or app.call(env)
      end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
      describe '#referrer' do
    it 'Reads referrer from Referer header' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/valid'}
      expect(subject.referrer(env)).to eq('bar.com')
    end