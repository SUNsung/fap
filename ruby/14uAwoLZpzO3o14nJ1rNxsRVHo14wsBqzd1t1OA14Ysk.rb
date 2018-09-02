
        
            context 'updating existing users' do
      it 'follows the edit link' do
        visit admin_users_path
        click_on('bob')
        expect(page).to have_text('Edit User')
      end
    
    describe 'Dry running an Agent', js: true do
  let(:agent)   { agents(:bob_website_agent) }
  let(:formatting_agent) { agents(:bob_formatting_agent) }
  let(:user)    { users(:bob) }
  let(:emitter) { agents(:bob_weather_agent) }
    
      before do
    login_as(user)
  end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
              valid_parsed_weather_agent_data.each do |key, value|
            if key == :type
              value = value.split('::').last
            end
            expect(weather_agent_diff).to respond_to(key)
            field = weather_agent_diff.send(key)
            expect(field).to be_a(ScenarioImport::AgentDiff::FieldDiff)
            expect(field.incoming).to eq(value)
            expect(field.updated).to eq(value)
            expect(field.current).to be_nil
          end
          expect(weather_agent_diff).not_to respond_to(:propagate_immediately)
    
      it 'converts values to Float' do
    expect(location.lat).to be_a Float
    expect(location.lat).to eq 2.0
    expect(location.lng).to be_a Float
    expect(location.lng).to eq 3.0
    expect(location.radius).to be_a Float
    expect(location.radius).to eq 300.0
    expect(location.speed).to be_a Float
    expect(location.speed).to eq 2.0
    expect(location.course).to be_a Float
    expect(location.course).to eq 30.0
  end
    
    source 'https://rubygems.org'
    
    class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
    group :docs do
  gem 'typhoeus'
  gem 'nokogiri'
  gem 'html-pipeline'
  gem 'image_optim'
  gem 'image_optim_pack', platforms: :ruby
  gem 'progress_bar', require: false
  gem 'unix_utils', require: false
  gem 'tty-pager', require: false
end
    
      {
    '/tips'                   => '/help',
    '/css-data-types/'        => '/css-values-units/',
    '/css-at-rules/'          => '/?q=css%20%40',
    '/dom/window/setinterval' => '/dom/windoworworkerglobalscope/setinterval',
    '/html/article'           => '/html/element/article',
    '/html-html5/'            => 'html-elements/',
    '/html-standard/'         => 'html-elements/',
    '/http-status-codes/'     => '/http-status/',
    '/ruby/bignum'            => '/ruby~2.3/bignum',
    '/ruby/fixnum'            => '/ruby~2.3/fixnum',
  }.each do |path, url|
    class_eval <<-CODE, __FILE__, __LINE__ + 1
      get '#{path}' do
        redirect '#{url}', 301
      end
    CODE
  end
    
      extend Instrumentable
    
        def version
      context[:version]
    end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        def type=(value)
      @type = value.try :strip
    end
    
        def handle_response(response)
      on_response.each do |callback|
        result = callback.call(response)
        result.each { |url| request(url) } if result.is_a? Array
      end
    end
  end
end

    
        def process_response?(response)
      response.body.present?
    end
    
    describe 'Kernel#srand' do
  it 'needs to be reviewed for spec completeness'
end

    
      before :each do
    ENV['TEST_SH_EXPANSION'] = 'foo'
    @shell_var = '$TEST_SH_EXPANSION'
    platform_is :windows do
      @shell_var = '%TEST_SH_EXPANSION%'
    end
  end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def inventory_unit
          @inventory_unit ||= InventoryUnit.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def new; end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
                import_params = if @current_user_roles.include?('admin')
                              params[:order].present? ? params[:order].permit! : {}
                            else
                              order_params
                            end
    
            def payment_params
          params.require(:payment).permit(permitted_payment_attributes)
        end
      end
    end
  end
end

    
              @properties = if params[:ids]
                          @properties.where(id: params[:ids].split(',').flatten)
                        else
                          @properties.ransack(params[:q]).result
                        end
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end
    
          puts 'Halting #{machines}'
      LogStash::VagrantHelpers.halt(machines, options)
    end
  end