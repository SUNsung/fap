
        
              ',
                  period_type: period_types[period_type],
                  since: since,
                  like_type: UserAction::LIKE,
                  was_liked_type: UserAction::WAS_LIKED,
                  new_topic_type: UserAction::NEW_TOPIC,
                  reply_type: UserAction::REPLY,
                  regular_post_type: Post.types[:regular]
    
        SCRIPT_ASSET_DIRECTORIES = [
      # [dir, can_use_s3_cdn, can_use_cdn]
      ['/assets/',             true, true],
      ['/brotli_asset/',       true, true],
      ['/extra-locales/',      false, false],
      ['/highlight-js/',       false, true],
      ['/javascripts/',        false, true],
      ['/plugins/',            false, true],
      ['/theme-javascripts/',  false, true],
      ['/svg-sprite/',         false, true],
    ]
    
        cookies[TOKEN_COOKIE] = cookie_hash(@user_token.unhashed_auth_token)
    unstage_user(user)
    make_developer_admin(user)
    enable_bootstrap_mode(user)
    @env[CURRENT_USER_KEY] = user
  end
    
    require 'method_profiler'
    
    describe ScenarioImportsController do
  let(:user) { users(:bob) }
    
        it 'is OK with no hl' do
      stub(params).[](:hl) { nil }
      expect((1..10).select { |i| highlighted?(i) }).to be_empty
    end
  end
end

    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
      end
    
      # Check if there is no signed in user before doing the sign out.
  #
  # If there is no signed in user, it will set the flash message and redirect
  # to the after_sign_out path.
  def verify_signed_out_user
    if all_signed_out?
      set_flash_message! :notice, :already_signed_out
    
    module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
        end
      end
    
          def devise_mapping
        @devise_mapping ||= Devise.mappings[scope_name]
      end
    
    module Devise
  module Models
    class MissingAttribute < StandardError
      def initialize(attributes)
        @attributes = attributes
      end
    
          def time_from_json(value)
        if value =~ /\A\d+\.\d+\Z/
          Time.at(value.to_f)
        else
          Time.parse(value) rescue nil
        end
      end
    
        def log_status(status)
      puts bold status
    end
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
        private
    
        def define_query
      name = @name
      @klass.send :define_method, '#{@name}?' do
        send(name).file?
      end
    end