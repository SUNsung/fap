
        
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
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
        it 'should raise error when invalid response arrives' do
      stub(HTTParty).post { {'blah' => 'blah'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Invalid response from Boxcar:/)
    end
    
          it 'should conditionally configure targets interpolating agent attributes' do
        expect {
          event = Event.new
          event.agent = agents(:bob_website_agent)
          event.payload = {
            'price' => '198.0',
            'agent_id' => real_target.id
          }
          agent.receive([event])
        }.to change {
          real_target.options['rules'][0]['value']
        }.from('200.0').to('198.0') & not_change {
          target.options
        }
      end
    end
  end
end

    
      # Get message for given
  def find_message(kind, options = {})
    options[:scope] ||= translation_scope
    options[:default] = Array(options[:default]).unshift(kind.to_sym)
    options[:resource_name] = resource_name
    options = devise_i18n_options(options)
    I18n.t('#{options[:resource_name]}.#{kind}', options)
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
    require 'uri'
    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
    module Devise
  # Responsible for handling devise mappings and routes configuration. Each
  # resource configured by devise_for in routes is actually creating a mapping
  # object. You can refer to devise_for in routes for usage options.
  #
  # The required value in devise_for is actually not used internally, but it's
  # inflected to find all other values.
  #
  #   map.devise_for :users
  #   mapping = Devise.mappings[:user]
  #
  #   mapping.name #=> :user
  #   # is the scope used in controllers and warden, given in the route as :singular.
  #
  #   mapping.as   #=> 'users'
  #   # how the mapping should be search in the path, given in the route as :as.
  #
  #   mapping.to   #=> User
  #   # is the class to be loaded from routes, given in the route as :class_name.
  #
  #   mapping.modules  #=> [:authenticatable]
  #   # is the modules included in the class
  #
  class Mapping #:nodoc:
    attr_reader :singular, :scoped_path, :path, :controllers, :path_names,
                :class_name, :sign_out_via, :format, :used_routes, :used_helpers,
                :failure_app, :router_name
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
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