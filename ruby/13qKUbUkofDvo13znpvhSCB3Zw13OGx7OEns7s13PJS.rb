
        
                  content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class TextField < Base # :nodoc:
        include Placeholderable
    
        def _conditional_layout?
      true
    end
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
    Given(%r!^I have an? '(.*)' page(?: with (.*) '(.*)')? that contains '(.*)'$!) do |file, key, value, text|
  File.write(file, Jekyll::Utils.strip_heredoc(<<-DATA))
    ---
    #{key || 'layout'}: #{value || 'none'}
    ---
    
    def jekyll_run_status
  if Paths.status_file.file?
    then return Paths.status_file.read
  end
end
    
      s.rdoc_options = ['--charset=UTF-8']
  s.extra_rdoc_files = %w(README.markdown LICENSE)
    
                c.option 'force', '--force', 'Force creation even if PATH already exists'
            c.option 'blank', '--blank', 'Creates scaffolding but with empty files'
            c.option 'skip-bundle', '--skip-bundle', 'Skip 'bundle install''
    
        group.add(moderator)
    group.save
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
    describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
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
    
      describe '#nav_link' do
    it 'returns a nav link' do
      stub(self).current_page?('/things') { false }
      nav = nav_link('Things', '/things')
      a = Nokogiri(nav).at('li:not(.active) > a[href='/things']')
      expect(a.text.strip).to eq('Things')
    end
    
              existing_scenario.reload
          expect(existing_scenario.guid).to eq(guid)
          expect(existing_scenario.tag_fg_color).to eq(tag_fg_color)
          expect(existing_scenario.tag_bg_color).to eq(tag_bg_color)
          expect(existing_scenario.icon).to eq(icon)
          expect(existing_scenario.description).to eq(description)
          expect(existing_scenario.name).to eq(name)
          expect(existing_scenario.source_url).to eq(source_url)
          expect(existing_scenario.public).to be_falsey
        end
    
        context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
              expect {
            @agent.options[:foo] = 'bar2'
            @agent.keep_events_for = 3.days
            @agent.save!
          }.to change { @event.reload.expires_at }
          expect(@event.expires_at.to_i).to be_within(60 * 61).of(1.days.from_now.to_i) # The larger time is to deal with daylight savings
        end
    
      url 'http://swupdl.adobe.com/updates/oobe/aam20/mac/AdobeLightroom-#{version.major}.0/#{version}/setup.dmg'
  name 'Adobe Photoshop Lightroom'
  homepage 'https://www.adobe.com/products/photoshop-lightroom.html'
    
    When /^I (?:sign|log) in as '([^']*)'( on the mobile website)?$/ do |email, mobile|
  @me = User.find_by_email(email)
  @me.password ||= 'password'
  automatic_login
  confirm_login mobile
end
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
      people.each do |person|
    contacts << Contact.new(:person_id => person.id, :user_id => @me.id, :sharing => true, :receiving => true)
  end
  Contact.import(contacts)
  contacts = @me.contacts.limit(n.to_i)
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        context 'but no comment after the last element' do
      it 'autocorrects the closing brace' do
        new_source = autocorrect_source(source)
    
          # users should be able to set price when importing orders via api
      def permitted_line_item_attributes
        if @current_user_roles.include?('admin')
          super + [:price, :variant_id, :sku]
        else
          super
        end
      end
    
            def find_address
          if @order.bill_address_id == params[:id].to_i
            @order.bill_address
          elsif @order.ship_address_id == params[:id].to_i
            @order.ship_address
          else
            raise CanCan::AccessDenied
          end
        end
      end
    end
  end
end

    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
            def find_order(lock = false)
          @order = Spree::Order.lock(lock).find_by!(number: params[:id])
        end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end