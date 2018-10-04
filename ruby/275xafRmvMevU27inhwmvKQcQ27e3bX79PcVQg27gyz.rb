
        
            # User defines a new private lane, which can't be called from the CLI
    def private_lane(lane_name, &block)
      UI.user_error!('You have to pass a block using 'do' for lane '#{lane_name}'. Make sure you read the docs on GitHub.') unless block
    
    module FastlaneCore
  class AnalyticsSession
    GA_TRACKING = 'UA-121171860-1'
    
            message = '#{grouping}/test/#{specified_build_number} (fastlane)'
        tag = '#{grouping}/test/#{specified_build_number}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          it 'handles the extensions parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.m')
      end
    
        it 'recognizes an array as the first element of a command' do
      message = 'A message'
      command = command_from_args(['/usr/local/bin/git', 'git'], 'commit', '-m', message)
      expect(command).to eq('/usr/local/bin/git commit -m #{message.shellescape}')
    end
  end
end
    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
            def initialize(badge)
          @entity = badge.entity
          @status = badge.status
        end
    
      it 'renders the import form' do
    visit new_scenario_imports_path
    expect(page).to have_text('Import a Public Scenario')
  end
    
        context 'when Bob imports Jane's scenario' do
      let!(:existing_scenario) do
        _existing_scenerio = users(:jane).scenarios.build(:name => 'an existing scenario', :description => 'something')
        _existing_scenerio.guid = guid
        _existing_scenerio.save!
        _existing_scenerio
      end
    
      it 'schould register the schedules with the rufus scheduler and run' do
    mock(@rufus_scheduler).join
    scheduler = HuginnScheduler.new
    scheduler.setup!(@rufus_scheduler, Mutex.new)
    scheduler.run
  end
    
      it 'is droppable' do
    {
      '{{location.lat}}' => '2.0',
      '{{location.latitude}}' => '2.0',
      '{{location.lng}}' => '3.0',
      '{{location.longitude}}' => '3.0',
      '{{location.latlng}}' => '2.0,3.0',
    }.each { |template, result|
      expect(Liquid::Template.parse(template).render('location' => location.to_liquid)).to eq(result),
        'expected #{template.inspect} to expand to #{result.inspect}'
    }
  end
end

    
      describe 'down' do
    let :valid_options do
      super().merge('extract' => new_extract,
                    'template' => new_template)
    end
    
      def translation_scope
    'devise.omniauth_callbacks'
  end
end

    
      # GET /resource/password/edit?reset_password_token=abcdef
  def edit
    self.resource = resource_class.new
    set_minimum_password_length
    resource.reset_password_token = params[:reset_password_token]
  end
    
        users.all?(&:blank?)
  end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
      protected
    
        it 'raises Errno::ENOENT when `exception: true` is given and the specified command does not exist' do
      lambda { @object.system('feature_14386', exception: true) }.should raise_error(Errno::ENOENT)
    end
  end
    
      it 'no raises a RuntimeError on symbols' do
    v = :sym
    lambda { v.taint }.should_not raise_error(RuntimeError)
    v.tainted?.should == false
  end
    
    When /^I (?:sign|log) in manually as '([^']*)' with password '([^']*)'( on the mobile website)?$/ \
do |username, password, mobile|
  @me = User.find_by_username(username)
  @me.password ||= password
  manual_login
  confirm_login mobile
end
    
    Given /^many posts from alice for bob$/ do
  alice = FactoryGirl.create(:user_with_aspect, :username => 'alice', :email => 'alice@alice.alice', :password => 'password', :getting_started => false)
  bob = FactoryGirl.create(:user_with_aspect, :username => 'bob', :email => 'bob@bob.bob', :password => 'password', :getting_started => false)
  connect_users_with_aspects(alice, bob)
  time_fulcrum = Time.now - 40000
  time_interval = 1000
  (1..30).each do |n|
    post = alice.post :status_message, :text => '#{alice.username} - #{n} - #seeded', :to => alice.aspects.where(:name => 'generic').first.id
    post.created_at = time_fulcrum - time_interval
    post.updated_at = time_fulcrum + time_interval
    post.save
    time_interval += 1000
  end
end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        # captcha needs to be filled out, because the field is required (HTML5)
    # in test env, the captcha will always pass successfully
    fill_in('user_captcha', with: '123456')
  end
    
        it 'generates the aspects_manage fixture', :fixture => true do
      get :index, params: {a_id: @aspect.id}
      save_fixture(html_for('body'), 'aspects_manage')
    end
    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
    require 'sass/engine'
require 'sass/plugin' if defined?(Merb::Plugins)
require 'sass/railtie'
require 'sass/features'

    
            sseq = first_sseq(child)
        next child unless sseq.is_a?(Sass::Selector::SimpleSequence)
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
        def setup_filters
      @filters = cmdline_filters
      @filters += @custom_filters if @custom_filters
      @filters << Filter.new(:role, ENV['ROLES']) if ENV['ROLES']
      @filters << Filter.new(:host, ENV['HOSTS']) if ENV['HOSTS']
      fh = fetch_for(:filter, {}) || {}
      @filters << Filter.new(:host, fh[:hosts]) if fh[:hosts]
      @filters << Filter.new(:role, fh[:roles]) if fh[:roles]
      @filters << Filter.new(:host, fh[:host]) if fh[:host]
      @filters << Filter.new(:role, fh[:role]) if fh[:role]
    end
    
            self
      end
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is truthy.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the truthy branch node of the `if` node
      # @return [nil] if the truthy branch is empty
      def if_branch
        node_parts[1]
      end
    
          # Checks whether the `pair` uses a hash rocket delimiter.
      #
      # @return [Boolean] whether this `pair` uses a hash rocket delimiter
      def hash_rocket?
        loc.operator.is?(HASH_ROCKET)
      end
    
          def order_id
        params[:order_id] || params[:checkout_id] || params[:order_number]
      end
    
            def product_property_params
          params.require(:product_property).permit(permitted_product_properties_attributes)
        end
      end
    end
  end
end

    
            def destroy
          if @property
            authorize! :destroy, @property
            @property.destroy
            respond_with(@property, status: 204)
          else
            invalid_resource!(@property)
          end
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
            private
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end