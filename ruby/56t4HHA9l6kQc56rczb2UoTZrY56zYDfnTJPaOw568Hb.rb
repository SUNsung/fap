
        
              Actions.lane_context[Actions::SharedValues::PLATFORM_NAME] = current_platform
      Actions.lane_context[Actions::SharedValues::LANE_NAME] = full_lane_name
    
          @launch_event_sent = true
      builder = AnalyticsEventBuilder.new(
        p_hash: launch_context.p_hash,
        session_id: session_id,
        action_name: nil,
        fastlane_client_language: launch_context.fastlane_client_language
      )
    
            expect(result[1]).to eq('security default-keychain -s ~/Library/Keychains/test.keychain')
        expect(result[2]).to eq('security unlock-keychain -p testpassword ~/Library/Keychains/test.keychain')
    
        def help_default_value
      return '#{self.default_value} *'.strip if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '''' if self.default_value.instance_of?(String) && self.default_value.empty?
      return ':#{self.default_value}' if self.default_value.instance_of?(Symbol)
    
    class String
  # CrossplatformShellwords
  def shellescape
    CrossplatformShellwords.shellescape(self)
  end
end
    
    describe 'monkey patch of Array.shelljoin (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
    # Contributors should always provide a changelog when submitting a PR
if github.pr_body.length < 5
  warn('Please provide a changelog summary in the Pull Request description @#{github.pr_author}')
end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
      before_action :authenticate_user!
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    When /^I (?:sign|log) in manually as '([^']*)' with password '([^']*)'( on the mobile website)?$/ \
do |username, password, mobile|
  @me = User.find_by_username(username)
  @me.password ||= password
  manual_login
  confirm_login mobile
end
    
    When /^I toggle all nsfw posts$/ do
  all('a.toggle_nsfw_state').each &:click
end
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
        it 'paginates the notifications' do
      25.times { FactoryGirl.create(:notification, :recipient => alice, :target => @post) }
      get :index
      expect(assigns[:notifications].count).to eq(25)
      get :index, params: {page: 2}
      expect(assigns[:notifications].count).to eq(1)
    end
    
    require 'mimemagic'
require 'mimemagic/overlay'
require 'logger'
require 'terrapin'