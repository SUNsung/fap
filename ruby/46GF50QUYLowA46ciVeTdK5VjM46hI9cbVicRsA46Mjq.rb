
        
              it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
        it 'returns a Glyphicon icon element with an addidional class' do
      icon = icon_tag('glyphicon-help', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help.text-info')).to be_a Nokogiri::XML::Element
    end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        stub.any_instance_of(Agents::SchedulerAgent).second_precision_enabled { true }
    
          a = '        Events will have the fields you specified.  Your options look like:\n\n            {\n      \'url\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@src\'\n      },\n      \'title\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@title\'\n      }\n    }\'\n'
      expect(Utils.unindent(a)).to eq('Events will have the fields you specified.  Your options look like:\n\n    {\n      \'url\': {\n\'css\': \'#comic img\',\n\'value\': \'@src\'\n      },\n      \'title\': {\n\'css\': \'#comic img\',\n\'value\': \'@title\'\n      }\n    }\'')
    end
  end
    
        it 'should generate the correct projects url' do
      expect(@checker.send(:projects_url)).to eq('https://basecamp.com/12345/api/v1/projects.json')
    end
    
        ntheta    = NAO_SAMPLES
    nphi      = NAO_SAMPLES
    eps       = 0.0001
    occlusion = 0.0
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end
    
          # Calls the given block for each condition node in the `when` branch.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_condition
        return conditions.to_enum(__method__) unless block_given?
    
          each_mentioned_cop do |cop_name, disabled, line, single_line|
        analyses[cop_name] =
          analyze_cop(analyses[cop_name], disabled, line, single_line)
      end
    
    module RuboCop
  module Cop
    # Identifier of all cops containing a department and cop name.
    #
    # All cops are identified by their badge. For example, the badge
    # for `RuboCop::Cop::Layout::Tab` is `Layout/Tab`. Badges can be
    # parsed as either `Department/CopName` or just `CopName` to allow
    # for badge references in source files that omit the department
    # for RuboCop to infer.
    class Badge
      # Error raised when a badge parse fails.
      class InvalidBadge < Error
        MSG = 'Invalid badge %<badge>p. ' \
              'Expected `Department/CopName` or `CopName`.'.freeze