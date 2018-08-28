
        
        describe 'Dry running an Agent', js: true do
  let(:agent)   { agents(:bob_website_agent) }
  let(:formatting_agent) { agents(:bob_formatting_agent) }
  let(:user)    { users(:bob) }
  let(:emitter) { agents(:bob_weather_agent) }
    
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
    
        describe 'with block' do
      it 'returns a nav link with menu' do
        stub(self).current_page?('/things') { false }
        stub(self).current_page?('/things/stuff') { false }
        nav = nav_link('Things', '/things') { nav_link('Stuff', '/things/stuff') }
        expect(nav).to be_html_safe
        a0 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > a[href='/things']')
        expect(a0).to be_a Nokogiri::XML::Element
        expect(a0.text.strip).to eq('Things')
        a1 = Nokogiri(nav).at('li.dropdown.dropdown-hover:not(.active) > li:not(.active) > a[href='/things/stuff']')
        expect(a1).to be_a Nokogiri::XML::Element
        expect(a1.text.strip).to eq('Stuff')
      end
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
        it 'should work with nested hashes' do
      @agent.options['very'] = {'nested' => '$.value'}
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'very' => {'nested' => '{{value}}'}, 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
    describe Location do
  let(:location) {
    Location.new(
      lat: BigDecimal.new('2.0'),
      lng: BigDecimal.new('3.0'),
      radius: 300,
      speed: 2,
      course: 30)
  }
    
        it 'requires a message' do
      @log.message = ''
      expect(@log).not_to be_valid
      @log.message = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:message)
    end
    
    # SPECS ===============================================================
    
          def accepts?(env)
        raise NotImplementedError, '#{self.class} implementation pending'
      end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
      it 'ignores empty arrays' do
    expect_no_offenses('[]')
  end
    
        context 'and a comment after the last element' do
      let(:b_comment) { ' # comment b' }
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for redundant `begin` blocks.
      #
      # Currently it checks for code like this:
      #
      # @example
      #
      #   # bad
      #   def redundant
      #     begin
      #       ala
      #       bala
      #     rescue StandardError => e
      #       something
      #     end
      #   end
      #
      #   # good
      #   def preferred
      #     ala
      #     bala
      #   rescue StandardError => e
      #     something
      #   end
      #
      #   # bad
      #   # When using Ruby 2.5 or later.
      #   do_something do
      #     begin
      #       something
      #     rescue => ex
      #       anything
      #     end
      #   end
      #
      #   # good
      #   # In Ruby 2.5 or later, you can omit `begin` in `do-end` block.
      #   do_something do
      #     something
      #   rescue => ex
      #     anything
      #   end
      #
      #   # good
      #   # Stabby lambdas don't support implicit `begin` in `do-end` blocks.
      #   -> do
      #     begin
      #       foo
      #     rescue Bar
      #       baz
      #     end
      #   end
      class RedundantBegin < Cop
        MSG = 'Redundant `begin` block detected.'.freeze
    
        examples.each do |example|
      begin
        buffer = Parser::Source::Buffer.new('<code>', 1)
        buffer.source = example.text
        parser = Parser::Ruby25.new(RuboCop::AST::Builder.new)
        parser.diagnostics.all_errors_are_fatal = true
        parser.parse(buffer)
      rescue Parser::SyntaxError => ex
        path = example.object.file
        puts '#{path}: Syntax Error in an example. #{ex}'
        ok = false
      end
    end
  end
  abort unless ok
end

    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
          # Checks whether the `if` node has an `else` clause.
      #
      # @note This returns `true` for nodes containing an `elsif` clause.
      #       This is legacy behavior, and many cops rely on it.
      #
      # @return [Boolean] whether the node has an `else` clause
      def else?
        loc.respond_to?(:else) && loc.else
      end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
      end