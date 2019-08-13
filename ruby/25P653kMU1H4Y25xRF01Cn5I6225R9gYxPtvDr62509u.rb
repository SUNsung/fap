
        
                # other app configuration
        FastlaneCore::ConfigItem.new(key: :price_tier,
                                     short_option: '-r',
                                     description: 'The price tier of this application',
                                     is_string: false,
                                     optional: true),
        FastlaneCore::ConfigItem.new(key: :app_rating_config_path,
                                     short_option: '-g',
                                     description: 'Path to the app rating's config',
                                     is_string: true,
                                     optional: true,
                                     verify_block: proc do |value|
                                       UI.user_error!('Could not find config file at path '#{File.expand_path(value)}'') unless File.exist?(value)
                                       UI.user_error!(''#{value}' doesn't seem to be a JSON file') unless FastlaneCore::Helper.json_file?(File.expand_path(value))
                                     end),
        FastlaneCore::ConfigItem.new(key: :submission_information,
                                     short_option: '-b',
                                     description: 'Extra information for the submission (e.g. compliance specifications, IDFA settings)',
                                     is_string: false,
                                     optional: true),
    
          def reset!(attrs = {})
        update_raw_data!(
          {
            asset_token: nil,
            type_of_file: nil,
            url: nil,
            original_file_name: nil
          }.merge(attrs)
        )
      end
    
              display_family.fetch('screenshots', {}).fetch('value', []).each do |screenshot|
            screenshot_data = screenshot['value']
            data = {
                device_type: display_family['name'],
                language: row['language']
            }.merge(screenshot_data)
            result << Tunes::AppScreenshot.factory(data)
          end
        end
    
        #   it 'can add a new trailer given a valid externally provided preview screenshot' do
    #     # remove existing
    #     version.upload_trailer!(nil, 'English', 'ipad')
    
        # Override configuration for a specific platform. If received platform name
    # does not match the platform name available as environment variable, no
    # changes will be applied.
    #
    # @param platform_name Symbol representing a platform name.
    # @yield Block to run for overriding configuration values.
    #
    def for_platform(platform_name)
      if ENV['FASTLANE_PLATFORM_NAME'] == platform_name.to_s
        with_a_clean_config_merged_when_complete do
          yield
        end
      end
    end
    
            # Get version_number
        project = get_project!(folder)
        target = get_target!(project, target_name)
        plist_file = get_plist!(folder, target, configuration)
        version_number = get_version_number!(plist_file)
    
            Actions.lane_context[SharedValues::FL_CHANGELOG] = changelog.strip.length > 0 ? changelog : params[:fallback_changelog]
      end
    
        fill_in(:agent_options, with: '{
      'expected_receive_period_in_days': '2'
      'keep_event': 'false'
    }')
    expect(get_alert_text_from { click_on 'Save' }).to have_text('Sorry, there appears to be an error in your JSON input. Please fix it before continuing.')
  end
    
        before do
      stub(Agents::DotFoo).valid_type?('Agents::DotFoo') { true }
      stub(Agents::DotBar).valid_type?('Agents::DotBar') { true }
    end
    
          it 'loads all workers' do
        workers = @agent_runner.send(:load_workers)
        expect(workers).to be_a(Hash)
        expect(workers.keys).to eq(['HuginnScheduler', 'DelayedJobWorker'])
      end
    
      describe '#working?' do
    it 'should not be working until the first event was received' do
      expect(@checker).not_to be_working
      @checker.last_receive_at = Time.now
      expect(@checker).to be_working
    end
  end
    
      def test_resolve_C3
    @xref = RDoc::CrossReference.new @c3
    
        m1_m2_k0.add_extend e0_m4
    m1_m2_k0.add_extend e0_m5
    m1_m2_k0.add_extend e0_m6
    m1_m2_k0.add_extend e0_m1
    m1_m2_k0.add_extend e0_m2
    m1_m2_k0.add_extend e0_m3
    
        assert_equal '\n<h1 id=\'label-Hello\'>Hello#{links}</h1>\n', description
  end
    
      def header
    <<-'HEADER'
# SOME DESCRIPTIVE TITLE.
# Copyright (C) YEAR THE PACKAGE'S COPYRIGHT HOLDER
# This file is distributed under the same license as the PACKAGE package.
# FIRST AUTHOR <EMAIL@ADDRESS>, YEAR.
#, fuzzy
msgid ''
msgstr ''
'Project-Id-Version: PACKAGE VERSEION\n'
'Report-Msgid-Bugs-To:\n'
'PO-Revision-Date: YEAR-MO_DA HO:MI+ZONE\n'
'Last-Translator: FULL NAME <EMAIL@ADDRESS>\n'
'Language-Team: LANGUAGE <LL@li.org>\n'
'Language:\n'
'MIME-Version: 1.0\n'
'Content-Type: text/plain; charset=CHARSET\n'
'Content-Transfer-Encoding: 8bit\n'
'Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\n'
    HEADER
  end
    
        raw = <<-RAW
#{paragraph1}
    
    
    
        expected = doc(
      list(:NUMBER,
        item(nil, para('one')),
        item(nil, para('two'))))
    
            para('You can write this:'),
    
          # Initialize a new instance
      #
      # @param  [PodTarget, AggregateTarget] target @see target
      #
      def initialize(target)
        @target = target
        @headers = [
          Header.new(target.umbrella_header_path.basename, true),
        ]
      end
    
          # @return [Symbol] the linkage for this build type, one of KNOWN_LINKAGE_OPTIONS
      #
      attr_reader :linkage
    
            it 'does not use appspecs for equality' do
          k0 = PodVariant.new(@specs, [], @appspecs, @platform, false)
          k1 = PodVariant.new(@specs, [], [], @platform, false)
          k0.should == k1
        end
    
              it 'adds Swift-specific build settings to the build settings' do
            @target.stubs(:requires_frameworks?).returns(true)
            @target.stubs(:uses_swift?).returns(true)
            @installer.send(:add_target).resolved_build_setting('SWIFT_OPTIMIZATION_LEVEL').should == {
              'Release' => '-O',
              'Debug' => '-Onone',
              'Test' => nil,
              'AppStore' => nil,
            }
            @installer.send(:add_target).resolved_build_setting('SWIFT_COMPILATION_MODE').should == {
              'Release' => 'wholemodule',
              'Debug' => nil,
              'Test' => nil,
              'AppStore' => nil,
            }
            @installer.send(:add_target).resolved_build_setting('SWIFT_ACTIVE_COMPILATION_CONDITIONS').should == {
              'Release' => nil,
              'Debug' => 'DEBUG',
              'Test' => nil,
              'AppStore' => nil,
            }
          end
    
    module Pod
  class Installer
    class Analyzer
      # This class represents the state of a collection of Pods.
      #
      # @note The names of the pods stored by this class are always the **root**
      #       name of the specification.
      #
      # @note The motivation for this class is to ensure that the names of the
      #       subspecs are added instead of the name of the Pods.
      #
      class SpecsState
        # @return [Set<String>] the names of the pods that were added.
        #
        attr_reader :added
    
    Then(/^the default stage files are created$/) do
  staging = TestApp.test_app_path.join('config/deploy/staging.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(staging)).to be true
  expect(File.exist?(production)).to be true
end
    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
    MESSAGE
      end
    end
  end
end

    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
        it { expect(alias_node.new_identifier.sym_type?).to be(true) }
    it { expect(alias_node.new_identifier.children.first).to eq(:foo) }
  end
    
        context 'with an empty body' do
      let(:source) do
        'class Foo; end'
      end
    
          def contained_by_breakable_collection_on_same_line?(node)
        node.each_ancestor.find do |ancestor|
          # Ignore ancestors on different lines.
          break if ancestor.first_line != node.first_line
    
      shared_examples 'invalid' do
    it 'is invalid' do
      expect { instance }
        .to raise_error(RuboCop::NodePattern::Invalid)
    end
  end
    
          it 'accepts block body starting with a line with spaces' do
        expect_no_offenses(<<~RUBY)
          some_method #{open}
            
            do_something
          #{close}
        RUBY
      end
    
          context 'and AllowUnusedKeywordArguments set' do
        let(:cop_config) { { 'AllowUnusedKeywordArguments' => true } }
    
          def extract_rhs(node)
        if node.casgn_type?
          _scope, _lhs, rhs = *node
        elsif node.op_asgn_type?
          _lhs, _op, rhs = *node
        elsif node.call_type?
          rhs = node.last_argument
        elsif node.assignment?
          _lhs, rhs = *node
        end
    
              range = range_between(space_begin_pos, space_end_pos)
          add_offense(range, location: range,
                             message: '#{msg} block parameter detected.')
        end
      end
    end
  end
end

    
        def find_line_item_by_variant(variant, options = {})
      line_items.detect do |line_item|
        line_item.variant_id == variant.id &&
          Spree::Dependencies.cart_compare_line_items_service.constantize.new.call(order: self, line_item: line_item, options: options).value
      end
    end
    
          def shipping_address
        order.ship_address.try(:active_merchant_hash)
      end
    
        def validators
      @validators ||= permitted_eligibility_validators.map { |v| v.new(@return_item) }
    end
  end
end

    
      def self.check_unused_translations
    self.used_translations ||= []
    self.unused_translation_messages = []
    self.unused_translations = []
    load_translations(translations)
    translation_diff = unused_translations - used_translations
    translation_diff.each do |translation|
      Spree.unused_translation_messages << '#{translation} (#{I18n.locale})'
    end
  end
    
        unreturned_return_items.group_by(&:exchange_shipments).each do |shipments, return_items|
      original_order = shipments.first.order
      order_attributes = {
        bill_address: original_order.bill_address,
        ship_address: original_order.ship_address,
        email: original_order.email
      }
      order_attributes[:store_id] = original_order.store_id
      order = Spree::Order.create!(order_attributes)
    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
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
    
    require 'rainbow/ext/string' unless String.respond_to?(:color)
    
            presenter = env[Grape::Env::API_ENDPOINT].entity_class_for_obj(presented_message, present_options)
    
    After do
  Capybara.reset_sessions!
end
    
      it 'should find the ancestor element using the given locator and options' do
    el = @session.find(:css, '#child')
    expect(el.ancestor('//div', text: 'Ancestor\nAncestor\nAncestor')[:id]).to eq('ancestor3')
  end
    
      it 'should not accept count options' do
    expect { @element.assert_matches_selector(:css, '.number', count: 1) }.to raise_error(ArgumentError, /count/)
  end
    
        it 'doesn't find invisible elements when `true`' do
      expect do
        @session.find_by_id('hidden_via_ancestor', visible: true)
      end.to raise_error(Capybara::ElementNotFound)
    end
  end
end
