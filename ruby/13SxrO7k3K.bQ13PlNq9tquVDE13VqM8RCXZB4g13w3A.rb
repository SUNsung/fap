
        
            Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
        it 'understands hl=-' do
      stub(params).[](:hl) { '-' }
      expect((1..10).select { |i| highlighted?(i) }).to eq [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    end
    
    describe DotHelper do
  describe 'with example Agents' do
    class Agents::DotFoo < Agent
      default_schedule '2pm'
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
    describe ScenarioImport do
  let(:user) { users(:bob) }
  let(:guid) { 'somescenarioguid' }
  let(:tag_fg_color) { '#ffffff' }
  let(:tag_bg_color) { '#000000' }
  let(:icon) { 'Star' }
  let(:description) { 'This is a cool Huginn Scenario that does something useful!' }
  let(:name) { 'A useful Scenario' }
  let(:source_url) { 'http://example.com/scenarios/2/export.json' }
  let(:weather_agent_options) {
    {
      'api_key' => 'some-api-key',
      'location' => '12345'
    }
  }
  let(:trigger_agent_options) {
    {
      'expected_receive_period_in_days' => 2,
      'rules' => [{
                    'type' => 'regex',
                    'value' => 'rain|storm',
                    'path' => 'conditions',
                  }],
      'message' => 'Looks like rain!'
    }
  }
  let(:valid_parsed_weather_agent_data) do
    {
      :type => 'Agents::WeatherAgent',
      :name => 'a weather agent',
      :schedule => '5pm',
      :keep_events_for => 14.days,
      :disabled => true,
      :guid => 'a-weather-agent',
      :options => weather_agent_options
    }
  end
  let(:valid_parsed_trigger_agent_data) do
    {
      :type => 'Agents::TriggerAgent',
      :name => 'listen for weather',
      :keep_events_for => 0,
      :propagate_immediately => true,
      :disabled => false,
      :guid => 'a-trigger-agent',
      :options => trigger_agent_options
    }
  end
  let(:valid_parsed_basecamp_agent_data) do
    {
      :type => 'Agents::BasecampAgent',
      :name => 'Basecamp test',
      :schedule => 'every_2m',
      :keep_events_for => 0,
      :propagate_immediately => true,
      :disabled => false,
      :guid => 'a-basecamp-agent',
      :options => {project_id: 12345}
    }
  end
  let(:valid_parsed_data) do
    {
      schema_version: 1,
      name: name,
      description: description,
      guid: guid,
      tag_fg_color: tag_fg_color,
      tag_bg_color: tag_bg_color,
      icon: icon,
      source_url: source_url,
      exported_at: 2.days.ago.utc.iso8601,
      agents: [
        valid_parsed_weather_agent_data,
        valid_parsed_trigger_agent_data
      ],
      links: [
        { :source => 0, :receiver => 1 }
      ],
      control_links: []
    }
  end
  let(:valid_data) { valid_parsed_data.to_json }
  let(:invalid_data) { { :name => 'some scenario missing a guid' }.to_json }
    
        it 'should work with nested arrays' do
      @agent.options['array'] = ['one', '$.two']
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'array' => ['one', '{{two}}'], 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
    SPREE_GEMS = %w(core api cmd backend frontend sample).freeze
    
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

    
              can_event = 'can_#{@event}?'
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def remove_coupon_code
          find_order(true)
          authorize! :update, @order, order_token
          @handler = Spree::PromotionHandler::Coupon.new(@order).remove(params[:coupon_code])
          status = @handler.successful? ? 200 : 404
          render 'spree/api/v1/promotions/handler', status: status
        end
    
              if params[:stock_item].key?(:backorderable)
            @stock_item.backorderable = params[:stock_item][:backorderable]
            @stock_item.save
          end