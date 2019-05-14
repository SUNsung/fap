
        
                private
    
              builder = LabelBuilder.new(@template_object, @object_name, @method_name, @object, tag_value)
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
        class AbstractWithStringChild < AbstractWithString
      def index
        render template: ActionView::Template::Text.new('Hello abstract child!')
      end
    end
    
    $LOAD_PATH.unshift File.expand_path('lib', __dir__)
require 'jekyll/version'
    
    # Test if processing content string without any Liquid constructs, via Liquid,
# is slower than checking whether constructs exist ( using `String#include?` )
# and return-ing the 'plaintext' content string as is..
#
# Ref: https://github.com/jekyll/jekyll/pull/6735
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
          def before_feature(_feature)
        @exceptions = []
        @indent = 0
      end
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        it 'returns true if a ShellCommandAgent is present' do
      valid_parsed_data[:agents][0][:type] = 'Agents::ShellCommandAgent'
      expect(ScenarioImport.new(:data => valid_parsed_data.to_json)).to be_dangerous
    end
  end
    
        after(:each) do
      @agent_runner.stop
      AgentRunner.class_variable_set(:@@agents, [])
    end
    
    describe AgentsExporter do
  describe '#as_json' do
    let(:name) { 'My set of Agents' }
    let(:description) { 'These Agents work together nicely!' }
    let(:guid) { 'some-guid' }
    let(:tag_fg_color) { '#ffffff' }
    let(:tag_bg_color) { '#000000' }
    let(:icon) { 'Camera' }
    let(:source_url) { 'http://yourhuginn.com/scenarios/2/export.json' }
    let(:agent_list) { [agents(:jane_weather_agent), agents(:jane_rain_notifier_agent)] }
    let(:exporter) { AgentsExporter.new(
      agents: agent_list, name: name, description: description,
      source_url: source_url, guid: guid, tag_fg_color: tag_fg_color,
      tag_bg_color: tag_bg_color, icon: icon) }
    
      let :reverted_extract do
    old_extract
  end
    
      describe '#helpers' do
    it 'should return the correct request header' do
      expect(@checker.send(:request_options)).to eq({:headers => {'aftership-api-key' => '800deeaf-e285-9d62-bc90-j999c1973cc9', 'Content-Type'=>'application/json'}})
    end