
        
                def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
      context 'successful dry runs' do
    before do
      stub_request(:get, 'http://xkcd.com/').
        with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
        to_return(:status => 200, :body => File.read(Rails.root.join('spec/data_fixtures/xkcd.html')), :headers => {})
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
    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy.text-info')).to be_a Nokogiri::XML::Element
    end
  end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
      describe '.seed' do
    it 'imports a set of agents to get the user going when they are first created' do
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
          @log.level = -1
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
    describe Agents::BoxcarAgent do
  before(:each) do
  @valid_params = {
                    'user_credentials' => 'access_token',
                    'title' => 'Sample Title',
                    'body' => 'Sample Body'
                  }
  @checker = Agents::BoxcarAgent.new(:name => 'boxcartest', :options => @valid_params)
  @checker.user = users(:bob)
  @checker.save!
    
    answer_ary = answer.to_a
# puts answer_ary

    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end