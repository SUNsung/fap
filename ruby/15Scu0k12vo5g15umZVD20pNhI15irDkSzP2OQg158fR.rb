
        
            def show_message
      UI.message('Sending anonymous analytics information')
      UI.message('Learn more at https://docs.fastlane.tools/#metrics')
      UI.message('No personal or sensitive data is sent.')
      UI.message('You can disable this by adding `opt_out_usage` at the top of your Fastfile')
    end
    
              it '--log-path option is present' do
            result = Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', log_path: 'bla.log')
              end').runner.execute(:test)
            expect(result).to eq('carthage build --log-path bla.log')
          end
        end
    
              it 'uses system wide oclint' do
            expect(result).to include(command)
          end
        end
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
        it 'returns a FontAwesome icon element' do
      icon = icon_tag('fa-copy')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('i.fa.fa-copy')).to be_a Nokogiri::XML::Element
    end
    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
          describe '#import' do
        it 'uses the existing scenario, updating its data' do
          expect {
            scenario_import.import(:skip_agents => true)
            expect(scenario_import.scenario).to eq(existing_scenario)
          }.not_to change { users(:bob).scenarios.count }
    
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

    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
        def initialize
      @pages = {}
    end
    
          def filters
        html_filters.to_a + text_filters.to_a
      end
    
          INDEX = Set.new
    
    Then(/^the invalid (.+) release is ignored$/) do |filename|
  test = 'ls -g #{TestApp.releases_path} | grep #{filename}'
  _, _, status = vagrant_cli_command('ssh -c #{test.shellescape}')
  expect(status).to be_success
end
    
    Given(/^the configuration is in a custom location$/) do
  TestApp.move_configuration_to_custom_location('app')
end
    
    World(VagrantHelpers)

    
          def fetch(key, default=nil, &block)
        fetched_keys << key unless fetched_keys.include?(key)
        peek(key, default, &block)
      end
    
    # Disable the metadata feature
$METADATA = false
    
      if wiki_options[:plantuml_url]
    Gollum::Filter::PlantUML.configure do |config|
      puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
      config.url = wiki_options[:plantuml_url]
    end
  end
    
          it 'registers an offense for one hash parameter with braces and one ' \
         'without' do
        expect_offense(<<-RUBY.strip_indent)
          where({ x: 1 }, y: 2)
                          ^^^^ Missing curly braces around a hash parameter.
        RUBY
      end
    end
    
      context 'symmetrical style' do
    let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
          # The name of the defined method as a symbol.
      #
      # @return [Symbol] the name of the defined method
      def method_name
        node_parts[2]
      end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
            [condition, true_branch, false_branch]
      end
    end
  end
end

    
            def key_delta(alignment = :left)
          return 0 if first.same_line?(second)
          return 0 if keyword_splat? && alignment == :right